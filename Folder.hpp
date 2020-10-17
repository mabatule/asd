#pragma once
#include <iostream>
#include <string>
#include "File.hpp"
using namespace std;

class Folder{
    private:
        string name;
        File** files;
        int capacity;
        int size;
    public:
        Folder(string _name, int _cap){
            name = _name;
            capacity = _cap;
            files = new File*[capacity];
            size = 0;
        }
        void add(File* file){
            if(size<capacity){
                files[size]=file;
				size++;
            }
        }
		int tamanio(){
			int sum=0;
			for(int i=0;i<size;i++){
                sum=sum+files[i]->fileSize();
            }
			return sum;
		}
		void rename(string newname,string oldname){
			int sum=0;
			for(int i=0;i<size;i++){
               if(files[i]->fileName()==oldname){
				   		fila[i]->setname();
			   }
            }
		}
        void print(){
            for(int i=0;i<size;i++){
                files[i]->print();
            }
        }
};