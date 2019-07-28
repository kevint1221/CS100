#ifndef __INITIAL_COMMAND_HPP__
#define __INITIAL_COMMAND_HPP__

#include "command.hpp"
#include "rand.hpp"
#include "op.hpp"
#include "base.hpp"

class InitialCommand: public Command{
    //1.InitialCOmmand() { root-> rand}
    //2.In(double value) {new Op(value) root->}
    public:
        InitialCommand(Base* base){root = base;}

        int makeVirtual(){
            return 1;
        }
};

#endif