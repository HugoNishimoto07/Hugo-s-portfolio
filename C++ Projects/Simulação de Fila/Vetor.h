#ifndef _VETOR_H_
#define _VETOR_H_

class Vetor
{
public:
int A[10]; // armazena os elementos do vetor
int qtde; // tamanho lógico do vetor
public:
Vetor();
bool isEmpty();
int size();
int get(int i);
void set(int i, int n);
void add(int i, int n);
void remove(int i);
int search(int n);
};
#endif
