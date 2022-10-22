#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include <locale.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "");
    LinkedList* list = new LinkedList();

    Node* poly1 = NULL;
    Node* poly2 = NULL;
    Node* poly3 = NULL;
 
    poly1 = list->addnode(poly1, 10, 4);
    poly1 = list->addnode(poly1, 0, 3);
    poly1 = list->addnode(poly1, 1, 1);

 
    poly2 = list->addnode(poly2, -3, 4);
    poly2 = list->addnode(poly2, 0, 2);
    poly2 = list->addnode(poly2, 2, 1);
    

    cout << "Primeiro polinômio: ";
    list->printList(poly1);
 
    cout << "Segundo polinômio: ";
    list->printList(poly2);
 

    poly3 = list->sum(poly1, poly2, poly3);
 
    cout << "Resultado da soma entre os polinômios: ";

    list->printList(poly3);


    delete list;

}
