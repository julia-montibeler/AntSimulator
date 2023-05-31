#ifndef PONTO_H
#define PONTO_H

#include "Renderer.h"

class Grid;

class Ponto {

    protected:

        int pos_x;
        int pos_y;

        Grid* grid;
        Renderer* renderer;

    public:

        //Construtor
        Ponto(int x, int y);

        //Destrutor
        ~Ponto();

        void draw(Renderer *r);

        //Getters
        int get_pos_x();
        int get_pos_y();
};

#endif
