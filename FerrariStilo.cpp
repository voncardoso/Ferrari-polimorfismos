#include "FerrariStilo.h"
#include "Carro.h"
#include "Ferrari.h"
FerrariStilo::FerrariStilo()
 : Ferrari()
{
	this -> tetoSolar = false;
	this -> cor = "desconhecido";
}

FerrariStilo::FerrariStilo(bool tetoSolar, const string &_cor)
{
	tetoSolar = tetoSolar;
	cor = _cor;
	
}

FerrariStilo::FerrariStilo(const FerrariStilo & stil )
: Ferrari( static_cast< FerrariStilo >( stil ) )
{
	tetoSolar = stil.tetoSolar;
}

FerrariStilo::~FerrariStilo()
{
	
}

void FerrariStilo::ligarTeto(bool tetoSolar)
{
	 if (tetoSolar== 1)
	 {
	 	cout << "\nTeto Solar: desligado";
	 }else
	 	cout << "\nTeto Solar: ligado";
}

void FerrariStilo::escolharCor(const string &cor)
{
	cout << "\n Cor do carro :" << cor;
}


void FerrariStilo::print ()
{
	this -> ligarTeto(tetoSolar);
	this -> escolharCor (cor);
}

const FerrariStilo FerrariStilo:: operator = (const FerrariStilo &stil) 
{
	*static_cast< Ferrari * >( this ) = static_cast< Ferrari >(stil);
	this -> tetoSolar = stil.tetoSolar;
	return *this;
}

ostream &operator<<( ostream &out, const FerrariStilo &stil )
{
	out << 	"Ferrari: " << static_cast< Ferrari >( stil ) << '\t';
	out << "Teto Solar :" << stil.tetoSolar;
	

}


bool FerrariStilo::operator ==(const FerrariStilo &stil)
{
	if (tetoSolar == stil.tetoSolar)
	{
		return true;
	}else 
		return false;

}
 
int FerrariStilo::operator !=(FerrariStilo &stil)
{
	if (tetoSolar == stil.tetoSolar)	
	{
		return 0;
	}else
		return 0;
}
