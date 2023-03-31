//#include <iostream>                                             
//using namespace std;
//#include <vector>                                               
//int fac(int n) {
//	if (n == 0)
//		return 1;
//	else return n * fac(n - 1);
//}
//int fabo(int n) {
//	if (n < 2)
//		return n;
//	else
//		return fabo(n - 1) + fabo(n - 2);
//}
//int NaturalSum(int n) {
//	if (n == 0)
//		return 0;
//	else return n + NaturalSum(n - 1);
//
//}
//int SumOfArray(int arr[], int size) {
//	if (size == 0) {
//		return arr[0];
//	}
//	else return arr[size] + SumOfArray(arr, size - 1);
//}
//void PrintArray(int arr[], int size) {
//	if (size == -1) {
//		return;
//	}
//	else {
//		cout << arr[size];   //to print array in reverse order cout before function call
//		PrintArray(arr, size - 1);
//		cout << arr[size];  //to print array in ascending order cout after function call
//	}
//
//}
//void num(int m) {
//	if (m == 0)
//		return;
//	else {
//		cout << m;
//		num(m - 1);
//	}
//
//}
//int Sum() {
//	int n;
//	cout << "enter val"; cin >> n;
//	if (n == -1)
//		return 0;
//	else {
//
//		return n + Sum();
//	}
//}
//void findAndRemove() {
//	int num = 3;
//	int arr[] = { 1,2,3,4,5,6,7,8,3,4,5,6 };
//	vector<int> a;
//	for (int i = 0; i < 12; i++) {
//		if (arr[i] == num)
//			continue;
//		a.push_back(arr[i]);
//	}
//	for (int i = 0; i < a.size(); i++) {
//		cout << a[i];
//	}
//}
//int BinarySearch(int arr[], int first, int last, int value) {
//	int middle;
//	if (first > last)
//		return-1;
//	middle = (first + last) / 2;
//	if (arr[middle] == value) {
//		return middle;
//	}
//	else if (arr[middle] < value)
//		return BinarySearch(arr, middle - 1, last, value);
//	else return BinarySearch(arr, first, middle - 1, value);
//}
//
//
//int fun1(int x, int y)
//{
//	if (x == 0)
//		return y;
//	else
//		return fun1(x - 1, x + y);
//}
//void fun2(int n)
//{
//	int i = 0;
//	if (n > 1)
//		fun2(n - 1);
//	for (i = 0; i < n; i++)
//		cout << " * ";
//}
//#define LIMIT 50
//void fun3(int n)
//{
//	if (n <= 0)
//		return;
//	if (n > LIMIT)
//		return;
//
//	cout << n << " ";
//	fun3(2 * n);
//	cout << n << " ";
//}
//
//// This code is contributed by shubhamsingh10
//// This code is contributed by shubhamsingh10
//
//
//int fun4(int a, int b)
//{
//	if (b == 0)
//		return 0;
//	if (b % 2 == 0)
//		return fun4(a + a, b / 2);
//
//	return fun4(a + a, b / 2) + a;
//}
//int fun5(int a, int b)
//{
//	if (b == 0)
//		return 1;
//	if (b % 2 == 0)
//		return fun5(a * a, b / 2);
//
//	return fun5(a * a, b / 2) * a;
//}
//int fun6(int n)
//{
//	if (n > 100)
//		return n - 10;
//	return fun6(fun6(n + 11));
//}
////time complexity of O(n);
//long returnPower(int num, int pow) {
//	if (pow == 0)
//		return 1;
//	else
//		return num * returnPower(num, pow - 1);
//}
//int returnPowerLogn(int num, int pow) {
//	if (pow == 0)
//		return 1;
//	if (num % 2 != 0)
//		return num * returnPowerLogn(num, pow / 2) * returnPowerLogn(num, pow / 2);
//	else return returnPowerLogn(num, pow / 2) * returnPowerLogn(num, pow / 2);
//}
//
//
//void swap(int& a, int& b) {
//	if (a != b) {
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//
//
//}
//
//
////its time complexity is 2^n
//void TowerOfHanoi(int num, int src, int temp, int dest) {
//
//	if (num == 1) {
//		cout << "move from peg " << src << " to peg " << dest<< endl;
//		return;
//	}
//	TowerOfHanoi(num-1, src, dest, temp);
//	cout << "move from peg " << src << " to peg " << dest << endl;
//	TowerOfHanoi(num - 1, temp, src, dest);
//	/*if (num > 0) {
//		TowerOfHanoi(num - 1, frompeg, tempeg, topeg);
//		cout << "move from peg " << frompeg << " to peg " << topeg << endl;
//		TowerOfHanoi(num - 1, tempeg, topeg, frompeg);
//
//	}*/
//}
////print the array
//void printArray(int a[],int n) {
//	if (n <0)
//     return;
//	cout << a[n];
//	printArray(a, n - 1);
//  }
//void sumTominus(int n) {
//	
//	if (n >= 10)
//		return;
//	cout << n << endl;
//	n += 4;
//	sumTominus(n);
//	cout << n;
//}
////print n table m times
//void printTable(int n, int m) {
//
//	if (m == 0)
//		return;
//	printTable(n, m - 1);
//	cout << n << " * " << m << " = " << n * m << endl;
//
//}
//
//int main()
//{
////	int arr[] = { 6,3, 5, 6, 8, 1 };
////	cout<<sizeof(arr)<<endl<<sizeof(arr[0])<<endl;
////	int n = sizeof(arr) / sizeof(arr[0]);
////	cout << n;
//	//printTable(2, 10);
//	// sumTominus(1);
//	//cout << returnPower(2, 20);
//		TowerOfHanoi(2, 1, 2, 3);                              
//}                                                                 
//                                                                 
