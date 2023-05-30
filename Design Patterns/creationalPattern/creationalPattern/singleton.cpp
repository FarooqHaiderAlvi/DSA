// CreationalPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Singleton {

    static  Singleton* instance;

    Singleton() {
        //we can not construct instance =new Singleton here 
       /* because When the constructor of the Singleton class is called,
            it allocates memory for a new instance of the
            Singleton class using the new operator. However,
            the constructor of the new instance is also called,
            which in turn allocates memory for another instance,
            and so on, resulting in an infinite recursion.*/
    }
public:
    static Singleton* returnInstance() {
        if (instance == NULL) {
            instance = new Singleton();
            cout << "new instance created";
        }
        else {
            cout << "old instance";
        }
        return instance;
    }
};
Singleton* Singleton::instance = NULL;

void find(int arr[]) {

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < 5; i++) {

        if (arr[i] > max) {
            min = max;
            max = arr[i];

        }

       
    }

    cout << min << endl << max;
  }

void print() {

    int arr[][3] = { { 1,2,3 }, { 2,3,5 } };
    for (int i = 0; i < 6; i++) {
       
        cout << arr[0][i];
    }

}
int main()
{
    Singleton* s,*t;
  //  s->returnInstance();
  //  s->returnInstance();
    int arr[] = { 2,3,1,4,5 };
    print();
   // find(arr);
  //  A* a = new A();
   

}
