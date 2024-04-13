#include <iostream>
using namespace std;

class Matrice
{
private:
    int m[10][10];

public:
    Matrice(int n)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                m[i][j] = n;
            }
        }
    }

    void stampa()
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << m[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    int num;
    cout<<"Con quale numero vuoi riempire la matrice?"<<endl;
    cin>>num;
    Matrice m1 = Matrice(num);
    m1.stampa();
    return 0;
}
