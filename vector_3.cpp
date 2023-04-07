#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> negs;
    
    for(int i=0; i<v.size(); i++)
    {   cin >> v[i];
        if(v[i] < 0)
            negs.push_back(v[i]);
    }
    
    
    auto it = v.begin();
    while (it != v.end())
    {
       
        if (*it < 0)
        {
            it = v.erase(it);
        }
        else {
            ++it;
        }
    }
    
    for(int i=0; i<negs.size(); i++)
        v.push_back(negs[i]);
            
    for(int i=0; i<v.size()-1;i++)
        cout << v[i] << ' ';
    cout << *v.rbegin();
       
    return 0;
}