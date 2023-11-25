#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <ostream>
#include <stdexcept>

using namespace std;

template <class T>
struct Link{

    T data;
    
    Link<T> *next;
    Link<T> *prev;

    Link(){
        data = 0;
        next = nullptr;
        prev = nullptr;
    }

    Link(T value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

template <class T>
class LinkedList{
    private:
    public:
        Link<T>* front;
        Link<T>* back;

        LinkedList(){
            front = nullptr;
            back = nullptr;
        }

        ~LinkedList(){
            Link<T>* curr = front;
            while (curr != nullptr){
                Link<T>* temp = curr;

                curr = curr->next;
                delete temp;  
                temp = nullptr;  // Set to nullptr after deletion
            }
            
        }

        void append(T value){
            if (front == nullptr){
                front = new Link<T>(value);
                back = front;
            }else{
                Link<T> *temp = new Link<T>(value);
                temp -> prev = back;
                back -> next = temp;
                back = temp;
            }
        }

        void addSorted(T value){
            Link<T>*temp = new Link<T>(value);
            if (front == nullptr){
                back = front = temp;
            }else{
                Link<T>*curr = front;
                while ( curr->data <= value && curr->next != nullptr){ 
                    curr = curr->next;
                }
                
                if (value < curr->data) {
                    Link<T>* prevCurr = curr->prev;
                    temp->next = curr;
                    temp->prev = prevCurr;
                    
                    if (prevCurr != nullptr) {
                        prevCurr->next = temp;
                    } else {
                        front = temp;
                    }
                    curr->prev = temp;
                } else{
                    curr->next=temp;
                    temp->prev = curr;
                    back = temp;
                }
            }
        }

        double average(){
            int i = 0;
            int amount = 0;
            Link<T>*curr = front;
            while (curr != nullptr){
                amount += curr->data;
                i++;
                curr = curr->next;
            }
            return amount/(double)i;
        }

        void ping(T value) const{
            std::cout << value << std::endl;
        }
};

template <class T>
std::ostream &operator<<(std::ostream &os, const LinkedList<T> &list){
    Link<T>*curr = list.front;
    while (curr != nullptr){
        os << curr->data;
        if (curr != list.back){
            os << ", ";
        }
        curr = curr->next;
    }
    // Link<T>* curr = list.back;
    // while (curr != nullptr){
    //     os << curr->data;
    //     if (curr != list.front){
    //         os << ", ";
    //     }
    //     curr = curr->prev;
    // }

    return os;
}

#endif