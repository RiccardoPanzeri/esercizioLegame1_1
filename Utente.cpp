#include "Utente.h"

void Utente::setNome(string newNome) {
	nome = newNome;
}

void Utente::setCognome(string newCognome) {

	cognome = newCognome;
}

void Utente::setID(string newID) {

	idUtente = newID;
}


string Utente::getNome() {

	return nome;
}

string Utente::getCognome() {

	return cognome;
}


string Utente::getID() {
	
	return idUtente;
}

void Utente::setMail(string newMail) {
	mail = newMail;

}

void Utente::setPassword(string newPassword) {

	password = newPassword;
}

string Utente::getMail(){

	return mail;
}


string Utente::getPassword() {


	return password;
}

