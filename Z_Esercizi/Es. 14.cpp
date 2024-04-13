//Allegra Di Mattia 3CIN - Es. 14 compiti Pasqua

#include <iostream>
#include <string>
using namespace std;

int conta_carattere(const string &s, char c, int index)
{
    if (index >= s.length())
        return 0;

    int occorrenze = (s[index] == c) ? 1 : 0; //index serve come se fosse il for //dal ? in poi lui si chiede la roba nell'if e vero=1 falso=0
    return occorrenze + conta_carattere(s, c, index + 1);
}

int main()
{
    string s;
    char c;

    cout << "Dimmi una stringa e ti dirò quante volte viene ripetuto il carattere che mi dirai di cercare: ";
    getline(cin, s);

    cout << "Dimmi il carattere da cercare: ";
    cin >> c;

    cout << "Il carattere '" << c << "' appare " << conta_carattere(s, c, 0) << " volte nella stringa." << endl;

    return 0;
}