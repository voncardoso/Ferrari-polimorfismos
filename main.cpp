#include <iostream>
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Carro.h"
#include <conio.h>
#include "Ferrari.h"
#include "LandRouver.h"
#include "Lamborghini.h"
#include <vector>
#include "FerrariStilo.h"
#include <time.h>
#include <typeinfo>

using std::string;
using namespace std;
using std::cout;
using std::cin;




int main(int argc, char** argv) {
	
	bool ligar1 = false;
	cout <<"\n----------Ferrari-----------\n\n";
	Usuario user("von", "vont", "masculini");
	user.nomeUsuario("von");
	Carro *ferrari = new Ferrari("FErrari", 200,456,false,"ferrari S","cidade");
	ferrari -> freiar();
	ferrari -> acalerar();
	ferrari -> businar();
	ferrari -> print();
	Ferrari *stilo = new FerrariStilo(true,"vermelha");
	stilo -> print();
	
	cout <<"\n----------Land Rouver-----------\n\n";
	Carro *landRouver = new LandRouver("LandRouver",350, 300,true, "Land Rouver Velar", "montanhas");
	landRouver -> ligar(false);
	landRouver -> freiar();
	landRouver -> acalerar();
	landRouver -> businar();
	landRouver -> print();
	
	cout <<"\n----------Lamborghini-----------\n\n";
	Carro *lamborghini = new Lamborghini("Lamborghini",200, 1000,false,"Lamborghini Galardo", "pista de corrida");
	lamborghini -> ligar(false);
	lamborghini -> freiar();
	lamborghini -> acalerar();
	lamborghini -> businar();
	lamborghini -> print();

	// create vector of four base-class pointers
	vector <Carro *> carros(3);
	carros[0] = new Ferrari("FErrari", 200,456,false,"ferrari S","cidade");
	carros[1] = new LandRouver("LandRouver",350, 300,true, "Land Rouver Velar", "montanhas");
	carros[2] = new Lamborghini("Lamborghini",200, 1000,false,"Lamborghini Galardo", "pista de corrida");
	
	cout << "\n\n----------------vector------------------------\n\n";
	
	for (size_t i =0; i<carros.size(); i++)
	{
		carros[i]->print();
		
		Ferrari *derivadPtr= dynamic_cast < Ferrari*> (carros[i]);
		if (derivadPtr !=0)
		{
			bool Ferrari =  derivadPtr->ligar(true);
			derivadPtr -> ligar(false);		
	
		}
		
		 Ferrari *d=dynamic_cast<Ferrari*>(carros[0]);
	}
	     
	     
	     
	
	
	for ( size_t j = 0; j < carros.size(); j++ )
	{	
		cout << "\ndeleting object of " << typeid( *carros[j] ).name( ) << endl;
		delete carros[j];
	}
	return 0;
}
