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

    ArrayList(const ArrayList &other){
        count = other.count;
        capacity = other.capacity;
        arr = new T[capacity];
        for(int i = 0; i<count; i++){
            this->arr[i] = other.arr[i];
        }
    }
    
    ArrayList& operator=(const ArrayList& other) {
        if (this != &other) { 
            delete[] arr;

            count = other.count;
            capacity = other.capacity;

            arr = new T[capacity];
            for (int i = 0; i < count; i++) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }

    ~ArrayList() {
        delete[] arr;  
    }

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
