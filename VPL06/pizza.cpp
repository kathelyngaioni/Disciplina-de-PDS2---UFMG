#include "pizza.hpp"
#include <sstream>

Pizza::Pizza(const std::string& sabor,int pedacos,bool borda_recheada,int qtd){
  _quantidade = qtd;
  _sabor = sabor;
  _num_pedacos = pedacos;
  _borda_recheada = borda_recheada;
}

float Pizza::calcPreco() {
  float total;
  
  total=5*(_num_pedacos);
  
  if(_borda_recheada == true)
    total=total + 10;
  
  std::string especial ("especial");
  std::size_t found = _sabor.find(especial);
    if(found!=std::string::npos)
    total=total + 8;
  
  return total*(_quantidade);
}
//3X pizza frango, 4 pedaços sem borda recheada.
//5X pizza marguerita especial, 4 pedaços e borda recheada.

std::string Pizza::descricao() const {
  std::string descricao;
  descricao = std::to_string(_quantidade)+ "X" + " " + "pizza" + " " + _sabor + "," + " ";
  descricao = descricao + std::to_string(_num_pedacos) + " " + "pedaços" + " ";
  if(_borda_recheada == true)
    descricao = descricao + "e borda recheada.";
  else
    descricao = descricao +"sem borda recheada.";
    
  return descricao;
}