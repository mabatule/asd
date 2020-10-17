#pragma once
#include "Folder.hpp"

class PrintCommand: public Command{
    public:
        PrintCommand(Folder* folder):Command(folder){

        }
        void execute(string* args, int n){
            targetFolder->print();
        }
        void help(){
            cout<< "\t - print "<<endl<<"\t\tprint all files inside the current folder"<<endl;
        }
        string name(){
            return "print";
        }

};

