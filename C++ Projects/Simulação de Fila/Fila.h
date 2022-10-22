# include "Vetor.h"
class Fila: public Vetor
{
public:
Fila();
int size();
void enqueue(int n);
void dequeue();
int front();
};
