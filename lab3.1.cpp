#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

float* generateArray(int size)
{
    float *tablica=new float[size];
    for (int i=0;i<size;i++)
    {
        tablica[i]= rand() %99;
    }
    return tablica;
}
void sortArray(float *&tablica,int size)
{
    for (int i=0; i<size;i++)
    {
        for (int j=0;j<size-1;j++)
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
}

float averageValue(float *&tablica, int size)
{
    float srednia=0;
    for (int i=0;i<size;i++)
    {
        srednia+=tablica[i];
    }
    return srednia/size;
}

float minimumValue(float *&tablica)
{
   return tablica[0];
}
float maximumValue(float *&tablica,int size)
{
    return tablica[size-1];
}
void printArray(float *&tablica, int size)
{
    cout << "\n";
    for (int i=0;i<size;i++)
    {
        cout <<tablica[i] << " ";
    }
}

int main()
{
    cout << "Podaj rozmiar tablicy: ";
    int rozmiar;
    cin >> rozmiar;
    srand (time(NULL));
    float *tablica;
    tablica=generateArray(rozmiar);
    printArray(tablica,rozmiar);
    sortArray(tablica,rozmiar);
    printArray(tablica,rozmiar);
    cout << "\n";
    float srednia=0;
    cout << "\n wartosc minimalna: " << minimumValue(tablica);
    cout << "\n wartosc maksymalna: " << maximumValue(tablica,rozmiar);
    cout << "\n wartosc srednia: " << averageValue(tablica,rozmiar);

    return 0;
}
