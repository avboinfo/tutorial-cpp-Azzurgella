// Allegra Di Mattia 3CIN

#include <iostream>
#include "BattleShip.cpp"
using namespace std;
int main()
{
    cout << "Gioco di battaglia navale, buon divertimento" << endl;
    BattleShip gioco = BattleShip();
    gioco.play();
    cout << "GAME OVER";
    return 0;
}
