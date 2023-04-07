#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    map<int, int> map;
    int temp;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        map[temp]++;
    }       
    
    int count=0;
    for (auto it = map.begin(); it != map.end(); ++it)
        if (it-> second > k)
            count+=1;
            
    if(count >= 1)
        cout<< "YES";
    else
        cout<< "NO";
            
    return 0;
    
}