//-- Crea un arreglo de n puntos. El array es dinamico y los puntos "ahora son dinamicos"
//-- El array guarda en cada casillero un puntero a un objeto de la clase CPunto.
//-- Dato de Entrada: n (unsigned int)
//-- Dato de Salida : solo lista los puntos

#include "CPunto.h"

int main()
{
  CPunto **pA= nullptr;
  tentero n;

  cout << "Numero de puntos :  ";
  cin >>n;

  pA = new CPunto*[n];
  //-- se crea cada punto con los datos que se leen

  tnum x, y;
  //-- ingreso de datos
  for(tentero i=0; i<n; i++)
  {
    cout << "\nPunto " << i << "\n";
    cout << " x : "; cin >> x;
    cout << " y : "; cin >> y;
    pA[i] = new CPunto(x,y);
  }

  //---se imprimen los puntos
  cout <<"\nSe imprimen los puntos \n";
  for(tentero i=0; i<n; i++)
  {
    cout << "Punto " << i <<"\n";
    cout << "(" << pA[i]->getx() << "," << pA[i]->gety() << ")" << "\n";
  }

  //--- se libera memoria
  for(tentero i=0; i<n; i++)
    delete pA[i];
  delete []pA;
  pA=nullptr;

  return 0;
}


/* Ejercicio
 * Modifique el programa para que permita hallar el perimetro de la figura formada
 * por los puntos
 */