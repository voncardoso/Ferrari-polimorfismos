#include "LandRouver.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Carro.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;


 
LandRouver::LandRouver()
:Carro()
{
	this -> ligar2 = false;
	this -> modelo = "\ndesconhecido";
	this -> cenario = "\ndesonhecido";

}
LandRouver::LandRouver(const string &marca, int potencia, int velocidade,bool ligar2, const string & modelo, const string & cenario):
	Carro (marca, potencia, velocidade)
{

	

		this -> ligar2 = ligar2;
		this -> modelo = modelo;
		this -> cenario = cenario;
	

}


LandRouver::LandRouver(const LandRouver &land )
: Carro( static_cast< LandRouver >( land ) )
{

	this -> ligar2= land.ligar2;
	this -> modelo = land.modelo;
	this -> cenario = land.cenario;
	this -> velocidade = land.velocidade;
	this -> potencia = land.potencia;
	this -> marca = land.marca;
	
}

void LandRouver::escolhaModelo(string modelo)
{
	cout << "\nModelo:" << modelo;
}

void LandRouver::escolhaCenario(string cenario)
{
	cout << "\nCenario:" << cenario;
}

void LandRouver::setTamanho()
{
  cout << "Aro : " << tamanhoRoda;
}

bool LandRouver::ligar(bool ligar2)
{

	if (ligar2==1)
	{
		cout << "\nLand Rouver esta ligada";
	}else 
		if (ligar2==0)
		{
			cout << "\n Land Rouver esta deligada";
		}
}
void LandRouver::acalerar()
{
	cout << "\n Acelarar :para lado";
}	 

void LandRouver::freiar()
{
	cout << "\nFreiar: no sinal";
}

void LandRouver::businar()
{
	cout << "\n Businar: bam bam bam";		 	
}

void LandRouver::setAtritubos()
{
	 this -> velocidade=velocidade;
	 this -> potencia= potencia;
	 this -> marca= marca;
}

void LandRouver::print ()
{
	cout << "\n" << ligar(ligar2) << "\n";
	this -> setTamanho();
	this -> escolhaModelo(modelo);
	this -> escolhaCenario(cenario);
	cout << "\nVelocidade: " << this -> velocidade;
	cout << "\nPotencia: " << this -> potencia;
	cout <<"\n Marca: " <<this -> marca;

}

void LandRouver::menssagemNick(const string &nomeNick)
{
	usuarioCad.nomeNickJogo(nomeNick);
}
const LandRouver LandRouver:: operator = (const LandRouver &land) 
{

	this -> ligar2 = land.ligar2;
	this -> velocidade= land.velocidade;
	this -> potencia= land.potencia;
	this -> marca= land.marca;
	
	return *this;
}

ostream &operator<<( ostream &out, const LandRouver &land )
{
	
	out << land.ligar2;
	out << land.potencia;
	out << land.marca;
	out << land.velocidade;
}


bool LandRouver::operator ==(const LandRouver &land)
{
	if (ligar2 == land.ligar2)
	{
		return true;
	}else 
		return false;
		if (potencia == land.potencia)
		{
			return true;
		}else
			return false;
}
 
int LandRouver::operator !=(LandRouver &land)
{
	if (ligar2 != land.ligar2)
	{
		return 0;
	}else
		return 0;
}
