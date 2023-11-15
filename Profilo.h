#pragma once
#include "Utente.h"


class Profilo
{
private:
	Utente utente; // variabile che mi permette di assegnare un ggetto di classe Utente all'oggetto di classe Profilo
	string statusProfilo;
	string dataCreazione;
public:
	//costruttore tramite il quale assegno un utente al profilo:
	Profilo(Utente newUtente, string newStatus, string newData) : utente(newUtente), statusProfilo(newStatus), dataCreazione(newData) {};//l'utente viene assegnato quando il costruttore viene richiamato;
	//metodi per ricavare e modificare le info del profilo stesso:
	void setID(string newID);
	void setData(string newData);
	string getID();
	string getData();
	
	//metodi per ricavare le info dell'utente associato al profilo.
	string getNomeUtente();
	string getCognomeUtente();
	string getIDUtente();
	string getMailUtente();
	string getPasswordUtente();
	
	//metodi per modificare le info dell'utente associato al profilo:
	void setNomeUtente(string newNome);
	void setCognomeUtente(string newCognome);
	void setIDUtente(string newID);
	void setMailUtente(string newMail);
	void setPasswordUtente(string newPassword);

};

