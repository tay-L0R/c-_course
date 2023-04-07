#include <iostream>
#include <map>

using namespace std;

int main() 
{
    map<int, int> marks;
    int mCount, qCount;
    cin >> mCount;
    for (int i = 0; i < mCount; i++)
    {
        int temp;
        cin >> temp;
        marks[temp]++;
    }
    cin>> qCount;
    for (int i = 0; i < qCount; i++)
    {
        int temp;
        cin >> temp;
        if ( i == 0)
            cout << marks[temp];
        else
           cout << " " << marks[temp];
    }
    return 0;
}