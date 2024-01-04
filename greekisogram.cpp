// Created in Dcoder in Nov 12 2021
// https://code.dcoder.tech/files/code/61879b1729f6a005aa206ab9/test-of-isisogram

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    string w, m, n, p, j, d;

    for(int index = s.size(); index != 2; index--)
    {
        if(index < s.size() - 1)
        {
            if(index % 2 == 0)
            {
                m = s.substr(index ,index + 2);
                n = m.erase(2);
                
                for(int checker = index - 2; checker >= 0; checker--)
                {
                    if(checker % 2 == 0)
                    {
                        p = s.substr(checker, checker + 2);
                        j = p.erase(2);
                    }
                    
                    if(j == m)
                    {
                        cout << "no repeating letters" << j;
                        return 0;
                    }
                }
            }
        }
    }
            
    
    return 0;
}