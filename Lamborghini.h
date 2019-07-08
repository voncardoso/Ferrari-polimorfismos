#ifndef LAMBORGHINI_H
#define LAMBORGHINI_H
#include "Usuario.h"
#include <iostream>
#include <stdio.h>
#include "Carro.h"
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;
using namespace std;
using std::cout;
using std::cin;


class Lamborghini: public Carro
{
	friend ostream & operator<<(ostream &, const Lamborghini &);
	public:
		Lamborghini(const string &, int, int,bool,const string &, const string &);
		
		Lamborghini(const Lamborghini &);
		
		Lamborghini();
		
		virtual ~Lamborghini();
		
		bool ligar (bool);
	
		void acalerar();
	
		void freiar();
	
		void businar();
	
		void print ();
		void menssagemNick(const string &);
	
		void setAtritubos();
		
		void setVelocidade();

		void escolhaModelo(string);
		
		void escolhaCenario(string);
		
		//----------- SOBRECARGA DE OPERADORES--------------------
	
		const Lamborghini operator = (const Lamborghini  &);
		
		int operator != (Lamborghini &);
		
		bool operator == (const Lamborghini &);
		
	private:
		
		static const int velocidadeMax= 400;
	
		string cenario;
		
		Usuario usuarioCad;
		
		string modelo;
		
		bool ligar3;
		
};

#endif


