/*
** Bicicletta.cpp
*/

#include <iostream>
using namespace std;

class Bicicletta {
  public:
    int raggio; //attributi
    string colore;
    Bicicletta() { //costrutto
        raggio=10;  //questi sono i dati predefiniti
        colore="bianco";
    }
    Bicicletta(int r, string c) {
        raggio=r;
        colore=c;
    }

    void presentati() { //metodo
        cout << "Buongiorno, sono una bici di colore " << colore << " e con le ruote " << raggio << "!" << endl; //se io non metto un colore e un raggio definito metterà quello predefinito 
    }
};

int main()
{
    Bicicletta x;  //userà i dati predefiniti
    Bicicletta y(12, "rosso"); //userà 12 per il raggio e rosso per il colore

    x.presentati();
    y.presentati();

    return 0;
}
