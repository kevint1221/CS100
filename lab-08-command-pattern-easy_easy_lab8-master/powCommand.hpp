#ifndef __POWCOMMAND_HPP__
#define __POWCOMMAND_HPP__

#include <iostream>
#include <string>
#include "command.hpp"
#include "pow.hpp"
#include "base.hpp"
using namespace std;

class PowCommand : public Command
{
    public:
        //it takes a command class which is similar to Add from lab 4
        //on the right side return a Sciop op class 
        PowCommand(Command* command, Base* op)
        {
            Base* command2 = command->get_root();
            root = new Pow(command2, op);
        }

/*
int makeVirtual()
        {
            return 1;
        }
 */
        
};


#endif