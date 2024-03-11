// Allegra Di Mattia 3CIN 11/3/24 - classe Vettore

#include <iostream>
using namespace std;

class Pila
{
private:

    int dim, len, delta;
    int *v;

public:

    Pila(int dim, int delta)
    {
        this->dim = dim;
        this->delta = 10;
        len = 0;
        v = new int[dim];
    }

    void push(int n)
    {
        if (len == dim)
        {
            int *nuovov = new int[dim + delta];
            for (int i = 0; i < dim; i++)
            {
                nuovov[i] = v[i];
            }
            dim += delta;
            delete v;
            v = nuovov;
        }
        v[len] = n;
        len++;
    }

    int pop(){
        if(len==0) {cout<<endl<<"Errore, la pila è: "; return 0;}
        return v[--len];
    }

    int getElement(int index){
        return v[index];
    }

    void setElement(int index, int newvalue){
        v[index]=newvalue;
    }

    void print()
    {
        cout <<endl<<"Contenuto della pila: ";
        for (int i = 0; i < len; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    Pila vett(10, 10);
    for (int i = 0; i < 100; i++) vett.push(i);

    cout<<"Ecco la tua posizione "<<vett.getElement(10)<<endl;
    vett.setElement(10, 333);

    vett.print();
    cout<<endl<<"Ecco la perte che verrà eliminata: ";
    for (int i = 0; i < 110; i++) cout<<vett.pop()<<" ";
    vett.print();

    return 0;
}