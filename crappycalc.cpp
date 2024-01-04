// Created in Dcoder in Oct 16 2021
// https://code.dcoder.tech/files/code/61189b1ca966bf0658e9f64c/my-first-working-calculator?section=all

#include <iostream>
#include <string>

int Pluss()
{
  int GuessA, GuessB;
  
  //calculator text
  std::cout << "Write here what do you want to\n";
  std::cout << "add\n";
  
  //stored input from user
  std::cin >> GuessA >> GuessB;
  
  //calculates
  int GuessProductA = GuessA + GuessB;
  
  //print results
  std::cout << GuessA << " + " << GuessB << " = " << GuessProductA << std::endl;
  
}

int Minus()
{
  int GuessC, GuessD;
  
  //calculator text
  std::cout << "Write here what do you want to\n";
  std::cout << "Subtract\n";
  
  //stored input from user
  std::cin >> GuessC >> GuessD;
  
  //calculates
  int GuessProductB = GuessC - GuessD;
  
  //print results
  std::cout << GuessC << " - " << GuessD << " = " << GuessProductB << std::endl;
}

int Multi()
{
  int GuessE, GuessF;
  
  //calculator text
  std::cout << "Write here what do you want to\n";
  std::cout << "multiply\n";
  
  //stored input from user
  std::cin >> GuessE >> GuessF;
  
  //calculates
  int GuessProductC = GuessE * GuessF;
  
  //print results
  std::cout << GuessE << " * " << GuessF << " = " << GuessProductC << std::endl;
}

int Diva()
{
  int GuessG, GuessH;
  
  //calculator text
  std::cout << "Write here what do you want to\n";
  std::cout << "divide\n";
  
  //stored input from user
  std::cin >> GuessG >> GuessH;
  
  //calculates
  int GuessProductC = GuessG / GuessH;
  
  //print results
  std::cout << GuessG << " / " << GuessH << " = " << GuessProductC << std::endl;
}

int main()
{
  
  int CodeSumA = 1;
  int CodeSumB = 2;
  int CodeSumC = 3;
  int CodeSumD = 4;
  
  int CodeA;
 
    //text from calculator
  std::cout << "Choose between 1-4\n";
  std::cout << "* 1 = Addition\n";
  std::cout << "* 2 = Subtraction\n";
  std::cout << "* 3 = Multiplication\n";
  std::cout << "* 4 = Division\n";
  
  //stored input from user
  std::cin >> CodeA;
  
  //sending him to the input he inserted
  if (CodeA == CodeSumA)
  {
    Pluss();
  }
  else
  {
    if (CodeA == CodeSumB)
    {
      Minus();
    }
    else
    {
      if (CodeA == CodeSumC)
      {
        Multi();
      }
      else
      {
        if ( CodeA == CodeSumD)
        {
          Diva();
        }
        else
        {
          return 0;
        }
      }
    }
  }
  
 
}