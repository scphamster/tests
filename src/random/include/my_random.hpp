#pragma once

class RandomIt {
public:
    int operator()(int max) const;
    int operator()(int min, int max) const;
};