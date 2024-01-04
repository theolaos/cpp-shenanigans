#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    for(int index = s.size() - 1; index >= 0; index--)
    {
        if(index <= s.size() - 2)
        {
            if(index % 2 == 0)
            {
                string w = s.substr(index, index + 2);
                string m = w.erase(2);
                cout << m;
            }
        }
    }
    return 0;
}