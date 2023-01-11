#ifndef GELADEIRA_HPP
#define GELADEIRA_HPP

#include <iostream>
#define qtde_maxima_galpao_geladeira 100

class Geladeira {
    private:
    // Adicione suas variaveis globais aqui
    int capacidade_em_litros;
    int numero_de_portas;

    public:
    // Adicione a assinatura dos seus metodos / construtores aqui
    Geladeira(int capa_cidade,int por_tas);
    int CapacidadeEmLitros();
    int NumeroDePortas();
   

};

#endif