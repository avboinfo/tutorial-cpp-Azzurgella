// Allegra Di Mattia 3CIN 16/03/24 - Verifica 1

#include <iostream>
#include <time.h>
using namespace std;

const int DIM = 10;

void fill(int matrice[DIM][DIM])
{
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            matrice[i][j] = rand() % 100;
        }
    }
}

void print(int matrice[DIM][DIM])
{
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
}

int controlla_diagonales(int matrice[DIM][DIM], int numero)
{
    int numvolte = 0;
    for (int i = 0; i < DIM; i++)
    {
        int cella = matrice[i][i];
        if (cella == numero)
            numvolte++;
    }
    return numvolte;
}

int controlla(int matrice[DIM][DIM], int numero)
{
    int numvolte = 0;
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            int cella = matrice[i][j];
            if (cella == numero)
                numvolte++;
        }
    }
    return numvolte;
}

int main()
{
    srand(time(NULL));
    int matrice[DIM][DIM], numero;
    fill(matrice);
    print(matrice);

    cout << "Dimmi un numero e ti dirò quante volte è stato scritto: ";
    cin >> numero;
    numero = controlla_diagonales(matrice, numero);
    cout << "Il tuo numero nella diagonale viene ripetuto " << numero << " volte" << endl;

    numero = controlla(matrice, numero);
    cout << "Il tuo numero viene ripetuto " << numero << " volte" << endl;

    return 0;
}