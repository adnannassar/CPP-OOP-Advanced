//
// Created by Nassar, Mohamad Adnan on 06.06.22.
//

#ifndef CLIONCPP_LINKEDLIST_H
#define CLIONCPP_LINKEDLIST_H

#include <iostream>
#include "Node.h"
#include "Iterator.h"

template<typename T>
class LinkedList {
private:
    Node<T> *head;

    class ListIterator : public Iterator<T> {
    private:
        Node<T> *ptr_iterator;
    public:
        ListIterator(Node<T> *ptr_iterator):ptr_iterator{ptr_iterator}{}
        virtual bool hasNext() override {
            return ptr_iterator != nullptr;
        }

        virtual const T next() override {
            T erg;
            if(hasNext()){
                erg = ptr_iterator->getValue();
                ptr_iterator = ptr_iterator->getNext();
                return erg;
            }else{
                return  T();
            }
        }
    };

public:
    LinkedList() : head(nullptr) {}
    void add(T value);
    void remove(T value);
    void search(T value);
    void printIterator(void(*work)(T t));
    void print(void(*work)(T t));
    bool isEmpty();
    Iterator<T>* iterator();
    T operator[](int pos);

    int size();
};

template<typename T>
bool LinkedList<T>::isEmpty() {
    return head == nullptr;
}

template<typename T>
void LinkedList<T>::add(T value) {
    Node<T> *newNode = new Node<T>(value, nullptr);
    if (isEmpty()) {
        head = newNode;
    } else {
        Node<T> *ptr = head;
        while (ptr->getNext() != nullptr) {
            ptr = ptr->getNext();
        }
        ptr->setNext(newNode);
    }
}
template<typename  T>
Iterator<T>* LinkedList<T>::iterator(){
    ListIterator *listIterator = new ListIterator(head);
    return listIterator;
}

template<typename T>
void LinkedList<T>::printIterator(void(*work)(T t)) {
    Iterator<T> *it = iterator();
    while(it->hasNext()){
        work(it->next());
    }
    std::cout << std::endl;
}

template<typename T>
void LinkedList<T>::print(void(*work)(T t)) {
    Node<T> *ptr = head;
    while (ptr != nullptr) {
        work(ptr->getValue());
        ptr = ptr->getNext();
    }
    std::cout << std::endl;
}
template<typename T>
T LinkedList<T>::operator[](int pos){
    if(pos >= 0 && pos <= size()){
        int i = 0 ;
        Node<T> *ptr = head;
        while(i != pos){
            i++;
            ptr = ptr->getNext();
        }
        return ptr->getValue();
    }else{
        return T();
    }
}
template<typename T>
int LinkedList<T>::size(){
    int counter = 0;
    Iterator<T> *it = iterator();
    while(it->hasNext()){
        it->next();
        counter++;
    }
    return counter;
}

#endif //CLIONCPP_LINKEDLIST_H
