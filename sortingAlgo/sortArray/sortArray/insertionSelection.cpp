#include <iostream>                                              
using namespace std;
#include <vector>  
                                                          
void swap(int& a, int& b) {
	if (a != b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
}

void bubble(int arr[]) {

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 8; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}



}
void selectionSort(int arr[]) {
	int j = 0;

	for (int i = 0; i < 8; i++)
	{
		int sml = i;
		for (j = i + 1; j < 8; j++)
		{
			if (arr[sml] > arr[j]) {
				sml = j;
			}

		}

		swap(arr[i], arr[sml]);

	}
}
void insertionSort(int arr[]) {

	for (int i = 1; i < 8; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}

int main()
{	int arr[] = {1,2,3,8,0,6,7,8 };
	//quick(arr,0,7);
    insertionSort(arr);
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}

