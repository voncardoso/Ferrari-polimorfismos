#ifndef FERRARI_H
#define FERRARI_H
#include "Carro.h"
#include "Ferrari.h"
#include "Usuario.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>


using std::string;
using namespace std;
using std::cout;
using std::cin;


class Ferrari :public Carro
{
	friend ostream & operator<<(ostream &, const Ferrari&);
	public:
		Ferrari (const string &, int, int,bool, const string &, const string &);
	
		Ferrari();
	
		Ferrari (const Ferrari &);
		
		virtual~Ferrari(){};
		
		bool ligar (bool);
	
		void acalerar();
	
		void freiar();
	
		void businar();
	
		void print ();
	
		void setAtritubos();
		
		virtual void escolhaModelo(string);
		
		virtual void escolhaCenario(string);
		
		void menssagemNome (const string &);
		
		void menssagemGenero(const string &);
		
		void menssagemNick(const string &);
		
		// sobrecarga de operadores
		
		const Ferrari operator=(const Ferrari &);
		
		int operator != (Ferrari &);
		
		bool operator==(const Ferrari &);
	 
	private:
	
	static int quantidadeLug;
	
	string modelo;
		
	string cenario;
	
	string nome;
	
	 Usuario usuarioCad;
	
	bool ligar1;
		
};

#endif
