#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main()
{
  int i, rnum, amount, first, last;
    cout<<"Enter the Interval: ";
    cin>>first>>last;
    cout<<"How many Random Numbers to Generate ? ";
    cin>>amount;
    cout<<"\nList of "<<amount<<" Random Numbers Between "<<first<<" and "<<last;
    srand(time(0));
    for(i=0; i<amount; i++)
    {
        rnum = rand()%(last+1-first)+first;
        cout<<endl<<rnum;
    }
    cout<<endl;
    return 0;
}