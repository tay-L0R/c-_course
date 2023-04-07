#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, C1, C2;
    cin >> n >> C1 >> C2;
    set<int> s;
    
    for(int i = 0; i<n; i++)
    {
        int temp;
        cin >> temp;
        if (temp >=C1 && temp <C2)
            s.insert(temp);
            
    }
    
    cout<< s.size();
    
    return 0;
}