#ifndef _SAPO_H_
#define _SAPO_H_

#include <random>

class Sapo
{
  private:
        int id;
        double distancia;
        int pulos;
        std::random_device rd;
        std::default_random_engine gen;
        std::uniform_real_distribution<> dis;
  public:
        Sapo(int i);
        static double distanciaTotal;
        static double getDistanciaTotal();
        int getId();
        void setId(int i);
        double getDistancia();
        void setDistancia(double d);
        int getPulos();
        void pular();
};

#endif