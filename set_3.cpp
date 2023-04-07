#include <iostream>
#include <set>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    set<int> s;
    int m[a][b];
    
    for(int i= 0; i<a; i++)
        for(int j=0; j<b; j++)
            cin >> m[i][j];

    for(int i=0; i<b; i++)
    {
        int temp = m[0][i];
        s.insert(temp);
    }
    
    for(int i=0; i<b; i++)
    {   
        int temp = m[a-1][i];
        s.insert(temp);
    }
    
    for(int i=1;i<a-1;i++)
    {   
        int temp = m[i][0];
        s.insert(temp);
    }
    
    for(int i=1;i<a-1;i++)
    {   
        int temp = m[i][b-1];
        s.insert(temp);
    }
     
    cout << s.size();
    
    return 0;
}