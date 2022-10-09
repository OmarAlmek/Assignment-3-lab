#pragma once
#include"Customer.h"
#include<vector>
#include <iostream>
#include <cstdlib>
#include "Person.h"
#define SIZE 50
using namespace std;
template <class T>
class queue
{
private:

    vector<T> arr;
    int max;
    int front;
    int rear;
    int count;


public:
    queue(int s = SIZE);

    T pop();
    void push(T & x);
    bool isEmpty();
    bool isFull();
    T show(int i);
    int size();
    queue<T>sort(queue<T>& n);
};
template <class T>
queue<T>::queue(int l) {
    arr.resize(l);
    front = 0;
    rear = -1;
    count = 0;
}
template <class T>
T queue<T>::pop()
{
    if (isEmpty())
    {
        cout << "Q is empty";
        exit(EXIT_FAILURE);
    }
    else
    {

        T newarr = arr[front];
        front++;
        count--;
        return newarr;
    }
}
template <class T>
int queue<T>::size() {
    return count;
}

template <class T>
void queue<T>::push(T & pushed)
{
    if (isFull())
    {
        cout << "Overflow\n\n";
    }

    rear = rear++;
    arr[rear] = pushed;
    count++;
}

template <class T>
T queue<T>::show(int i)
{
    if (isEmpty())
    {
        cout << "Queue is empty\n\n";
        exit(EXIT_FAILURE);
    }
    else {
        T newar = arr[i];
        return newar;
    }
}
template <class T>
bool queue<T>::isEmpty() {
    return (size() == 0);
}
template <class T>
bool queue<T>::isFull() {
    return (size() == max);
}
template <class T>
queue<T> queue<T>::sort(queue<T>& n) {
    vector<T> array2;
    array2.resize(10);
    int s = 10;
    for (int i = 0;i < s;i++) {
        array2.at(i) = queue.pop();
    }
    for (int i = 0;i < s - 1;i++) {
        for (int j = 0;j < s- i - 1;j++) {
            if (array2[j] > array2[j + 1]) {
                T temp = array2[j];
                array2[j] = array2[j + 1];
                array2[j + 1] = temp;
            }
        }
    }
    queue<T> newq(s);
    for (int i = 0;i < s;i++) {
        newq.push(array2.at(i));
    }
    return newq;
}