#include "LinkedList.h"
#include "Node.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() 
{

 listSize = 0;
 header = NULL;
 trailer = NULL;

}

int LinkedList::size() {

 return listSize;
}

bool LinkedList::isEmpty() {

    if (listSize==0)
        return true;
    else
        return false;
}



Node* LinkedList::addnode(Node* start, int coef, int pot)
{

    Node* newnode = new Node;
    newnode->coef = coef;
    newnode->pot = pot;
    newnode->proximo = NULL;
 
    if (start == NULL)
        return newnode;
 
    Node* ptr = start;

    while (ptr->proximo != NULL)
        ptr = ptr->proximo;
    ptr->proximo = newnode;
 
    return start;
    
}

void LinkedList::SameCoef(Node* start)
{
    Node *ptr1, *ptr2, *dup;
    ptr1 = start;
 
   
    while (ptr1 != NULL && ptr1->proximo != NULL) {
        ptr2 = ptr1;
 
      
        while (ptr2->proximo != NULL) {
 
          
            if (ptr1->pot == ptr2->proximo->pot) {
 
                ptr1->coef = ptr1->coef + ptr2->proximo->coef;
                dup = ptr2->proximo;
                ptr2->proximo = ptr2->proximo->proximo;
 
                delete (dup);
            }
            else
                ptr2 = ptr2->proximo;
        }
        ptr1 = ptr1->proximo;
    }
}

Node* LinkedList::sum(Node* poly1, Node* poly2, Node* poly3)
{
 
    Node *ptr1, *ptr2;
    ptr1 = poly1;
    ptr2 = poly2;
    
    int aux, aux2;
    
    while (ptr1->proximo && ptr2->proximo != NULL) 
    {
        
        if (ptr1->pot == ptr2->pot) 
        {
            aux = ptr1->coef + ptr2->coef;
            aux2 = ptr1->pot;
            
            poly3 = addnode(poly3, aux, aux2);
            

            ptr1 = ptr1->proximo;
            ptr2 = ptr2->proximo;
            
        }
        
        else if (ptr1->pot > ptr2->pot) 
        {
            aux = ptr1->coef;
            aux2 = ptr1->pot;
            
            poly3 = addnode(poly3, aux, aux2);
            
            ptr1 = ptr1->proximo;
            
        }
        
        else if (ptr1->pot < ptr2->pot) 
        {
            aux = ptr2->coef;
            
            aux2 = ptr2->pot;
            
            poly3 = addnode(poly3, aux, aux2);
            
            ptr2 = ptr2->proximo;
            
        }
    }
    while (ptr1 != NULL) 
    {
        aux = ptr1->coef;
        aux2 = ptr1->pot;
            
        poly3 = addnode(poly3, aux, aux2);
            
        ptr1 = ptr1->proximo;
            
            
    }
    while (ptr2 != NULL) 
    {
        
        aux = ptr2->coef;
            
        aux2 = ptr2->pot;
            
        poly3 = addnode(poly3, aux, aux2);
            
        ptr2 = ptr2->proximo;
            
    }
    
    SameCoef(poly3);
    return poly3;
}

void LinkedList::printList(Node* ptr)
{
    while (ptr->proximo != NULL) {
        cout << ptr->coef << "x^" << ptr->pot ;
       if(ptr->proximo!=NULL && ptr->proximo->coef >=0)
          cout << "+";
 
        ptr = ptr->proximo;
    }
    cout << ptr->coef << "\n";
}

