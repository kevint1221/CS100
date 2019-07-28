#ifndef __ADDCOMMAND_HPP__
#define __ADDCOMMAND_HPP__

#include <iostream>
#include <string>
#include "command.hpp"
#include "add.hpp"
#include "base.hpp"
using namespace std;

class AddCommand : public Command
{
    public:
        //it takes a command class which is similar to Add from lab 4
        //on the right side return a Sciop op class 
        AddCommand(Command* command, Base* op)
        {
            Base* command2 = command->get_root();
            root = new Add(command2, op);
        }

/*
int makeVirtual()
        {
            return 1;
        }
 */
        
};


#endif
