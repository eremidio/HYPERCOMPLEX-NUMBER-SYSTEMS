//VAMOS CRIAR UM PROGRAMA PARA TESTAR AS ROTINAS CRIADAS NO ARQUIVO eisentein_integers.hpp 
//COMPILAR ESTE PROGRAMA: g++ -o eisenstein_integers eisenstein_integers.cpp


//Cabeçalho
#include"eisenstein_integers.hpp"
using namespace  std;


//Função principal
int main(){
//Variáveis locais
eisenstein_integer<int> z1(2,3), z2, z3, z4, z5, z6;

//Procedimentos
//Inicializando e exibindo elementos da classe
z2.set();
cout<<"z1: "<<z1.algebraic()<<'\n';
cout<<"z2: "<<z2.algebraic()<<'\n';

//Cálculo das normas
cout<<"|z1|: "<<z1.norm()<<'\n';
cout<<"|z2|: "<<z2.norm()<<'\n';


//Genando os plinômios irredutíveis associados a um inteiro de Eisenstein
cout<<"z1 P(x): "<<z1.generate_monic_irreducible_polynomial().algebraic()<<'\n';
cout<<"z2 P(x): "<<z2.generate_monic_irreducible_polynomial().algebraic()<<'\n';

//Operações no conjunto Z[ω]
z3=z1+z2;
z4=z1-z2;
z5=z1*z2;
z6=z1/z2;

cout<<"z3=z1+z2: "<<z3.algebraic()<<'\n';
cout<<"z4=z1-z2: "<<z4.algebraic()<<'\n';
cout<<"z5=z1*z2: "<<z5.algebraic()<<'\n';
cout<<"z6=z1/z2: "<<z6.algebraic()<<'\n';


//Finalizando a aplicação
return 0;
          }
