// Allegra Di Mattia 3CIN

#include <iostream>
#include "BattleField.cpp"
using namespace std;

class BattleShip
{
private:
    BattleField mappa;
    BattleField campo;

public:
    BattleShip()
    {
        mappa = BattleField(VOID);
        campo = BattleField(VOID);
        srand(time(NULL));
        campo.placeHorizontalShip(3);
        campo.placeVerticalShip(4);
        campo.placeVerticalShip(2);
        campo.placeHorizontalShip(5);
    }

    bool gameOver(){
        for (int i=0; i<DIM; i++){
            for (int j=0; j<DIM; j++){
                if (mappa.get(i, j)=='X') return true;
                else return false;
            }
        }
    }

    void play()
    {
        while (!gameOver()){
            mappa.stampa();
            if (!playHand()) break;
        }
        cout<<"FINE GIOCO!"<<endl<<"Ecco dov'erano le barche nemiche"<<endl;
        campo.stampa();
    }

    bool playHand(){
        cout<<"inserisci le cordinate di dove vuoi lanciare la bomba tra 1 e "<<DIM<<endl;
        cout<<"Premi 0 per terminare il gioco"<<endl;
        int x, y;
        cin>>x; if (x<=0 || x>DIM) return false; else x--;
        cin>>y; if (y<=0 || y>DIM) return false; else y--;
        if (campo.get(x, y) == SHIP)
            {
                mappa.put(x, y, HIT);
                campo.put(x, y, HIT);
            }
        else mappa.put(x, y, MISS);
        return true;
    }



};
