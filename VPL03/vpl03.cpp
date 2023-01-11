#include <iostream>
#include <string>
#include <map>
#include <list>

class Fatura {
private:
std::string _codigo;
char _tipo;
double _valor;

public:
//Fatura()= defaut;
Fatura(std::string codigo,char tipo,double valor):_codigo(codigo),_tipo(tipo),_valor(valor){}

std::string getCodigo() {
  return _codigo;
}
char getTipo() {
  return _tipo;
}
double getValor() {
  return _valor;
}

void imprimir(){
  std::cout << getTipo() <<" ";
  std::cout << getValor() <<" ";
  std::cout << getCodigo() << std::endl;
  
}
};

class Colecao {
private:
std::list<Fatura> cole_cao;
std::map<char,int>status;

public:
Colecao(){
  status.insert(std::pair<char,int>('p',0));
  status.insert(std::pair<char,int>('b',0));
  status.insert(std::pair<char,int>('g',0));
}

//funcao para encontrar a posicao
//em que sera inserido a fatura
int encontrarPosicaoParaInserir(Fatura fatu_ra){
  int po_sicao=0;
  std::list<Fatura>::iterator it;
  for(it=cole_cao.begin();it!=cole_cao.end();it++){
    if(fatu_ra.getValor() < it->getValor())
    po_sicao = po_sicao;
    else
      po_sicao++;
    } 
  return po_sicao;
}

void adicionar (Fatura f){
  //procurar se a fatura ja foi adicionada
  //na colecao
    //encontrar a posicao para inserir a fatura
    int posicao = encontrarPosicaoParaInserir(f);
    //adicionar a fatura na posicao ordenada
    std::list<Fatura>::iterator it;
    it=cole_cao.begin();
    advance(it,posicao);
    cole_cao.insert(it,f);
    //aumentar a contagem do tipo de fatura
    if(f.getTipo() == 'p'){
    status['p']++;
    }
    if(f.getTipo() == 'b'){
     status['b']++;
    }
    if(f.getTipo() == 'g'){
     status['g']++;
    }
  }

void proxima(){
  
  if(!cole_cao.empty()){ 
    Fatura f=cole_cao.back();
   //remove a fatura de maior valor
   cole_cao.pop_back();
   //imprimir a fatura removida
   
   f.imprimir();
   
    //decrementar o map de contagem
    //de acordo com o tipo de fatura removida
    if(f.getTipo() == 'p'){
    status['p']--;
    }
    if(f.getTipo() == 'b'){
     status['b']--;
    }
    if(f.getTipo() == 'g'){
     status['g']--;
    }
   }
  }
void imprimir(){
  std::list<Fatura>::iterator iy;
  for(iy=cole_cao.begin();iy!=cole_cao.end();iy++){
  iy->imprimir();
 }
}
 void Status(){
  for(auto iz=status.begin();iz!=status.end();iz++){
    std::cout<< iz->first << " ";
    std::cout<< iz->second;
    std::cout<<std::endl;
  }
 }
};

int main(){
  Colecao *colecao;
  colecao = new Colecao();
  
  char i;
  std::string co_digo;
  char ti_po;
  double va_lor;
  

  while(std::cin>>i){
    switch(i){
     case 'f':{
      std::cin>>ti_po>>va_lor>>co_digo;
      Fatura f = Fatura(co_digo,ti_po,va_lor);
      colecao->adicionar(f);
     }
     break;
     case 'r':{
     colecao->proxima();  
     }
     break;
     case 'p':{
     colecao->imprimir();  
     }
     break;
     case 's':{
     colecao->Status(); 
     }
    break;
    case'e':{
      default:
      break;
      }
    }
  }
 return 0;
 }