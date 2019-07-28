#ifndef __SUBCOMMAND_HPP__
#define __SUBCOMMAND_HPP__

#include <iostream>
#include <string>
#include "command.hpp"
#include "sub.hpp"
#include "base.hpp"
using namespace std;

class SubCommand : public Command
{
    public:
        //it takes a command class which is similar to Add from lab 4
        //on the right side return a Sciop op class 
        SubCommand(Command* command, Base* op)
        {
            Base* command2 = command->get_root();
            root = new Sub(command2, op);
        }

/*
int makeVirtual()
        {
            return 1;
        }
 */
        
};


#endif