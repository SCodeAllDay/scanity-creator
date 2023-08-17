#include "mod.hpp"
#include <iostream>

class Mod1 : public Mod {
    public:
    bool init() override{
        std::cout<<"Init"<<std::endl;
        return true;
    }
    bool start() override{
        std::cout<<"Start"<<std::endl;
        return true;
    }
    bool stop() override{
        std::cout<<"Stop"<<std::endl;
        return true;
    }
};

extern "C" Mod* createMod() {
    return new Mod1();
}