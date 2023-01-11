#include "cachorro_quente.hpp"

  CachorroQuente::CachorroQuente(int num_salsichas,std::vector<std::string>& complementos,bool prensado,int qtd){
  _quantidade=qtd;
  _num_salsichas = num_salsichas;
  _complementos = complementos;
  _prensado = prensado;
}

float CachorroQuente::calcPreco() {
  float total;
  total = 5 + 1.50*(_num_salsichas) + _complementos.size();
  if(_prensado)
    total +=0.5;
  return total*(_quantidade);
}

//Ex: 4X cachorro-quente com 2 salsichas, milho, queijo ralado.
std::string CachorroQuente::descricao() const {
  std::string descricao;
  int ultimo =_complementos.size();
  int i=1;
  descricao = std::to_string(_quantidade) +"X" +" " + "cachorro-quente";
  if(_prensado == true)
    descricao= descricao + " " + "prensado";
  descricao = descricao +" " + "com" + " " + std::to_string(_num_salsichas)+" "+"salsicha(s)" + "," + " ";
  for(std::string X : _complementos){
    descricao = descricao + X;
    if(i != ultimo)
      descricao = descricao +"," + " ";
    else
      descricao = descricao + ".";
    i++;
   }
   
  return descricao;
 }