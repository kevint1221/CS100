
#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <iostream>
#include <vector>
#include <string>
#include "command.hpp"
#include <iomanip>
#include "command.hpp"
#include "op.hpp"
#include "initialCommand.hpp"
#include <sstream>
using namespace std;


/*
class Menu {
    private:
        int history_index; // Indexes which command was last executed, accounting for undo and redo functions
        std::vector<Command*> history; // Holds all the commands that have been executed until now

    public:
        Menu() {
            // Constructor which initializes the internal members
            history_index = -1;
        }

        std::string execute() {
            // Returns the string converted evaluation of the current command
            //we need to do history_index -1 because after we addcomamnd, index is ++a already
            Command* currCommand = history.at(history_index); 
            return std::to_string(currCommand->execute());
        }

        std::string stringify() {
            // Returns the stringified version of the current command
            //we need to do history_index -1 because after we addcomamnd, index is ++a already
            Command* currCommand = history.at(history_index);
            return currCommand->stringify();
        }

        bool initialized() {
            // Returns if the history has an InitialCommand, which is necessary to start the calculation
            /*
            for(int i = 0; i < history.size();  i++){
                Command* t = history.at(i);
                if(dynamic_cast<InitialCommand*>(t))
                {
                    return true;
                }
            }
            // all command  is not initial->false
            return false;
             */

 /*           bool value = false;
            if (history.size() > 0)
            {
                value = true;
            }
            return value;
            
            
        }

        void add_command(Command* cmd) {
            // Adds a command to the history (does not execute it), this may require removal of some other commands depending on where history_index is
            history_index++;
            history.push_back(cmd);
        }

        Command* get_command() {
            // Returns the command that the history_index is currently referring to
            //cout << "go to get command " <<endl;
            return history.at(history_index);
        }

        void undo() {
            // Move back one command (does not execute it) if there is a command to undo
            history_index--;
        }

        void redo() {
            // Moves forward one command (does not execute it) if there is a command to redo
            history_index++;
        }
};
 */

class Menu{
    private:
        int history_index;
        std::vector<Command*> history;
    public:
        Menu()
        {
            history_index = 0;
        }
        std::string execute()
        {
            std::ostringstream stringObj;
            stringObj << history[history_index-1]->execute();
            return stringObj.str();
        }
        std::string stringify()
        {
            return history[history_index-1]->stringify();
        }
        bool initialized()
        {
            return (history.size() != 0);
        }
        void add_command(Command* cmd)
        {
            if(initialized()) {
                int index = history_index - 1;
                while(history.back() != history[index]) {
                        delete history.back();
                        history.pop_back();
                }
            }
            history.push_back(cmd);
            history_index++;
        }
        Command* get_command()
        {
            return history[history_index-1];
        }
        void undo()
        {
            if(history_index > 1) {
                history_index--;
            } 
            else if (history_index == 1 && (history[0]->execute() != 0)) {
                Op* zero = new Op(0);
                InitialCommand* command = new InitialCommand(zero);
                history.insert(history.begin(), command);
            } else {
                std::cout << "Nothing to undo." << std::endl;
            }
        }
        void redo()
        {
            if(history_index < history.size()) {
                history_index++;
            } else {
                std::cout << "Nothing to redo." << std::endl;
            }
        }
};


#endif

