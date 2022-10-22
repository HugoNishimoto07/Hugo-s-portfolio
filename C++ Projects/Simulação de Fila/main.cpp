#include <iostream>
#include <cstdlib>
#include "Fila.h"
#include "Vetor.h"

using namespace std;
int main()

{

  Fila simulador;

  int minuto;
  int duraçao;
  int k;
  int n;
  int contador = 0;
  int cont_media = 0;
  int c_atendido = 0;
  int greatest_size;
  int aux;

  cout << "Digite o tempo total de duraçao:" << endl;
  cin >> duraçao;
  cout << endl;

  for (minuto=0; minuto < duraçao; minuto++)
  {

      simulador.dequeue();
      c_atendido++;

      k = rand()%2;

      if ((k = 0))
      {
         cout << "Nenhum novo cliente" << endl;
       
      }

      if ((k = 1))
      {
        simulador.enqueue(1);
        cont_media++;
      }
    
      if ((k = 2))
      {
        simulador.enqueue(2);
        simulador.enqueue(2);
        cont_media += 2;
      }

      if (simulador.size() > aux)
      {
          greatest_size = simulador.size();
      }
  }
  

  while (simulador.size() != 0) 
  {

    n = simulador.front();
    simulador.dequeue();
    cout << "elemento adicionado" << " -> "<< n << endl;

  }

  cout << endl;
  cout << "Tempo de duração total:" << duraçao << endl;
  cout << "Numero de cliente atendidos:" << c_atendido << endl;
  cout << "Tempo de espera medio na fila: " << cont_media/duraçao << " minuto(s)" << endl;
  cout <<"Maior tempo de espera = "<< greatest_size << " minuto(s)" << endl;

}
