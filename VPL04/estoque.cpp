#include <iostream>
#include "fogao.hpp"
#include "geladeira.hpp"
#include "estoque.hpp"

Estoque::Estoque(){}

void Estoque::armazena_geladeira(int capacidade, int portas){
  if(geladeiras.size()<=qtde_maxima_galpao_geladeira){
  Geladeira geladeiras_=Geladeira(capacidade,portas);
  geladeiras.push_back(geladeiras_);
    } 
  }
bool Estoque::find_gelin(int capacidade,int portas){
  for(Geladeira gelin:geladeiras){
    if((gelin.CapacidadeEmLitros()==capacidade) && (gelin.NumeroDePortas()==portas))
      return true;
    }
  return false;
  }
  
void Estoque::vende_geladeira(int capacidade, int portas){
  //achar a geladeira especifica e apagar
  int cap_=capacidade;
  int port_=portas;
  if(!geladeiras.empty() && (find_gelin(cap_,port_))){
    for(int i=0 ; i<geladeiras.size() ; i++){
      if((geladeiras[i].CapacidadeEmLitros()==cap_) && (geladeiras[i].NumeroDePortas()==port_)){
      for(int a=i;a<geladeiras.size();a++){
        geladeiras[a]=geladeiras[a+1];
      }
      break;
      }
    }
    geladeiras.pop_back();
   }  
  }
void Estoque::armazena_fogao(int queimadores, int capacidade){
  if(fogoes.size()<=qtde_maxima_galpao_fogao){
  Fogao fogoes_=Fogao(queimadores,capacidade);
  fogoes.push_back(fogoes_);
  }
}

bool Estoque::find_fogin(int queimadores,int capacidade){
  for(Fogao fogin:fogoes){
    if((fogin.NumeroDeQueimadores()==queimadores) && (fogin.CapacidadeForno()==capacidade))
      return true;
    }
  return false;
  }

void Estoque::vende_fogao(int queimadores, int capacidade){
  //achar o fogao especifico e apagar ele
  int quei_=queimadores;
  int capac_=capacidade;
 if(!fogoes.empty() && (find_fogin(quei_,capac_))){
    for(int j=0 ; j<fogoes.size() ; j++){
      if((fogoes[j].NumeroDeQueimadores()==queimadores) && (fogoes[j].CapacidadeForno()==capacidade)){
      for(int b=j;b<fogoes.size();b++){
        fogoes[b]=fogoes[b+1];
      }
      break;
      }
    }
   fogoes.pop_back();
   }
 }
void Estoque::exibe_geladeiras(){
  if(!geladeiras.empty()){
  for(Geladeira x : geladeiras) {
    std::cout << "G " << x.CapacidadeEmLitros() << " ";
    std::cout << x.NumeroDePortas() << std::endl;
  }
}
}

void Estoque::exibe_fogoes(){
  if(!fogoes.empty()){
  for(Fogao y: fogoes){
    std::cout << "F " << y.NumeroDeQueimadores() << " ";
    std::cout << y.CapacidadeForno() << std::endl;
  }
 }
}
 

int Estoque::quantidade_geladeiras(){
  return geladeiras.size();
  }

int Estoque::quantidade_fogoes(){
  return fogoes.size();
  }