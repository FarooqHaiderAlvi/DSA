//#include <iostream>                                              
//using namespace std;
//#include <vector>  
//
//void swap(int& a, int& b) {
//	if (a != b) {
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//}
//
//int partition(int arr[], int start, int end)
//{
//	int pivot = arr[end];
//	int i = (start - 1);
//	for (int j = start; j <= end - 1; j++)
//	{
//		if (arr[j] < pivot)
//		{
//			i++; // increment index of smaller element
//			swap(arr[i], arr[j]);
//		}
//	}
//	swap(arr[i + 1], arr[end]);
//	return (i + 1);
//}
//void quick(int arr[], int start, int end)
//{
//	if (start < end)
//	{
//
//		int pi = partition(arr, start, end);
//
//
//		quick(arr, start, pi - 1);
//		quick(arr, pi + 1, end);
//	}
//}
//
//void check(int* a) {
//	cout << a << endl;
//
//	/*for (int i = 0; i < 5; i++) {
//		cout << a;
//	}*/
//
//}
//
//
//int main()
//{
//	int arr[] = { 3,1,4,7,0,8,5,2 };
//	quick(arr, 0, 7);
//
//	for (int i = 0; i < 8; i++) {
//		cout << arr[i] << endl;
//	}
//
//
//	return 0;
//}
//
