//
// Created by Nassar, Mohamad Adnan on 06.06.22.
//

#ifndef CLIONCPP_NODE_H
#define CLIONCPP_NODE_H


template<typename T>  class Node {
private:
    T value;
    Node *next;
public:
    Node( T value, Node *next) : value(value), next(next) {}

    T getValue() const {
        return value;
    }

    void setValue( T value) {
        Node::value = value;
    }

    Node *getNext() const {
        return next;
    }

    void setNext(Node *next) {
        Node::next = next;
    }

};


#endif //CLIONCPP_NODE_H
