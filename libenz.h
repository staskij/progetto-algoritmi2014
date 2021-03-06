//contiene le due funzioni fornite dalla libreria degli enzimi: enzima, energia_enzima
#ifndef LIBENZ_H
#define LIBENZ_H
//istanza: 
//	nome_enzima: stringa contenente il nome dell'enzima
//	frammento_src: stringa contenente il frammento su cui deve agire l'enzima
//ritorna una stringa contenente il risultato dell'applicazione dell'enzima sul frammento
//funzione richiesta
char *enzima(char *nome_enzima, char *frammento_src);

//istanza:
//	nome_enzima: stringa contenente il nome dell'enzima
//ritorna un intero rappresentante il valore in UEA dell'energia richiesta dall'enzima
//funzione richiesta
int energia_enzima(char *nome_enzima);

#endif