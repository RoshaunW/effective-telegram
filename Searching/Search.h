#include<iostream>
*ifndef Search_H
#define Search_H
#include <stdlib.h>

using namspace std;

class Search{

protected:

int BinarySearch(int arr[], int arrSize, int searchVal);
int Linearsearch(int arr[], int arrSize,int searchVal);


public:
 
 int Binarysearch(int arr[], int arrSize, int searchVal)
 {
int start = 0;
int stop = arrSize-1;

int sel=0;
int mid;

while (start<=stop)
{
	mid = (start + stop)/2;
	sel++;

	if (arr[mid]== searchVal)
	return mid;
	else if (arr[mid]< searchVal)
	{
		stop= mid-1;
	}

	else
	{
		start= mid+1;
	}
	}
	return -1;

}
 int Linearsearch(int arr[], int arrSize,int searchVal);
 {
	for (int i=0; i<searchVal;i++)
	{
		if(arr[1]== arrSize)
		{
			int Linearsearch(int arr[], int arrSize,int searchVal);

			return i;
		}

	}
	return -1;
 }

}