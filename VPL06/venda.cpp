#include "venda.hpp"
#include <iomanip>

Venda::~Venda() {
for(auto it=_pedidos.begin();it!=_pedidos.end();it++){
    delete *it;
  }
}

void Venda::adicionaPedido(Pedido* p) {
  _pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const {

  int num_de_pedidos=1;
  float total_de_vendas=0;
  
  for(auto it=_pedidos.begin();it!=_pedidos.end();it++){
    std::cout<<"Pedido "<< num_de_pedidos << std::endl;
    std::cout<<(*it)->resumo();
    total_de_vendas = total_de_vendas + (*it)->calculaTotal();
    num_de_pedidos++;
  }
  std::cout<<"Relatorio de Vendas"<<std::endl;
  std::cout<<"Total de vendas: R$"<<std::fixed << std::setprecision (2) << total_de_vendas;
  std::cout<<std::endl <<"Total de pedidos: "<<_pedidos.size();
}