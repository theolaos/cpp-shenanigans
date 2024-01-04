// Created in Dcoder in Nov 12 2021
// https://code.dcoder.tech/files/code/6134fb2c0a6df6067e4e9442/heart?section=all

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string Heart;
  
  cout << "say the magic words \n";
  
  getline(cin, Heart);
  
  if(Heart == "i love you")
  {
    cout << "     __    __ \n";
    cout << "    /  \\__/  \\ \n";
    cout << "   /          \\ \n";
    cout << "   \\          / \n";
    cout << "    \\        / \n";
    cout << "     \\      / \n";
    cout << "      \\    / \n";
    cout << "       \\  / \n";
    cout << "        \\/ \n";
  }
  else 
  {
    cout << "try again";
  }
    
    
}