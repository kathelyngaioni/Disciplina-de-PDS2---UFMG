#include <iostream>

class Categoria{
private:
  int    _codigo_categoria;
  double _valor_caixa;

public:
  Categoria() = default;
  Categoria(int codigo_categoria, double valor_caixa) {
    _codigo_categoria = codigo_categoria;
    _valor_caixa = valor_caixa;

   }
  int getCodigo(){
    return _codigo_categoria;
  
}
  double getValorCaixa(){
    return _valor_caixa;
  
}
   void adicionaCaixa(double valor){
     _valor_caixa += valor;
    
  }
  void gastaCaixa(double valor){
    _valor_caixa-= valor;
  
}
};
class Orcamento {
private:
double _impostos=0;
Categoria _categorias[5];

public:
   Orcamento(double impostos){
    _categorias[0] = Categoria(0, (impostos * 0.15));
    _categorias[1] = Categoria(1, (impostos * 0.15));
    _categorias[2] = Categoria(2, (impostos * 0.20));
    _categorias[3] = Categoria(3, (impostos * 0.35));
    _categorias[4] = Categoria(4, (impostos * 0.15));
  
}
void gastoCategoria(int codigo_categoria, double valor){
  _categorias[codigo_categoria].gastaCaixa(valor);
  }
double getSaldo(int codigo_categoria){
  return _categorias[codigo_categoria].getValorCaixa();
  
}
Categoria* getCategoria(int codigo_categoria){
  return &_categorias[codigo_categoria];
  
}
};
int main() {
  Orcamento *orcamento;

  char test = 0;
  while(std::cin >> test) {
      switch (test) {
        case 'o': { // Inicia novo orçamento
          double valor = 0;
          std::cin >> valor;
          orcamento = new Orcamento(valor);
          
          
          // PREENCHER chamada de orçamento   
          
        }
        break;
        case 'g': { // Gastar em uma categoria
          int categoria = 0;
          double valor = 0;
          std::cin >> categoria >> valor;
          orcamento->gastoCategoria(categoria,valor);
          
          // PREENCHER chamada de orçamento
          
          std::cout << categoria << ": " << orcamento->getSaldo(categoria) <<std::endl;
        }
        break;
        case 'p': { // Imprimir todas as categorias e seus saldos
          for (int categoria = 0; categoria < 5; categoria++) {
           std::cout << categoria << ": " << orcamento->getSaldo(categoria) <<std::endl;
          }
        }
        break;
        default: {
          std::cout << "----------" <<std::endl;
        } break;
      }
  }
  return 0;
}