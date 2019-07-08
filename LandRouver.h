#ifndef LANDROUVER_H
#define LANDROUVER_H
#include "Carro.h"
#include "Usuario.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>


class LandRouver: public Carro
{
	friend ostream & operator<<(ostream &, const LandRouver&);
	public:
		
		LandRouver(const string &, int, int,bool, const string &, const string &);
		
		LandRouver();
		
		LandRouver (const LandRouver &);
		
		virtual ~LandRouver(){};
		
		bool ligar (bool);
		
		void acalerar();
		
		void freiar();
		
		void businar();
		
		void print();	
		
		void setAtritubos();
		
		void menssagemNick(const string &);	
		
		void setTamanho();
		
		void escolhaModelo(string);
		
		void escolhaCenario(string);
		 
		//----------- SOBRECARGA DE OPERADORES--------------------
	
		const LandRouver operator = (const LandRouver  &);
		
		int operator != (LandRouver &);
		
		bool operator == (const LandRouver &);
	private:
		
	string cenario;
			
	string modelo;
	
	Usuario usuarioCad;
	
	const int tamanhoRoda= 19;  
		
	bool ligar2;
};

#endif
