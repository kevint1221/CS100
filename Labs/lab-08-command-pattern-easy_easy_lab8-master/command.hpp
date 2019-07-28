#ifndef __COMMAND_HPP__
#define __COMMAND_HPP__

#include "base.hpp"

class Command {
    protected:
        Base* root;
    
    public:
        Command() { this->root = nullptr; }
        double execute() { return root->evaluate(); }
        std::string stringify() { return root->stringify(); }
        Base* get_root() { return root; }
        //virtual int makeVirtual() = 0;
};

#endif
