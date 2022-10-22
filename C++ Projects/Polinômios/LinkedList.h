#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include "Node.h"
class LinkedList
{
public:
    int listSize; 
    Node * header; 
    Node * trailer; 
   
public:
    LinkedList();
    int size();
    bool isEmpty();
    Node* addnode(Node* start, int coeff, int power);
    Node* sum(Node* poly1, Node* poly2, Node* poly3);
    void SameCoef(Node* start);
    void printList(Node* ptr); 
    
    
};

#endif // LINKEDLIST_H_INCLUDED
