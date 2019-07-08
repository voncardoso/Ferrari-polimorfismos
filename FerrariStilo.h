#ifndef FERRARISTILO_H
#define FERRARISTILO_H
#include "Carro.h"
#include "Ferrari.h"
class FerrariStilo : public Ferrari
{
	friend ostream & operator<<(ostream &, const FerrariStilo &);
	public:
	
		FerrariStilo (bool, const string &);
	
		FerrariStilo( );
		
	
		virtual ~FerrariStilo();
	
		FerrariStilo(const FerrariStilo &);
		
		void ligarTeto (bool);
		
		void escolharCor (const string &);
		
		void print ();
		
		
		//----------- SOBRECARGA DE OPERADORES--------------------
	
		const FerrariStilo operator = (const FerrariStilo  &);
		
		int operator != (FerrariStilo &);
		
		bool operator == (const FerrariStilo &);
		
	private:
		
		bool tetoSolar;
		string cor;
		
};

#endif
