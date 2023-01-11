#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

class Pizza : public Produto {
  private:
  std::string _sabor;
  int _num_pedacos;
  bool _borda_recheada;

  public:
  Pizza(const std::string& sabor,int pedacos,bool borda_recheada,int qtd);

   //5 reais por pedaço + 10 reais se borda recheada  
   //+ 8 reais se sabor tiver a palavra "especial" 
   //(ex: especial bacon, frango com catupiry especial)
  float calcPreco() override;

  std::string descricao() const override;

};

#endif