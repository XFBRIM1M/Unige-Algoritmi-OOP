#include <iostream>
#include "../Headers/funzioni.h"
using namespace std;

void Leggi(float *vt, int d)
{
    cout<<"Inserire "<<d<<" float:";
    for(int i=0;i<d;i++)
    cin>>vt[i];
}

void Stampa(float *vt, int d)
{
    cout<<"Valori nell'array: \n";
    for(int i=0;i<d;i++)
    cout<<vt[i]<<" ";
    cout<<endl;
}
