#include "pedido.hpp"

Pedido::~Pedido() {
  for(auto it=_produtos.begin();it!=_produtos.end();it++){
    delete *it;
  }
   
}

void Pedido::setEndereco(const std::string& endereco) {
  _endereco = endereco;
}

float Pedido::calculaTotal() const {
  float total=0;
  for(auto it=_produtos.begin();it!=_produtos.end();it++){
  total+=(*it)->calcPreco();
  }
  return total;
}

void Pedido::adicionaProduto(Produto* p) {
  _produtos.push_back(p);
}

std::string Pedido::resumo() const {
  std::string descricao;
   if(_produtos.size() > 0) {
     for(Produto*x: _produtos) {
       descricao = descricao + x->descricao() +"\n";
       }
      descricao = descricao + "Endereço: " + this->_endereco + "\n";
    } 
  return descricao;
}