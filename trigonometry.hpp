//VAMOS CRIAR UM ARQUIVO QUE IMPLEMENTA FUNÇÕES TRIGONOMÉTRICAS USANDO A FÓRMULA DE EULER PARA O SENO


/*
UMA FUNÇÃO ANALÍTICA PODE SER REPRESENTADA POR UMA SÉRIE DE POTÊNCIAS, UMA SÉRIE DE TAYLOR NO CASO DE FUNÇÕES REAIS DE UMA
VARIÁVEL OU UMA SÉRIE DE MACLAURIN NO CASO DE FUNÇÕES COMPLEXAS DE UMA VARIÁVEL.

UM POLINÓMIO PODE SER FATORADO EM UMA DECOMPOSIÇÃO DE BINÔMIO DA FORMA (x+a) SE SUAS RAÍZES a's FOREM CONHECIDAS. ESTA OBSERVAÇÃO PODE SER UTILIZADA PARA IMPLEMENTAR UMA FUNÇÃO ANAĹITICA CUJOS ZEROS SÃO CONHECIDOS.

USAREMOS ESTA OBSERVAÇÃO PARA IMPLEMENTAR AS FUNÇÕES TRIGONOMÉTRICAS USANDO A CHAMADA FÓRMULA DE EULER PARA O SENO sin(x).
ESTA FÓRMULAÇÃO ESTABELECE UMA CONEXÃO DIRETA COM A FUNÇÃO GAMMA E COMA FUNÇÃO ZETA DE RIEMANN.
AS DEMAIS FUNÇÕES TRIGONOMÉTRICAS SÃO FACILMENTE OBTIDAS A PARTIR DA FUNÇÃO SENO USANDO-SE A RELAÇÕES:
[sin(x)]²+[cos(x)]²=1, tg(x)=sin(x)/cos(x), cot(x)=cos(x)/sin(x).

DESTA FORMA É POSSÍVEL EXTENDER AS FUNÇÕES TRIGONOMÉTRICAS USUÁIS PARA ARGUMENTOS COMPLEXOS.

*/

//****************************************************************************************************************************
//CABEÇALHO
#ifndef TRIGONOMETRY_H
#define TRIGONOMETRY_H
#include"complex_numbers.hpp"
#include<assert.h>
#include<cmath>

//CONSTANTES GLOBAIS
const double PI=3.1415926535897932384626433;

//****************************************************************************************************************************
//PROTÓTIPOS DE FUNÇÕES
double sin_(double);
complex<double> sin_(complex<double>);
double cos_(double);
complex<double> cos_(complex<double>);
double tan_(double);
complex<double> tan_(complex<double>);
double cot_(double);
complex<double> cot_(complex<double>);

//****************************************************************************************************************************
//FUNÇÕES
//Função seno
//Argumentos reais
double sin_ (double x){
//Restrição
assert(x<=(2*PI));
//Variáveis locais
double argument=x/PI;
long long unsigned i;//Variável de iteração;
double result = x;
//Procedimento
//Computando a função seno usando um produtório
for(long long unsigned i=1; i<1000000; i++){
result*=(1-((argument*argument)/(i*i)));
                                           };
//Resultado
if(x<=PI)
return result;
else if(x==PI || x==0)
return 0;
else
return (-1.0)*result;

                      };

//Função seno para argumentos complexos
complex<double> sin_(complex<double> z){
//Váriaveis locais
complex<double> result;
//Procedimentos
result.real = std::sin(z.real)*std::cosh(z.imag);
result.imag = std::cos(z.real)*std::sinh(z.imag);
return result;
                                       };

//Função cosseno
//Argumento real
double cos_(double x){
//Restrição
assert(x<=(2*PI));
//Variáveis locais
double result = std::sqrt(1-sin_(x)*sin_(x));
//Procedimento
//Resultado
if(x<PI/2 || x>(1.5*PI))
return result;
else if(x==(PI/2) || x==(1.5*PI))
return 0;
else
return (-1.0)*result;

                     };

//Argumento complexo
complex<double> cos_(complex<double> z){
//Váriaveis locais
complex<double> result;
//Procedimentos
result.real = std::cos(z.real)*std::cosh(z.imag);
result.imag = std::sin(z.real)*std::sinh(z.imag);
return result;
                                       };

//Função tangente
//Argumento real
double tan_(double x){
return sin_(x)/cos_(x);
                     };
//Argumento complexo
complex<double> tan_(complex<double> z){
return sin_(z)/cos_(z);
                                       };


//Função cotangente
//Argumento real
double cot_(double x){
return cos_(x)/sin_(x);
                     };
//Argumento complexo
complex<double> cot_(complex<double> z){
return cot_(z)/sin_(z);
                                       };

//****************************************************************************************************************************
//FIM DO HEADER
#endif
