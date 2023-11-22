#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include <ostream>
#include <stdexcept>

using namespace std;

class ArrayList {
    private:
    public:
        int capacity;
        int count;

        int * arr;

        ArrayList(){
            capacity = 1;
            count = 0;

            arr = new int[capacity];
        }

        ~ArrayList(){
            delete[] arr;
        }
};

#endif