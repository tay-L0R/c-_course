#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    map<int, int> map;
    int n;
    cin >> n;
    set<int> Myset;
    
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        map[temp]++;
    }
    
    for (auto it = map.begin(); it != map.end(); ++it)
        if (it-> second > 2)
            Myset.insert(it->first);
    
    if (Myset.empty()) {
        cout << "NO";
        return 0;
    }
            
    set<int>::reverse_iterator it=Myset.rbegin();
    int max= *it;
    cout << max;
    
    return 0;
     
   
}