
#include <iostream>
#include <conio.h>
#include <cmath>

void getNearestPrime(int &number);

int main(){
    int num = 5;
    getNearestPrime(num);

    return 0;
}

void getNearestPrime(int &number)
{
    int i = number-1;
    int counter;
    int nearestPrime = 0;
    
    for(i;i>0;i--)
    {   
      std::cout<<i<<"\n";
      int iSqrt = sqrt(i);
      std::cout<<"sqrt of i: "<<iSqrt<<"\n";
    for(int j=1;j<=iSqrt;j++)
    {
      
    }
    }

    std::cout<<"The nearest prime to your number is: "<<nearestPrime;
}