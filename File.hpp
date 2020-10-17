#pragma once
#include <string>
using namespace std;

class File{
    protected:
        string name;
        int size; // in bytes
    public:
        File(string _name, int _size){
            name = _name;
            size = _size;
        }
        string fileName(){
            return name;
        }
		void setName(string _name){
			name=_name;
		}
        int fileSize(){
            return size;
        }
        void print(){
            cout<<"\t"<<name<<"\t\t"<<size<<"\t bytes"<<endl;
        }

};
