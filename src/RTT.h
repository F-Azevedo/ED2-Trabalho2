//
// Created by fernando on 02/04/2021.
//

#ifndef TRABED2___2020_2_RTT_H
#define TRABED2___2020_2_RTT_H

#include "Grafo.h"

typedef struct atalhos Atalhos;

Atalhos * inicializaAtalhos(Grafo* g);
void insereLinhaAtalho(Atalhos* at, double* vet, int i);
void liberaAtalhos(Atalhos * at);
void calculaTodosRTTFinal(Atalhos * at, Grafo * grafo);
double RTT(Atalhos * a, int p, int  q);
double RTT_Final(Atalhos * at, int p, int q, Grafo * g);
double RTT_Relativo(Atalhos* a, int p, int q, Grafo* grafo);

#endif //TRABED2___2020_2_RTT_H
