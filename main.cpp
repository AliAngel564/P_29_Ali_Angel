
#include <iostream>

void getPrimes(int &number);
void getNearestPrime(int &number,int &downPrime,int &upPrime);

int main(){
    int num = 65;
    getPrimes(num);

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
  int downPCounter = 0;
  int upPCounter = 0;
  for(downPrime;downPrime<number;downPrime++)
  {
    std::cout<<"Downprime: "<<downPrime<<"\n";
    downPCounter++;
  }
  std::cout<<"donwPCounter: "<<downPCounter;
  for(upPrime;upPrime>number;upPrime--)
  {
    std::cout<<"upPrime: "<<upPrime<<"\n";
    upPCounter++;
  }
  std::cout<<"upPCounter: "<<upPCounter;
  if(upPCounter == downPCounter)
  {
    std::cout<<"There's two prime numbers at the same distance from the given number.";
    std::cout<<"The first prime number is: "<< downPrime << "\nThe second prime number is: "<<upPrime;
  }else if(downPCounter<upPCounter)
  {
    std::cout<<"The nearest prime number is: "<<downPrime;
  }else if(downPCounter>upPCounter)
  {
    std::cout<<"The nearest prime is: "<<upPrime;
  }
}