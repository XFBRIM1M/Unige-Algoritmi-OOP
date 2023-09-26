#include <iostream>
#include "Headers/funzioni.h"
using namespace std;


int main()
{
    const int dim=5;
    float a[dim];
    
    cout<<"Esempio di progetto\n";

    
    Leggi(a,dim);
    Stampa(a,dim);
    return 0;
}
