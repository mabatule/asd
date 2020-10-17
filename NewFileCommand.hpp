#pragma once
#include "Folder.hpp"
#include <sstream>
using namespace std;

class NewFileCommand: public Command{
    public:
        NewFileCommand(Folder* folder):Command(folder){

        }
        void execute(string* args, int n){
            if(n==3){
				//comando:
				//vector de palabras arg[0]=new arg[1]=teto.txt arg[2]=256
                targetFolder->add(new File(args[1],stoi(args[2])));
            }else{
                cout<<"command not valid"<<endl;
                help();
            }
        }
        void help(){
            cout<< "\t - new <fileName.ext> <file_size>"<<endl<<"\t\tcreates a new file inside the current folder"<<endl;
        }

        string name(){
            return "new";
        }
};

