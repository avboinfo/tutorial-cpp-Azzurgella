/*
** prova_struct.cpp
** Author: IAV 3CIN
** 28/02/2021
*/

#include <iostream>

using namespace std;

/* Il tipo di dato "struct" serve per memorizzare dati di tipi uguali o diversi
** nella stessa struttura, per poter accedere a ciascuno dei membri 
** attraverso il nome unico della struttura.
*/

struct persona
{
    string nome;
    int eta;
};


int main()
{
  struct persona gigi, gigietto;
  gigi.nome="Luigi";
  gigi.eta=16;
  gigietto.nome="Luigino";
  gigietto.eta=6;

  cout <<"Gigietto si chiama "<< gigietto.nome << " ed ha "<< gigietto.eta <<" anni"<< endl;
  cout <<"Gigi si chiama "<< gigi.nome << " ed ha "<< gigi.eta <<" anni"<< endl;
  return 0;
}
