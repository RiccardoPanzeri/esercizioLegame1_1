#pragma once

#include <iostream>
#include <string>
using namespace std;
class Utente
{
private:
	string nome;
	string cognome;
	string idUtente;
	string mail;
	string password;


public:
	Utente(string newNome, string newCognome, string newID, string newMail, string newPassword) :nome(newNome), cognome(newCognome), idUtente(newID), mail(newMail), password(newPassword) {};
	void setNome(string newNome);
	void setCognome(string newCognome);
	void setID(string newID);
	void setMail(string newMail);
	void setPassword(string newPassword);
	string getNome();
	string getCognome();
	string getID();
	string getMail();
	string getPassword();
};

