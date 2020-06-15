//
// Created by Maria Hilda Bermejo on 6/14/20.
//

#include "CPunto.h"

CPunto::CPunto(CPunto &otroPunto)
{
  this->x = otroPunto.x;
  this->y = otroPunto.y;
}

tnum CPunto::distancia(CPunto &otroPunto)
{
  return sqrt( pow(otroPunto.x - x,2) + pow( otroPunto.y - y,2));
}