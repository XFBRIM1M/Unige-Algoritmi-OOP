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


float eulerianInteger(float (*f)(float), float a, float b, int N)
{
    float h = (b-a) / (N-1);
    float x, Q = 0;
    for (int i = 0 ; i<= N-2; i++)
    {
        x = a + i * h;
        Q += (*f) (x);
    }
}

void byteDimension()
{
    int a = 2;
    
    cout << "Dimensione intero in byte: "<<sizeof(a) << endl;
    cout << a / 3 << endl;
    
    a = (int) pow(a, 31)-1;
    cout << a << endl;
    
    cout << a + 1 << endl;
}

void roundError()
{
    float x = 0.5, tmp=0;
    for (int i = 0; i < 1e5; i++)
        tmp += x;
    cout << tmp << endl;
    x = 0.1;
    tmp = 0;
    for (int i = 0; i < 1e5; i++)
        tmp += x;
    cout << tmp << endl;
}

