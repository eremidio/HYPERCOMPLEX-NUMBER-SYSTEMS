//VAMOS CRIAR UM PROGRAMA QUE TESTAM AS ROTINAS DEFINIDAS NO ARQUIVO trigonometry.hpp
//COMPILAR ESTE PROGRAMA COM: g++ -o trigonometry trigonometry.cpp


//Cabeçalho
#include<iostream>
#include<cmath>
#include"trigonometry.hpp"
#include"complex_numbers.hpp"
using namespace std;

//Função principal
int main(){
//Variáveis locais
complex<double>z1;
double x;

//Procedimentos
//Recebendo input do usuário
cout<<"Digite o valor de um angulo em radianos: ";
cin>>x;
z1.set();
//Exibindo o resultado
cout<<"Seno de "<<x << " = "<<sin_(x)<<"\n";
cout<<"Cosseno de "<<x << " = "<<cos_(x)<<"\n";
cout<<"Tangente de "<<x << " = "<<tan_(x)<<"\n";
cout<<"Cotangente de "<<x << " = "<<cot_(x)<<"\n";
cout<<"STL Seno de "<<x << " = "<<std::sin(x)<<"\n";
cout<<"STL Cosseno de "<<x << " = "<<std::cos(x)<<"\n";
cout<<"STL Tangente de "<<x << " = "<<std::tan(x)<<"\n";
cout<<"STL Cotangente de "<<x << " = "<<(1.0/std::tan(x))<<"\n";
cout<<"Seno de "<<z1.algebraic() << " = "<<sin_(z1).algebraic()<<"\n";
cout<<"Cosseno de "<<z1.algebraic() << " = "<<cos_(z1).algebraic()<<"\n";
cout<<"Tangente de "<<z1.algebraic() << " = "<<tan_(z1).algebraic()<<"\n";

//Finalizando aplicação
return 0;
          }
