#include <iostream>
using namespace std;

int inputprocecing()
{
    int i,a,b;
    string spechar;

    //getting input from user
    cin >> i;
    cin >> spechar;
    cin >> a;
//     cout << spechar;     //<-- debug line

    //check what spcial char is the spechar
    if(spechar == "+"){
        b = i + a;
    }

    if(spechar == "-"){
        b = i - a;
    }

    if(spechar == "*"){
        b = i * a;
    }

    if(spechar == "/"){
        b = i / a;
    }

    return b;
}

void startupmessege(){
    cout << "the calculator works like this:\n";
    cout << "2 + 2 \n";
    cout << " /\\/\\ \n";
    cout << " |  |  \n";
    cout << "between the numbers and the \nspecial character you should put \"SPACE\"  \n";
}

int main(){
    //shows an important messege
    startupmessege();

    //a while loop
    while(true){
        cout << "\ncalculation:\n-> ";
        int c = inputprocecing(); 
        cout << c;

        //asking user if he wants to continue
        cout << "\ndo you want to continue:\n";
        cout << "(1=yes, 0=no) -> ";
        int anss;
        cin >> anss;
        if(anss == 0){
            break;
        }
    }
    return 0;
}