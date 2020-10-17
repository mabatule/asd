#include <iostream>
#include <string>
#include <sstream> 
#include "Folder.hpp"
#include "CommandHandler.hpp"
#include "NewFileCommand.hpp"
#include "PrintCommand.hpp"
#include "MemorySizeComand.hpp"
using namespace std;


int main() {
    Folder* folder=new Folder("Documents",100);
    string command;
    getline(cin,command);
    
    CommandHandler* handler=new CommandHandler();
    handler->add(new NewFileCommand(folder));//0
    handler->add(new PrintCommand(folder));//1
	handler->add(new MemorySizeComand(folder));//1
    while(command != "exit"){

						//new texto.txt 256	
        handler->execute(command);
        getline(cin,command);
    }
}