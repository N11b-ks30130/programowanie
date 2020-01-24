#include <iostream>
using namespace std;
int main()
{
    cout << "Kalkulator \n 1. Dodawanie \n 2. odejmowanie \n 3. mnozenie \n 4. dzielenie \n 0. wyjdz";
    cout << "\nwybor: ";
    int mode;
    cin >> mode;
    float a,b;
    cout << "\nwprowadz a:";

    cin >> a;
    cout << "\nwprowadz b:";
    cin >> b;
    cout << "\nWynik =";
    switch(mode)
    {
    case 1:
        cout << a+b;
        break;
    case 2:
        cout << a-b;
        break;
    case 3:
        cout << a*b;
        break;
    case 4:
        if (b==0)
        {
            cout <<"\n dzielenie przez 0 niedozwolone";
            return 0;
        }
        cout << a/b;
        break;
    case 0:
        return 0;
    default:
        return 0;


    }
    return 0;
}
