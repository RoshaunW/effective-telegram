#include "MathLib.h"
#include "Iterartion.h"
#include "Recursion.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
Iteration* Iterationlib= new Iteration();

Recursion* Recursionlib= new Recursion();

cout << "-------Iteration------" << endl;

delete Iterationlib;
delete Recursionlib;

return 0;
}