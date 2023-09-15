//VAMOS CRIAR UM PROGRAMA PARA TESTAR AS ROTINAS CRIADAS NO ARQUIVO complexification.hpp
//COMPILAR ESTE PROGRAMA COM O COMANDO: g++ -o complexification complexification.cpp

//Cabeçalho
#include"complex_numbers.hpp"
#include"complexification.hpp"
#include<iostream>
using namespace std;


//Função principal
int main(){
//Variáveis
complex<double> z1(2.5, 3.64), z2(1, 5), z3, z4, z5, z6, z7, z8; 
int64_t x, y;
double a, b;

//Procedimentos
//Recebendo input do usuário
z3.set();
z4.set();
cout<<"Digite um número inteiro: ";
cin>>x;
cout<<"Digite um número inteiro: ";
cin>>y;
cout<<"Digite um número real: ";
cin>>a;
cout<<"Digite um número real: ";
cin>>b;

//Ajustando variáveis
//Complexificação
z3=complexification(x);
z4=complexification(y);
z5=complexification(x, y);
z6=complexification(a);
z7=complexification(b);
z8=complexification(a, b);
cout<<"z3 = "<<z3.algebraic()<<"\n";
cout<<"z4 = "<<z4.algebraic()<<"\n";
cout<<"z5 = "<<z5.algebraic()<<"\n";
cout<<"z6 = "<<z6.algebraic()<<"\n";
cout<<"z7 = "<<z7.algebraic()<<"\n";
cout<<"z8 = "<<z8.algebraic()<<"\n";

//Realificação
realification(z1, a, b);
realification(z1, x, y);
cout<<"x = "<<x<<"\n";
cout<<"y = "<<y<<"\n";
cout<<"a = "<<a<<"\n";
cout<<"b = "<<b<<"\n";


//Finalizando aplicação
return 0;
          }
