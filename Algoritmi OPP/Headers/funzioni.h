#ifndef FUNZIONI_H
#define FUNZIONI_H

void Leggi(float *, int);//Archetype of a Input Function.
void Stampa(float *, int);//Archetype of Output Function
void byteDimension(); //Archetype register of total number of byte
void roundError();//Archetype round error

float eulerianInteger(float(*f)(float), float a, float b, int N);//Integer resolution by the eulerian theory


#endif
