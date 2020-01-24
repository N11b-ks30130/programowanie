#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <vector>
using namespace std;

class Array
{
public:
    int size;
    vector<float> tablica;
public :
    Array(int Size)
    {
        size=Size;
        generate();
    }
public :
    Array()
    {
        size=0;
    }
private:
    void generate()
    {
    for (int i=0;i<size;i++)
        {
        tablica.push_back(rand() %99);
        }
    }
public :
    float getIndex(int i)
    {
        return tablica[i];
    }
public :
    void getAverage()
    {
    float srednia=0;
    for (int i=0;i<size;i++)
    {
        srednia+=tablica[i];
    }
    cout << "Average: " << srednia/size << endl;
    }

public :
    void getMinimum()
    {
        cout<< "Min" <<tablica[0]<<endl;
    }

public :
    void getMaximum()
    {
        printf("\n Max");
        cout<< tablica[size-1]<<endl;
    }
public:
    float sort()
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

public :
    void print()
    {
    cout << "\n";
    for (int i=0;i<size;i++)
    {
        cout <<tablica[i] << " ";
    }
    }
};

class Saver
{
public:
    Array arr;
    Saver(Array input)
    {
        arr=input;
    }
public:
    save()
    {
    ofstream myfile;
    myfile.open("plik.txt");
    for (int i=0;i<arr.size;i++)
    {
        myfile << arr.tablica[i] << " ";
    }
    myfile.close();
    }
};
int main()
{
    srand(time(NULL));
    Array array1(10);
    array1.print();
    array1.sort();
    array1.print();
    array1.getMaximum();
    array1.getMinimum();
    array1.getAverage();
    Saver saver1(array1);
    saver1.save();
    return 0;
}
