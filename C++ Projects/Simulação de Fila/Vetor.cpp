#include "Vetor.h"

Vetor::Vetor() {
for (int i = 0; i < 10; i++)
A[i] = 0;
qtde = 0;
}
bool Vetor::isEmpty() {
if (qtde == 0)
return true;
else
return false;
}
int Vetor::size() {
return qtde;
}
int Vetor::get(int i) {
return A[i];
}
void Vetor::set(int i, int n) {
A[i] = n;
}
void Vetor::add(int i, int n) {
for (int j = qtde - 1; j >= i; j--) {
A[j + 1] = A[j];
}
A[i] = n;
qtde++;
}
void Vetor::remove(int i) {
for (int j = i; j <= qtde - 2; j++) {
A[j] = A[j + 1];
}
qtde--;
}
int Vetor::search(int n) {
for (int i = 0; i < qtde; i++) {
if (A[i] == n) {
return i;
}
}
return -1;
}
