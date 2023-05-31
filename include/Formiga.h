#ifndef FORMIGA_H
#define FORMIGA_H

#include "Objeto.h"
#include "Renderer.h"

class Grid;

class Formiga : public Objeto {

    private:

        bool
         procurandoComida = true;

        // Vetor que indica Direção da Formiga
        float dir_x;
        float dir_y;

        // Posição Relativa
        float pos_xR;
        float pos_yR;

        // Campo de visão
        int distVisao = 30;
        int angVisao = 180;

        // Modulo do Vetor anterior, indica quantos pixels a formiga se move
        float velocidade;

        // Angulo do Vetor de direção da formiga
        int angulo;

        // Mudança que ocorre no angulo
        int aceleracao_angular;

        // Intervalo entre soltar feromonio
        int tempoFer = 10;

    public:

        // Construtor
        Formiga(int x, int y, int w, int h,float vel, int angulo_inicial);

        // Desenha formiga na tela
        void draw(Renderer *r);

        
};

#endif