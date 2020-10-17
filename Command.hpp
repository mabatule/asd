#pragma once
#include "Folder.hpp"
#include "File.hpp"
#include <string>
#include <iostream>
using namespace std;

class Command{
    protected:
        Folder* targetFolder;
    public:
        Command(Folder* target){
            targetFolder = target;
        }
        virtual void execute(string* args, int n){

        }
        virtual void help(){

        }
        virtual string name(){
            return "unknown";
        }
};