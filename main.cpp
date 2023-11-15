#include "Profilo.h"
#include "Utente.h"


int main()
{
    //istanzio un oggetto di classe Utente:
    Utente tizio("Tizio", "Caio", "xxyyzz", "mailfittizia@chissenefrega.com", "password1234");
    //istanzio un oggetto di classe Profilo: è da notare come, essendo legata 1:1 ad un unico utente, il costruttore della classe profilo richiede un oggetto Utente per poter essere richiamato;
    Profilo profiloTizio(tizio, "Attivo", "12/12/22");

    //ora, utilizzo i metodi setter e getter della classe profilo, ch richiameranno i setter/getter dell'utente associato:
    cout << endl << "Nome utente: " << profiloTizio.getNomeUtente() << " " << profiloTizio.getCognomeUtente() << endl;
    profiloTizio.setCognomeUtente("Sempronio");
    cout << endl << "Cognome utente aggiornato. Nuovo nome utente: " << profiloTizio.getNomeUtente() << " " << profiloTizio.getCognomeUtente() << endl;
}

