#ifndef CARRO_H
#define CARRO_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Usuario.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;


class Carro
{
	friend ostream & operator<<(ostream &, const Carro &);
	public:
		Carro (const string marca, int potencia, int velocidadeMax):
			marca(marca), potencia(potencia), velocidade(velocidade){}
		Carro (){};
		
		virtual ~Carro(){}
		
		// metdos virtuis puros
		virtual bool ligar (bool)=0;
		virtual void acalerar()=0;
		virtual void freiar()=0;
		virtual void businar()=0;
		virtual void print ()=0;
		
	
		//----------- SOBRECARGA DE OPERADORES-------------------- 
	const Carro & operator = ( const Carro &);
    int operator  == ( const Carro &) const ;
    bool operator != ( const Carro &);

	
	protected:
		string marca;
		int potencia;
		int velocidade;
		Usuario usuarioCad;
		
		
		
	

		
};

#endif
