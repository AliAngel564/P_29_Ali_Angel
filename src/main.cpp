/*
Amerike University
Author: Ali Angel
Work #: 29
Date: 03/05/25
Description: This program will give the nearest prime number to a number given by the user using functions with referenced parameters
*/

#include <iostream>

void getPrimes(int &number);
void getNearestPrime(int &number,int &downPrime,int &upPrime);

int main(){

  int num;
  int opt;

  do
  {
  std::cout<<"Write the number we will search the nearest prime of: ";
  std::cin>>num;
  getPrimes(num);
  std::cout<<"\ndo you wish to continue with this program?\n\n0.-YES\t1.-NO\n\nOPTION: ";
  std::cin>>opt;
  system("cls");
  }while (opt != 1);

  return 0;
}

void getPrimes(int &number)
{
    int i = number-1;
    int x = number+1;
    int downPrime = 0;
    int upPrime = 0;
    int firstCounter = 0;
    int secondCounter = 0;
    
    for(i;i>2;i--)
    {   
      for(int j=2;j<number;j++)
      {
        if(i%j==0)
        {
         firstCounter++;
        }
      }
      if(firstCounter == 1)  
      {
        downPrime = i;
        break;
      }
      firstCounter = 0;
    }
    for(x;x>0;x++)
    {   
      for(int j=2;j<=x;j++)
      {
        if(x%j==0)
        {
         secondCounter++;
        }
      }
      if(secondCounter == 1)  
      {
       upPrime = x;
       break;
      }
    secondCounter = 0;
    }
    
    getNearestPrime(number,downPrime,upPrime);

}

void getNearestPrime(int &number,int &downPrime,int &upPrime)
{
  int downPCounter = downPrime;
  int upPCounter = upPrime;
  int firstCounter = 0;
  int secondCounter = 0;

  for(downPCounter;downPCounter<number;downPCounter++)
  {
    firstCounter++;
  }
  for(upPCounter;upPCounter>number;upPCounter--)
  {
    secondCounter++;
  }
  if(firstCounter == secondCounter)
  {
    std::cout<<"There's two prime numbers at the same distance from the given number.";
    std::cout<<"\nThe first prime number is: "<< downPrime << "\nThe second prime number is: "<<upPrime;
  }else if(firstCounter<secondCounter)
  {
    std::cout<<"The nearest prime number is: "<<downPrime;
  }else if(firstCounter>secondCounter)
  {
    std::cout<<"The nearest prime is: "<<upPrime;
  }
}