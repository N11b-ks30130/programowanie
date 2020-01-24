#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    srand (time(NULL));
    float tablica[20];
    for (int i=0;i<20;i++)
    {
        tablica[i]= rand() %99;
        cout << tablica[i] << " ";
    }
     for (int i=0; i<20;i++)
    {
        for (int j=0;j<19;j++)
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
    cout << "\n";
    float srednia=0;
    for (int i=0;i<20;i++)
    {
        cout << tablica[i] << " ";
        srednia+=tablica[i];
    }
    cout << "\n wartosc minimalna: " << tablica[0];
    cout << "\n wartosc maksymalna: " << tablica[19];
    cout << "\n wartosc srednia: " << srednia/20;
    return 0;
}
