#ifndef SORT_H
#define SORT_H
#include <iostream>
#include 
using namespace std;

class Sort {

private:

	BubbleSort(int arr[], int arrSize);
	SelectionSort(int arr[], int arrSize);
	InsertionSort(int arr[], int arrSize);


public:

	BubbleSort(int arr[], int arrSize) {

		int temp;
		int cut2;
		int swapmade = 1;
		int index = 0;

		while (index < arrSize && swapmade == 1) {

			swapmade = 0;
			cut2 = arrSize - 1;

			while (cut2 > index)
			{
				if (arr[cut2] < arr[cut2 - 1])
				{
					temp = arr[cut2 - 1];

					arr[cut2 - 1] = arr[cut2];
					arr[cut2] = temp;
					swapmade = 1;
				}
				cut2--;
			}
			index++;
		}

	}

	SelectionSort(int arr[], int arrSize) {

		int	index = 0;
		int	small;
		int temp;
		int cut2;

		while (index < arrSize) {
			small = index;
			cut2 = index + 1;

			while (cut2 < size) {
				if (arr[cut2] < arr[small])
				{
					small - cut2;
				}
				cut2++;
			}
			temp = arr[index];
			arr[index] = arr[small];
			arr[small] = temp;

			index++;
		}
	}


	InsertionSort(int arr[], int arrSize) {

		int index = 1;
		int cut2;
		int temp;

		while (index < arrSize) {
			temp = arr[index];
			cut2 = index;

			while (cut >= 0 && temp <= arr[cut2 - 1])
			{
				arr[cut2] = arr[cut2 - 1];

				cut2--;
			}
			arr[cut2] = temp;
			index++;
		}
	}
}endif;