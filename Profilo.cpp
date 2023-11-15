#include "Profilo.h"


void Profilo::setID(string newID)
{
	statusProfilo = newID;
}

void Profilo::setData(string newData)
{
	dataCreazione = newData;
}

string Profilo::getStatus()
{
	return statusProfilo;
}

string Profilo::getData()
{
	return dataCreazione;

}

string Profilo::getNomeUtente() {
	return utente.getNome();

}

string Profilo::getCognomeUtente() {
	return utente.getCognome();
}

string Profilo::getIDUtente() {

	return utente.getID();
}

string Profilo::getMailUtente() {

	return utente.getMail();
}


string Profilo::getPasswordUtente() {

	return utente.getPassword();
}

void Profilo::setNomeUtente(string newNome)
{
	utente.setNome(newNome);
}

void Profilo::setCognomeUtente(string newCognome)
{
	utente.setCognome(newCognome);
}

void Profilo::setIDUtente(string newID)
{
	utente.setID(newID);
}

void Profilo::setMailUtente(string newMail)

{
	utente.setMail(newMail);
}

void Profilo::setPasswordUtente(string newPassword)
{
	utente.setPassword(newPassword);
}
