#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;
using namespace std;
using std::cout;
using std::cin;


class Usuario
{
			friend ostream & operator<<(ostream &, const Usuario&);
	public:
		Usuario (const string &, const string &, const string &);
	
		Usuario();
	
		Usuario (const Usuario &);
			
		~Usuario(){};
		
		void nomeUsuario(const string &);
		
		void nomeNickJogo(const string &);
		
		void generoUsuario(const string &);
		
		void print ();
		// sobrecarga de operadores
		const Usuario operator=(const Usuario &);
		int operator != (Usuario &);
		bool operator==(const Usuario &);
	private:
		
		string nome;
		
		string nomeNick;
		
		string genero;
		
};

#endif
