#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    
    for(int i=0; i<a.size(); i++)
        a[i]=i+1;
    
    while (!a.empty()) {
        int card = a.front();
        a.erase(a.begin());
        b.insert(b.begin(),card);
            
        
        if (!a.empty()) {
            int first_card = b.front();
            b.erase(b.begin());
            b.push_back(first_card);
            int second_card = a.front();
            a.erase(a.begin());
            a.push_back(second_card);
        }
    }
    
    b.push_back(b.front());
    b.erase(b.begin());
    
    for (int i = 0; i < n-1; i++) 
        cout << b[i] << ",";
    cout << *b.rbegin();
        
    return 0;
}