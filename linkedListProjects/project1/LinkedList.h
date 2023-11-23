#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <ostream>
#include <stdexcept>

template <class T>

struct Link{

    T data;
    Link *next;

    Link(){
        data = 0;
        next = nullptr;
    }

    Link(T value){
        data = value;
        next = nullptr;
    }

};

template <class T>

class LinkedList{
    private:
    public:
        Link<T> *front;
        Link<T> *back;
        int count;
        LinkedList(){
            front = nullptr;
            back = nullptr;
            count = 0;
        }

        void append(T value){
            if (front == nullptr) {
                front = new Link<T>(value);
                back = front;
            }else{

                if (front == back){
                    Link<T> *temp = new Link<T>(value);
                    back = temp;
                    front->next = back;
                }else{
                    Link<T> *temp = new Link<T>(value);
                    back->next = temp;
                    back = temp;
                }
            }
            count ++;
        }
};

template <class T>
std::ostream &operator<<(std::ostream &os, const LinkedList<T> &list){
    Link<T> *curr = list.front;
    while (curr != nullptr){
        os << curr->data;
        
        if (curr != list.back){
            os << ", ";
        }
        curr = curr->next;
    }

    return os;
}



#endif