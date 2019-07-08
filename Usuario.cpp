#include "Usuario.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;
using namespace std;
using std::cout;
using std::cin;



Usuario::Usuario()
{
	this -> nomeNick = "\ndesconhecido";
	this -> genero = "\ndesconhecido";
	this -> nome = "\ndesonhecido";
}


Usuario::Usuario(const string &nomeNick, const string &genero, const string &nome)
	{
		this -> nomeNick = nomeNick;
		this -> genero = genero;
		this -> nome = nome;
	}

Usuario::Usuario(const Usuario &user)
{
	this -> nomeNick = user.nomeNick;
	this -> genero = user.genero;
	this -> nome = user.nome;

}


void Usuario::generoUsuario(const string &genero)
{
	cout << "Genero :"<< genero;
}

void Usuario::nomeNickJogo(const string & nomeNick)
{
	cout << "Nome no jogo:"<< nomeNick;
}

void Usuario::nomeUsuario(const string & nome)
{
	cout << "\nNome :"<< nome;
}

const Usuario Usuario:: operator = (const Usuario &user) 
{
	
	this -> nome = user.nome;
	this -> nomeNick = user.nomeNick;
	this -> genero = user.genero;
		
	return *this;			
}

ostream &operator<<( ostream &out, const Usuario &user )
{
	
	cout <<  user.nome;
	cout <<  user.nomeNick;
	cout <<  user.genero;
}

bool Usuario::operator == (const Usuario &user)
{
	if (this -> nomeNick == user.nomeNick )
	{
		return true;
	}else 
		if (this -> nome == user.nome )
	{
		return true;
	}else 
		if (this -> genero == user.genero )
		return true;
}

int Usuario::operator !=(Usuario &user)
{
	if (this -> nome != user.nome)
	{
		return 0;
	}
		if (this -> nome != user.nome )
	{
		return true;
	}else 
		if (this -> genero != user.genero )
		return true;
}

