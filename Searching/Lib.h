#ifndef LIB_H
#define LIB_H
#include <iostream>
using namespace std;

class Lib{

protected:

int arrSize;
int arr[];
int searchVal;

public:

Lib(){
		arrSize=0;
		arr[]="";
		searchVal=0;
}

Lib( int arr[], int arrSize, int searchVal){

		arr[]= arr[];
		arrSize= arrSize;
		searchVal= searchVal;
}

int getArr(){ return arr[]};
int getArrSize (){return arrSize};
int getSearchval(){return searchVal};

void setArr(int arr[]){this->arr[]=arr[];}
void setArrSize(int arrSize){this->arrSize= arrSize;}
void setSearchVal(int searchVal){this-> searchVal= searchVal;}
~Lib(){}
}