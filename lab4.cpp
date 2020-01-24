#include <iostream>

void Fibonacci(int n)
{
    double sum;
     double temp1=1;
    double temp2=1;
    for (int i=0;i<n;i++)
    {
        if (i==0)
        {
            std::cout<<0<<" ";
            continue;
        }
        if (i==1||i==2)
        {
           std::cout<< 1<< " ";
           continue;
        }
             sum=temp1+temp2;
              std::cout<< sum<< " ";
            temp1=temp2;
            temp2=sum;

    }
}

int rekFibonacci(int n)
{

    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    else return rekFibonacci(n-1)+rekFibonacci(n-2);
}
int main()
{
    std::cout<<"Wybierz rekurencyjne czy iteracyjne\n1.iteracyjne\n2.rekurencyjne";
    int mode=0;
    std::cin >> mode;
    int quantity;
    std::cout<<"Enter the number\n";
   std::cin >>quantity;
    if(mode==1)
        Fibonacci(quantity);
    if(mode==2)
    {
    std::cout<<"\n";
    for (int i=0;i<quantity;i++)
    {
           std::cout << rekFibonacci(i) <<" ";
    }
    }
    return 0;
}
