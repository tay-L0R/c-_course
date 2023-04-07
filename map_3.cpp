#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<char, int> map;
    string n;
    cin >> n;
    
    for(int i = 0; i < n.size(); i++)
        map[n[i]]++;
        
    int count = 0;    
    for (auto it = map.begin(); it != map.end(); ++it)
        if (it-> second > 2)
            count += 1;
    
    cout << count;
}