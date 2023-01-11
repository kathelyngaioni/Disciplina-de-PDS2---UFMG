#ifndef CACHORRO_QUENTE_H
#define CACHORRO_QUENTE_H

#include "produto.hpp"

class CachorroQuente : public Produto {
 private:
  int _num_salsichas;
  std::vector<std::string>_complementos;
  bool _prensado;
 public:

CachorroQuente(int num_salsichas,std::vector<std::string>& complementos,bool prensado,int qtd);

  float calcPreco() override;

  std::string descricao() const override;
 
};
#endif