#include <iostream>
using namespace std;
template <class T>
class Queue {
    T* array;
    int front;
    int rear;
    int count;
    int size;
public:
    Queue(int s) {
        array = new T[s];
        size = s;
        count = 0;
        rear = 0;
        front = 0;
    }

    void enqueue(T val) {
        if (!Isfull()) {
            rear = (rear) % size;
            array[rear] = val;
            rear++;
            count++;
        }

        else {
            resize();
            rear = (rear) % size;
            array[rear] = val;
            rear++;
            count++;

        }

    }
    void resize() {
        T* d = new T[size * 2];
        for (int i = 0; i < size; i++)
            d[i] = array[i];

        size = size * 2;
        delete[]  array;

        array = d;
    }

    T dequeue() {
        if (!Isempty()) {
            front = (front) % size;
            count--;

            return array[front++];
        }

    }

    bool Isfull() {
        if (count >= size) {
            return true;
        }
        else  return false;
    }

    bool Isempty() {
        if (count == 0) {
            return true;
        }
        else return false;
    }
};

int main()
{
    int size = 3;
    Queue<int> q(size);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue();
    q.enqueue(4);
    cout << q.dequeue();
    cout << q.dequeue();
    cout << q.dequeue();

}