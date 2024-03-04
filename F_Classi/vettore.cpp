// Allegra Di Mattia 3CIN 4/3/24 - classe Vettore

#include <iostream>
using namespace std;

class Vettore
{
protected:

    int dim, len, delta;
    int *v;

public:

    Vettore(int dim, int delta)
    {
        this->dim = dim;
        this->delta = 10;
        len = 0;
        v = new int[dim];
    }

    void add(int n)
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

    void print()
    {
        cout << "Contenuto del vettore: ";
        for (int i = 0; i < len; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    Vettore vett(10, 2);
    for (int i = 0; i < 100; i++)
        vett.add(i);

    vett.print();
    return 0;
}