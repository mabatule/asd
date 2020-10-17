#pragma once
#include "Folder.hpp"

class MemorySizeComand: public Command{
    public:
        MemorySizeComand(Folder* folder):Command(folder){

        }
        
 		void help(){
            cout<< "\t - MemorySize <fileName.ext> <file_size>"<<endl<<"\t\tcreates a new file inside the current folder"<<endl;
        }
		void execute(string* args, int n){
            cout<<"El tamanio es:"<<targetFolder->tamanio()<<endl;
        }
        string name(){
            return "MemorySize";
        }
};