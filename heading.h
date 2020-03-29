#ifndef HEADING_H_INCLUDED
#define HEADING_H_INCLUDED
#include <iostream>
#include <cstring>


class NoteBook {
char *Model;
char *CPU;
int Memory;

public:
    NoteBook();
    NoteBook(char *Model, char *CPU, int Memory);
    NoteBook(NoteBook &a);
    ~NoteBook();
    void print();
    void setModel (char * Model);
    void setCPU (char * CPU);
    bool setMemory (int Memory);

    int getMemory();
    char * getCPU (char * CPU);
    char * getModel (char * Model);

};


#endif // HEADING_H_INCLUDED
