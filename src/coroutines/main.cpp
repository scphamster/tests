#include <iostream>
#include <coroutine>

// A simple coroutine that yields a sequence of numbers
class NumberSequence {
public:
    struct promise_type {
        int current_value;

        NumberSequence get_return_object() {
            return NumberSequence{std::coroutine_handle<promise_type>::from_promise(*this)};
        }

        std::suspend_always initial_suspend() noexcept {
            return {};
        }

        std::suspend_always final_suspend() noexcept {
            return {};
        }

        std::suspend_always yield_value(int value) noexcept {
            current_value = value;
            return {};
        }

        void return_void() {}

        void unhandled_exception() {
            std::terminate();
        }
    };

    explicit NumberSequence(std::coroutine_handle<promise_type> handle)
            : coro_handle(handle) {}

    ~NumberSequence() {
        if (coro_handle)
            coro_handle.destroy();
    }

    bool move_next() {
        if (!coro_handle.done()) {
            coro_handle.resume();
            return !coro_handle.done();
        }
        return false;
    }

    [[nodiscard]] int current_value() const {
        return coro_handle.promise().current_value;
    }

private:
    std::coroutine_handle<promise_type> coro_handle;
};

NumberSequence generate_sequence() {
    co_yield 1;
    co_yield 2;
    co_yield 3;
}

int main() {
    NumberSequence seq = generate_sequence();

    while (seq.move_next()) {
        std::cout << seq.current_value() << " ";
    }

    return 0;
}
