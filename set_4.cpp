#include <iostream>
#include <set>
#include <string>
#include <typeinfo>
#include <cctype>

using namespace std;

int main()
{
    string n;
    cin >> n;
    set<char> s;
    
    for(int i=0; i<n.size(); i++)
    {
        if(isalpha(n[i]))
            s.insert(n[i]);
    }
    
    
     
    cout << n.size() - s.size();
    
    return 0;
}