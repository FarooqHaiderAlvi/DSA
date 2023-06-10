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
void removeOccurence(int array[], int n,int key) {

	int* dub = new int[n];
	for (int i = 0; i < n; i++) {
		dub[i] = array[i];

	}

	int iterate = 0;
	int size = n;
	while (iterate < size) {
		if (dub[iterate] == key) {
			int* tempArr = new int[size - 1];
			int tempVar = 0;
			for (int i = 0; i < size; i++) {
				if (iterate == i) {
					continue;
				}
				else {
					tempArr[tempVar++] = dub[i];
				}
			}
			delete [] dub;
			dub = tempArr;
			size = size - 1;
			iterate == 0;
		}
		else {
			iterate++;
		}
		
		
	}



	for (int i = 0; i < size; i++) {
		cout << dub[i];
	}

 }
void occur(int arr[], int n, int key) {
	
	int* dub = new int[n];
	for (int i = 0; i < n;i++) {
		dub[i] = 0;
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == key) {
			dub[i]++;
			count++;
		}
	}
	int* temp = new int[n - count];
	int tempVar = 0;
	for(int i = 0; i < n; i++) {
		if (dub[i] == 1) {
			continue;
		}
		else {
			temp[tempVar] = arr[i];
			tempVar++;
		}
	}
	for (int i = 0; i < n-count; i++) {
		cout << temp[i];
	}
	delete[] dub;

}
int main()
{	int arr[] = {3,2,1,3,5,3,8,3 };
     occur(arr, 8, 3);
	//quick(arr,0,7);
  //  insertionSort(arr);

}

