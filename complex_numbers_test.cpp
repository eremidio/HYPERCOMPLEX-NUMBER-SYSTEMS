//ARQUIVO COM TESTE DA CLASSE DE NÚMEROS COMPLEXOS DISPONÍVEL EM::complex_numbers.hpp
//COMPILAR ESTE PROGRAMNA COM O COMANDO: g++ -o complex_numbers_test complex_numbers_test.cpp

//Cabeçalho
#include"complex_numbers.hpp"
#include<iostream>
using namespace std;

//Função principal
int main(){
//Inicializando elementos da classe
complex<double> z1(1.2, 2.6), z2, z3, z4, z5, z6, z7, z8, z9, z10, z11;
double z_norm, z_polar;
z2.set();
z3.set();

std::cout<<"z1: "<<z1.algebraic()<<'\n';
std::cout<<"z2: "<<z2.algebraic()<<'\n';
std::cout<<"z3: "<<z3.algebraic()<<'\n';

//Operações aritméticas básicas
z4=z1+z2;
z5=z1-z3;
z6=z1*z2;
z7=z1/z2;

std::cout<<"z1+z2: "<<z4.algebraic()<<'\n';
std::cout<<"z1-z3: "<<z5.algebraic()<<'\n';
std::cout<<"z1*z2: "<<z6.algebraic()<<'\n';
std::cout<<"z1/z2: "<<z7.algebraic()<<'\n';

//Conjugação, inverso multiplicativo e norma
z_norm=z1.norm();
z_polar=z2.polar();
z8= z1.conj();
z9=z1.inv();
std::cout<<"|z1|: "<<z_norm<<'\n';
std::cout<<"θ(z2): "<<z_polar<<'\n';
std::cout<<"z1: "<<z8.algebraic()<<'\n';
std::cout<<"(1/z1): "<<z9.algebraic()<<'\n';

//Fórmula
z10=z1.exp();
z11 = z1.pow(0.5);
std::cout<<"z10: "<<z10.algebraic()<<'\n';
std::cout<<"z11: "<<z11.algebraic()<<'\n';

//Finalizando a aplicação
return 0;
          };
