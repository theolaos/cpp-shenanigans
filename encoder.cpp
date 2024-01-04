// Created in Dcoder in Mar 5 2022
// https://code.dcoder.tech/files/code/62233d70595b8e06295403bb/decryptcpp?section=all

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int decrypt(string s){
    string s1,alph;
    int o,p;
    s1 = s;
    alph = " abcdefghijklmnopqrctuvwxyz";
    
    for(int i = 0; i <= s1.size(); i++){
        if(s1[i] == ' '){
            if(i < 3){ // if statement that will detect if the integer i is at less than 3
                if(i == 1){
                    stringstream ss;
                    ss << s1[0];
                    ss >> o;
                    cout << alph[o]; 
                }
                else{
                    stringstream ss;
                    ss << s1.substr(0,2);
                    ss >> o;
                    cout << alph[o];
                }
            }
            else{ // if its not it will start its own calculations for the other numbers
                if(s1[i-2] == ' '){
                    stringstream oo;
                    oo << s1[i-1];
                    oo >> p;
                    cout << alph[p];
                }
                else{
                    if(s1[i-3] == ' '){
                        stringstream kk;
                        kk << s1.substr(i-2,i);
                        kk >> p;
                        cout << alph[p];
                    }
                }
            }
        }    
    }
    return 0;
}

int encrypt(string ip){
    string s = " abcdefghijklmnopqrstuvwxyz";
    
    for(int i = 0; i <= ip.size(); i++)
        for(int j = 0; j < 24; j++)
            if(ip[i] == s[j])
                cout << j << " ";
    return 0;
}

int main(){
    cout << "do you want to encrypt(1) or decrypt(2)?\n";
    int in;
    string aaa;
    cin >> in;
    if(in == 2){
        cout << "what do you want me to decrypt?\n";
        cin.ignore();
        getline(cin, aaa);
        decrypt(aaa);
    }
    else{
        cout << "what do you want me to encrypt?\n";
        cin.ignore();
        getline(cin, aaa);
        encrypt(aaa);
    }
    
    return 0;
}