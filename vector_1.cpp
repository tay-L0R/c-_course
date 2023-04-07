#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    
    for (int i=0; i < k; i++){
        int remPos;
        cin >> remPos;
        int remIndex = remPos - 1;
        v.erase(v.begin() + remIndex);
    }
    
    for (int i = 0; i < v.size() - 1; i++)
        cout << v[i] << ' ';
    cout << *v.rbegin();
    
    
    return 0;
}