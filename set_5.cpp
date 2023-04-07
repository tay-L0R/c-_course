#include <iostream>
#include <string>
#include <cctype>
#include <set>

using namespace std;

int main()
{
    string n;
    cin >> n;
    set<int> s;
    int count = 0;

    
    for(int i=0; i<n.size(); i++)
    {
        if(isdigit(n[i]))
            s.insert(n[i]);
        else
            count += 1;
    }
    
    
    
    if(count<=2)
        if(s.size()<=8 and n.size()-s.size()<=2)
            cout << "YES";
        else
            cout<< "NO";
    else if(count == 0 and n.size()-s.size()<=2 and s.size()<=8)
        cout<< "YES";
    else
        cout<< "NO";
    
    return 0;
}