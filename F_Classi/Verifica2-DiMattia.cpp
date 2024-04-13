// Allegra Di Mattia 3CIN 16/03/24 - Verifica 2

#include <iostream>
using namespace std;

class Orario
{
public:
    int ore, minuti, secondi;
    Orario()
    {
        ore = 20; // questi sono i dati predefiniti
        minuti = 23;
        secondi = 39;
    }
    Orario(int h, int m, int s)
    {
        ore = h;
        minuti = m;
        secondi = s;
    }

    void orologio()
    {
        cout << "Buongiorno, sono un orologio e sono le: " << ore << ":" << minuti << ":" << secondi << endl; // se io non metto un colore e un raggio definito metterà quello predefinito
    }

    int mezzanotte()
    {
        ore *= 3600;
        minuti *= 60;
        secondi = secondi + ore + minuti;

        cout << "Dalla mezzanotte sono passati " << secondi << " secondi" << endl;

        return secondi;
    }
};

int main(int argc, char const *argv[])
{
    Orario x; // userà i dati predefiniti
    Orario y(11, 38, 59);

    x.orologio();
    y.orologio();

    int minuendo = x.mezzanotte();
    int sottraendo = y.mezzanotte();

    int differenza = minuendo - sottraendo;

    cout << "La differenza, in secondi, tra i due orari è: " << differenza << endl;

    return 0;
}
