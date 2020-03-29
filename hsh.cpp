#include "heading.h"

NoteBook:: NoteBook(): NoteBook("Model", "CPU", 350){}
NoteBook:: NoteBook(char * Model, char * CPU, int Memory){

this -> Model = NULL;
setModel (Model);
int len = strlen("notebook");
this -> Model = new char [len]+1;
strcpy(this -> Model, Model);
len = strlen("author");
this -> CPU = new char [len]+1;
strcpy (this -> CPU, CPU);
Memory = 0;
setMemory(Memory);
};
NoteBook::NoteBook(NoteBook &a): NoteBook(a.Model, a.CPU, a.Memory){}
void NoteBook :: print(){

std::cout <<"Model = "<< Model<<", ";
std::cout <<"CPU = "<< CPU<<", ";
std::cout <<"Memory = "<< Memory<<",\n";

}
NoteBook::~NoteBook(){
delete[]Model;
delete[]CPU;
}

void NoteBook:: setModel(char * Model){

delete [] this -> Model;
int len = strlen("notebook");
this-> Model = new char[len];
strcpy (this -> Model, Model);
}

void NoteBook:: setCPU(char * CPU){

delete [] this -> CPU;
int len = strlen("CPU")+1;
this-> CPU = new char[len];
strcpy (this -> CPU, CPU);
}

bool NoteBook::setMemory(int Memory){
if (Memory >=100 && Memory < 400){
    this -> Memory=Memory;
}
else{
    
    return false;
}
}
char * NoteBook::getCPU(char * CPU){
strcpy (CPU, this -> CPU);
return CPU;
}
char * NoteBook::getModel(char * Model){
strcpy (Model, this -> Model);
return Model;
}
int NoteBook:: getMemory(){
return Memory;
}
