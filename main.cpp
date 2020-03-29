#include "heading.h"

using namespace std;

int main()
{
NoteBook a("Model", "CPU", 200);
NoteBook a1;
NoteBook a2(a);

a.print();
a1.print();
a2.print();

a1.setModel("Model");
a1.setCPU("CPU");
a1.print();

char m[25];
a1.getModel(m);
cout << m << "\n";
a1.print();

char v[25];
a1.getCPU(v);
cout<<v<<"\n";
return 0;
}
