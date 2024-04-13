#include <iostream>
using namespace std;

int ricorsiva(int n, int m, int ris){
    if(n<=m){
        ris+=n;
        return ricorsiva(n++, m, ris);
    }
    else   
        return ris;
}

int main()
{
    int n, m, ris=0;
    cout<<"Dammi due numeri e io sommerò tutti i valori in mezzo e ti darò il risultato"<<endl;
    cout<<"Dammi il primo numero: ";
    cin>>n;
    cout<<"Dammi il secondo numero: ";
    cin>>m;
    cout<<ricorsiva(n, m, ris);
    return 0;
}
