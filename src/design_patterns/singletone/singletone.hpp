//
// Created by scphamster on 07.01.24.
//

#pragma once
#include <memory>

class Singletone {
  public:
    std::shared_ptr<Singletone> Get() {
        return _this;
    }

    static void Create()
    {
        _this = std::shared_ptr<Singletone>(new Singletone());
    }


  private:
    static std::shared_ptr<Singletone> _this;
    Singletone() = default;

};

