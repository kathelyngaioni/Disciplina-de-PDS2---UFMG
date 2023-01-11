#include <iostream>
#include "geladeira.hpp"

// Adicione seus metodos / construtores aqui
Geladeira::Geladeira(int capa_cidade,int por_tas){
  capacidade_em_litros=capa_cidade;
  numero_de_portas=por_tas;
}

int Geladeira::CapacidadeEmLitros(){
  return capacidade_em_litros;
}
int Geladeira::NumeroDePortas(){
  return numero_de_portas;
}