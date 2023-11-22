#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>

template <class T>
class ArrayList {
private:

public:
    int capacity;
    int count;
    T* arr;

    ArrayList() {
        capacity = 1;
        count = 0;
        arr = new T[capacity];
    }

    // ~ArrayList() {
    //     for (int i = 0; i < count; i++){
    //         for (int j = 0; j < arr[i].count; j++){
    //         //do stuff
    //         }      
    //     }
    // }

    void inflate() {
        if (count == capacity) {
            capacity *= 2;
            T* newArr = new T[capacity];
            for (int i = 0; i < count; ++i) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
    }

    void append(T value) {
        inflate();
        arr[count] = value;
        count++;
    }
};

#endif
