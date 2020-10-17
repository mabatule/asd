#pragma once
#include <string>
#include "Command.hpp"
using namespace std;

class CommandHandler{
    private:
        Command** commands;
        int size;
        int capacity;
    public:
        CommandHandler(){
            commands=new Command*[100];
            size = 0;
            capacity = 100;
        }
        
        void add(Command* cmd){
            if(size<capacity){
                commands[size]=cmd;
                size++;
            }
        }
						  	//new texto.txt 256	
        void execute(string command){
            if(command=="help") help();
            for(int i=0;i<size;i++){
                string cmdName = commands[i]->name();
				
                if(command.rfind(cmdName,0) == 0){
                    int n = commandSize(command);//cuenta las palabrs
                    string* args = commandArgs(command,n);//vector de palabras arg[0]=new arg[1]=teto.txt arg[2]=256
                    commands[i]->execute(args, n);
                }
            }
        }

        void help(){
            for(int i=0;i<size;i++){
                commands[i]->help();
            }
        }

        int commandSize(string command){
            istringstream stm(command) ;
            string word;
            int c=0;
            while(stm >> word ) c++;
            return c;
        }

        string* commandArgs(string command, int argsSize){
            string* words=new string[argsSize];
            istringstream stm(command) ;
            string word;
            int i=0;
            while(stm >> word ){
                words[i]=word;
                i++;
            }
            return words;
        }
};