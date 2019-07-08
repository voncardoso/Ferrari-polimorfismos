#include "Ferrari.h"

#include <iostream>
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;
using namespace std;
using std::cout;
using std::cin;


static int quantidadeLug = 2;


Ferrari::Ferrari()
:Carro() 
{
	this -> ligar1 = false;
	this -> modelo = "\ndesconhecido";
	this -> cenario = "\ndesonhecido";
}


Ferrari::Ferrari(const string &marca, int potencia, int velocidade,bool ligar1, const string & modelo, const string & cenario ):
	Carro (marca, potencia, velocidade)
	{
		this -> ligar1 = ligar1;
		this -> modelo = modelo;
		this -> cenario = cenario;
	}

Ferrari::Ferrari(const Ferrari &fer)
: Carro( static_cast< Ferrari >( fer ) )
{
	this -> ligar1 = fer.ligar1;
	this -> modelo = fer.modelo;
	this -> cenario = fer.cenario;
	this -> velocidade= fer.velocidade;
	this -> potencia = fer.potencia;
	this -> marca= fer.marca;
}



void Ferrari::setAtritubos()
{
	 this -> velocidade=velocidade;
	 this -> potencia= potencia;
	 this -> marca= marca;
}

void Ferrari::escolhaModelo(string modelo)
{
	cout << "\nModelo:" << modelo;
}

void Ferrari::escolhaCenario(string cenario)
{
	cout << "\nCenario:" << cenario;
}


bool Ferrari::ligar(bool ligar1)
{
	if (ligar1==1)
	{
		cout << "\nFerrari esta ligada";
	}else 
		if (ligar1==0)
		{
			cout << "\n Ferrari esta deligada";
		}
}


void Ferrari::acalerar()
{
	cout << "\n Acalerar: para frente";
}	 

void Ferrari::freiar()
{
	cout << "\nFreia: estacionar";
}

void Ferrari::businar()
{
	cout << "\nBusinar: bi bi bi";	
	
}

void Ferrari::menssagemNome(const string &nome)
{
	usuarioCad.nomeUsuario(nome);
	
}

void Ferrari::menssagemNick(const string &nomeNick)
{
	usuarioCad.nomeNickJogo(nomeNick);
}

void Ferrari::menssagemGenero(const string &genero)
{
	usuarioCad.generoUsuario(genero);
}


void Ferrari::print ()
{
	usuarioCad.nomeUsuario(nome);
	cout << "\n" <<ligar(ligar1);
	this -> escolhaModelo(modelo);
	this -> escolhaCenario(cenario);
	cout << "\nVelocidade: "<< this -> velocidade;
	cout << "\nPotencia: "<< this -> potencia;
	cout <<"\n Marca: " <<this -> marca;

}
const Ferrari Ferrari:: operator = (const Ferrari &fer) 
{
	
	this -> ligar1 = fer.ligar1;
		
	return *this;			
}

ostream &operator<<( ostream &out, const Ferrari &fer )
{
	
	out <<   fer.ligar1;
}



bool Ferrari::operator == (const Ferrari &fer)
{
	if (this -> ligar1 == fer.ligar1 )
	{
		return true;
	}else 
		return false;
}

int Ferrari::operator !=(Ferrari &Fer)
{
	if (this -> ligar1 != Fer.ligar1)
	{
		return 0;
	}else
		return 1;
}
