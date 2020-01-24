#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
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

void saveArray(float *&tablica,int size)
{
    ofstream myfile;
    myfile.open("plik.txt");
    for (int i=0;i<size;i++)
    {
        myfile << tablica[i] << " ";
    }
    myfile.close();
}
float* loadArray(int &rozmiar)
{
    ifstream inFile;
    inFile.open("plik.txt");
    int size=0;
    double x;
    while (inFile >> x)
    {
        size++;
    }
    rozmiar=size;
    inFile.close();
    inFile.open("plik.txt");
    float *tablica=new float[size];
    for (int i=0;i<size;i++)
    {
        inFile>>tablica[i];
    }
    return tablica;
}


int main()
{
    float *tablica;
    int rozmiar;
    int mode;
    cout << "1. generate new array\n2.Load an array\n0. Exit";
    cin>>mode;
    if(mode==0)
    {
        return 0;
    }
    if(mode==1)
    {
    cout << "Podaj rozmiar tablicy: ";
    cin >> rozmiar;
    srand (time(NULL));
    tablica=generateArray(rozmiar);
    printArray(tablica,rozmiar);
    }
    if (mode==2)
        tablica=loadArray(rozmiar);
    sortArray(tablica,rozmiar);
    printArray(tablica,rozmiar);
    cout << "\n";
    float srednia=0;
    cout << "\n wartosc minimalna: " << minimumValue(tablica);
    cout << "\n wartosc maksymalna: " << maximumValue(tablica,rozmiar);
    cout << "\n wartosc srednia: " << averageValue(tablica,rozmiar);
    saveArray(tablica,rozmiar);
    return 0;
}
