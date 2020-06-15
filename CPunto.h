//
// Created by Maria Hilda Bermejo on 6/14/20.
//

#ifndef INC_01_PUNTOS_DISTANCIA_CPUNTO_H
#define INC_01_PUNTOS_DISTANCIA_CPUNTO_H

#include <iostream>
#include <cmath>
using namespace std;

using tnum=double;
using tentero=unsigned int;

class CPunto {
private:
  tnum x,y;
public:
  CPunto(){x=0; y=0;}
  CPunto(tnum _x, tnum _y):x(_x), y(_y){}
  CPunto(CPunto &otroPunto);
  virtual ~CPunto(){cout << "\ndestruyendo el objeto ...";}
  tnum distancia(CPunto &otroPunto);
  //--- metodos de acceso
  void setx(tnum _x) { x=_x;}
  tnum getx(){return x;}
  void sety(tnum _y) {y=_y;}
  tnum gety(){ return y;}
};


#endif //INC_01_PUNTOS_DISTANCIA_CPUNTO_H
