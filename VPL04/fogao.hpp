#ifndef FOGAO_HPP
#define FOGAO_HPP

#include <iostream>
#define qtde_maxima_galpao_fogao 100

class Fogao {
    private:
    // Adicione suas variaveis globais aqui
    int numero_de_queimadores;
    int capacidade_forno;

    public:
    // Adicione a assinatura dos seus metodos / construtores aqui
   Fogao(int queima_dores,int capa_cidade);
   int NumeroDeQueimadores();
   int CapacidadeForno();  
};

#endif