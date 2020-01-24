#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout << "Podaj liczba a\n";
    cin >> a;
    cin >> b;
    cin >> c;
    float tablica[3];
    tablica[0]=a;
    tablica[1]=b;
    tablica[2]=c;

    for (int i=0; i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            float temp;
            if (tablica[j]>tablica[j+1])
            {
                temp=tablica[j+1];
                tablica[j+1]=tablica[j];
                tablica[j]=temp;
            }
        }
    }
    cout << tablica[0] << " " << tablica[1] <<" " << tablica[2];
    cout << "\nsuma to " << tablica[0]+tablica[1]+tablica[2];
    cout << "\nnajnizsza wartosc to" << tablica[0];
    cout << "\n najwyzsza wartosc to" << tablica[2];
    return 0;
}
