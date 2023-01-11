#include "fogao.hpp"

// Adicione seus metodos / construtores aqui
Fogao::Fogao(int queima_dores,int capa_cidade){
 numero_de_queimadores=queima_dores;
 capacidade_forno=capa_cidade;
}
int Fogao::NumeroDeQueimadores(){
  return numero_de_queimadores;
}
int Fogao::CapacidadeForno(){
  return capacidade_forno;
}