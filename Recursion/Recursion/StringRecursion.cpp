
#include <iostream>
using namespace std;

//no of char in string

int countChar(string s,int n) {
	if (n > s.length())
		return n-1;
	return countChar(s, n + 1);
}
// find largest in array
int largest(int arr[], int n,int max) {
	if (n < 0)
		return max;
	if (max < arr[n])
		max = arr[n];
	int num= largest(arr, n - 1, max);
	return num;
 }

void replace(string &s, char from, char to,int size) {
	if (size > s.length())
		return;
	if (s[size] == from)
		s[size] = to;
	replace(s, from, to, size + 1);
  }

void findAndRemoveDuplicate(string str) {
	int alphabetes[26] = { 0 };
	string permanent = "";
	for (int i = 0; i < str.length(); i++) {
		int temp = int(str[i]);
		temp = temp - 97;
		alphabetes[temp]++;
	}
	for (int i = 0; i < str.length(); i++) {
		
		int temp = int(str[i])-97;
		if (alphabetes[temp]>=1) {
			permanent += char(temp + 97);
			alphabetes[temp] = -1;
		}
		
	
	}
	cout << permanent;
}
//its time complexity is 2^n
void subsequence(string str, int index, string newString) {
	if (index == str.length())
	{
		
		if (newString == "")
			cout << "empty";
		else cout << newString << endl;
		return;
	}
	subsequence(str, index + 1, newString + str[index]);
	subsequence(str, index + 1, newString);
 }
 
void keyPadVariation() {

}

int main() {


	subsequence("far",0,"");




	/*int max = INT_MIN;
	int arr[] = { 2,5,6,4 };
	cout<<largest(arr, 3, max);*/


	//string s = "steve";
	//replace(s, 'e', 'a', 0);
	//cout << s;

	/*int array[] = { 1,2,3,4 };
	string s = "farooq";
	char* a = &s[0];
	
	for (int i = 0; i < 5; i++) {
		cout << *(a + i);
	}*/
	
}