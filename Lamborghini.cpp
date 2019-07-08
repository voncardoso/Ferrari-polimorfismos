#include "Lamborghini.h"


Lamborghini::Lamborghini()
:Carro()
{
	this -> ligar3 = false;
	this -> modelo = "\ndesconhecido";
	this -> cenario = "\ndesonhecido";
}


Lamborghini::Lamborghini(const string &marca, int potencia, int velocidade,bool ligar3,const string & modelo, const string & cenario):
	Carro (marca, potencia, velocidade)
	{
		this -> ligar3 = ligar3;
		this -> modelo = modelo;
		this -> cenario = cenario;
	}


Lamborghini::Lamborghini(const Lamborghini &lamb )
: Carro( static_cast< Lamborghini >( lamb ) )
{

	this -> ligar3 = lamb.ligar3;
	this -> modelo = lamb.modelo;
	this -> cenario = lamb.cenario;
	this -> velocidade= lamb.velocidade;
	this -> potencia= lamb.potencia;
	this -> marca= lamb.marca;
	
}

void Lamborghini::escolhaModelo(string modelo)
{
	cout << "\nModelo:" << modelo;
}

void Lamborghini::escolhaCenario(string cenario)
{
	cout << "\nCenario:" << cenario;
}

void Lamborghini::setVelocidade()
{
	cout << "Velocidade Maxima :" << velocidadeMax;
}

bool Lamborghini::ligar(bool ligar3)
{

	if (ligar3==1)
	{
		cout << "\nLamborghini  esta ligada";
	}else 
		if (ligar3==0)
		{
			cout << "\n Lamborghini esta deligada";
		}
}

void Lamborghini::acalerar()
{
	cout << "\n Acelarar :para tras";
}	 

void Lamborghini::freiar()
{
	cout << "\nFreiar: no estacionamento";
}

void Lamborghini::businar()
{
	cout << "\n Businar: bin  bin bin";		 	
}

void Lamborghini::setAtritubos()
{

	 velocidade =velocidade;
	  potencia= potencia;
	 marca= marca;
}


void Lamborghini::print ()
{
	cout << "\n" <<ligar(ligar3);
	this -> setVelocidade();
	this -> escolhaModelo(modelo);
	this -> escolhaCenario(cenario);
	cout << "\nVelocidade: "<< this -> velocidade;
	cout << "\nPotencia: "<< this -> potencia;
	cout <<"\n Marca: " <<this -> marca;

}

void Lamborghini::menssagemNick(const string &nomeNick)
{
	usuarioCad.nomeNickJogo(nomeNick);
}
const Lamborghini Lamborghini:: operator = (const Lamborghini &lamb) 
{

	this -> ligar3 = lamb.ligar3;
	this -> velocidade= lamb.velocidade;
	this -> potencia= lamb.potencia;
	this -> marca= lamb.marca;
	
	return *this;
}

ostream &operator<<( ostream &out, const Lamborghini &lamb )
{
	
	out << lamb.ligar3;
	out << lamb.potencia;
	out << lamb.marca;
	out << lamb.velocidade;
}


bool Lamborghini::operator ==(const Lamborghini &lamb)
{
	if (ligar3 == lamb.ligar3)
	{
		return true;
	}else 
		return false;
		if (potencia == lamb.potencia)
		{
			return true;
		}else
			return false;
}
 
int Lamborghini::operator !=(Lamborghini &lamb)
{
	if (ligar3 != lamb.ligar3)
	{
		return 0;
	}else
		return 0;
}

Lamborghini::~Lamborghini()
{
	
}
