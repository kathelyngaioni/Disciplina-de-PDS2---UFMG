#include "acai.hpp"

Acai::Acai(int tamanho,std::vector<std::string>& complementos,int qtd){
  _quantidade = qtd;
  _tamanho = tamanho;
  _complementos =complementos;
}

float Acai::calcPreco()  {
  float preco;
  preco =0.02*(_tamanho) + 2*(_complementos.size());
  return preco *(_quantidade);
}
//2X açai 700ml com leite em pó, granola.
std::string Acai::descricao() const {
  std::string descricao;
  int ultimo =_complementos.size();
  int i=1;
  descricao = std::to_string(_quantidade) + "X" + " "+"açai ";
  descricao = descricao + std::to_string(_tamanho)+"ml"+" "+"com"+" ";
  for(std::string X : _complementos){
    descricao = descricao + X;
    if(i != ultimo)
      descricao = descricao +"," +" ";
    else
      descricao= descricao +".";
    i++;
    }
    return descricao;
 }