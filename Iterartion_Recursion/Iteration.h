#ifndef Iteration_H
#define Iteration_H
#include "Mathlib.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class Iteration : Mathlib
{
public:
int GCD(int x, int y)
{
int mod;
while (y != 0)
{
if (x >= y && x != 0) {

int mod = x;
x = y;
y = mod % y;
}

}
return x;
cout << "Iteration GCD is not implemented" << endl;
return 0;
}
int ACK(int x,int y)
{
int z;
while( x == 0)
{
if(y == 0){
int z = x-1;
x = y;
y = z + 1;
}
else
if (x != 0 && y != 0){
int h = x-1;
int t = x;
x = y;
y = h + t + y-1;
}
}
return y + 1;
}




int FIB(int x)
{
int f;
if( x == 0){
return 1;
}
else
if (x == 1){
return 1;
}
else
if(x>1)
{
int w = x-1;
int s = x-2;
int p = x;
l = w + s;
}
}

int HANOI(int n)
{
cout << "Iteration hanoi is not implemented" << endl;
return 0;
}
};#endif 