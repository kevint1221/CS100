#ifndef __MULTCOMMAND_HPP__
#define __MULTCOMMAND_HPP__

#include <iostream>
#include <string>
#include "command.hpp"
#include "mult.hpp"
#include "base.hpp"
using namespace std;

class MultCommand : public Command
{
    public:
        //it takes a command class which is similar to Add from lab 4
        //on the right side return a Sciop op class 
        MultCommand(Command* command, Base* op)
        {
            Base* command2 = command->get_root();
            root = new Mult(command2, op);
        }

/*
int makeVirtual()
        {
            return 1;
        }
 */
        
};


#endif