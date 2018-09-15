/*
Nome: Guilherme de Brito Abreu
RA: 173691
*/

#ifndef OO_VIEW_HPP
#define OO_VIEW_HPP

#include <ncurses.h>
#include <thread>

#include "../model/snake_model.hpp"

class Tela {
  private:
    ListaDeSnakes *lista;
    pos_2d *food_pos;
    int maxI, maxJ;
    float maxX, maxY;

  public:
    Tela(ListaDeSnakes *lds, pos_2d *food_pos, int maxI, int maxJ, float maxX, float maxY);
    ~Tela();
    void stop();
    void init();
    void update();
};

#endif
