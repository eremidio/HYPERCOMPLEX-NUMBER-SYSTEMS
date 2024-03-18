//VAMOS CRIAR UM PROGRAMA PARA TESTAR AS ROTINAS CRIADAS NO ARQUIVO algebraic_quadratic_field.hpp
//COMPILAR ESTE PROGRAMA COM O COMANDO: g++ -o algebraic_quadratic_field algebraic_quadratic_field.cpp -O2

//Cabeçalho
#include"algebraic_quadratic_field.hpp"
using namespace std;


//Função principal
int main(){
//Instanciando objetos da classe
algebraic_quadratic_field<float> z1(2.3, 3.5, 23), z2(23), z3, z4, z5, z6, z7;
algebraic_quadratic_field<int> z_int(2,6,(-5)), z_int2;

//Testando os métodos da classe de números algébricos
//Construtores e destruidores
z2.set();
z3.set();

cout<<'\n';
cout<<"z1: "<<z1.algebraic()<<'\n';
cout<<"z2: "<<z2.algebraic()<<'\n';
cout<<"z3: "<<z3.algebraic()<<'\n';
cout<<"z3*: "<<z3.conjugate().algebraic()<<'\n';

//Norma
cout<<'\n';
cout<<"N(z1): "<<z1.norm()<<'\n';
cout<<"N(z2): "<<z2.norm()<<'\n';
cout<<"N(z3): "<<z3.norm()<<'\n';

//Operadores algébricos
cout<<'\n';
z4=z1+z2;
z5=z1-z2;
z6=z1*z2;
z7=z1/z2;

cout<<"z4=z1+z2: "<<z4.algebraic()<<'\n';
cout<<"z5=z1-z2: "<<z5.algebraic()<<'\n';
cout<<"z6=z1*z2: "<<z6.algebraic()<<'\n';
cout<<"z7=z1/z2: "<<z7.algebraic()<<'\n';

//Funções auxialiares: unidades, associação de números algébricos, exponenciação, aritmética modular.
cout<<'\n';
if(is_unity<float>(z1)==true)
cout<<"z1 é uma unidade em Q(√"<<z1.d<<")\n";
else
cout<<"z1 não é uma unidade em Q(√"<<z1.d<<")\n";


cout<<'\n';
if(is_associated<float>(z1, z2)==true)
cout<<"z1/z2 é uma unidade em Q(√"<<z1.d<<")\n";
else
cout<<"z1/z2 não é uma unidade em Q(√"<<z1.d<<")\n";


cout<<'\n';
z_int2=quadratic_pow<int, int>(z_int, 2);

cout<<"z_int: "<<z_int.algebraic()<<'\n';
cout<<"z_int²: "<<z_int2.algebraic()<<'\n';


//Finalizando a aplicação
return 0;

          }
