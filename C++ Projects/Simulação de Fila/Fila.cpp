# include "Vetor.h"
# include "Fila.h"
Fila::Fila() {
qtde = 0;
}
int Fila::size() {
return qtde;
}
void Fila::enqueue(int n) {
add(qtde, n);
}
void Fila::dequeue() {
remove(0);
}
int Fila::front() {
return get(0);
}
