#ifndef __DIVCOMMAND_HPP__
#define __DIVCOMMAND_HPP__

#include <iostream>
#include <string>
#include "command.hpp"
#include "div.hpp"
#include "base.hpp"
using namespace std;

class DivCommand : public Command
{
    public:
        //it takes a command class which is similar to Add from lab 4
        //on the right side return a Sciop op class 
        DivCommand(Command* command, Base* op)
        {
            Base* command2 = command->get_root();
            root = new Div(command2, op);
        }

/*
int makeVirtual()
        {
            return 1;
        }
 */
        
};


#endif