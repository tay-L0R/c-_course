#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int num1, num2, num, sum; 
    cin >> num1 >> num2; 

    vector<int> v(num1); 
    vector<int> sumsum;

    for (int i = 0; i < num1; i++) 
        cin >> v[i];

  
    for (int i = 0; i < num2; i++)
    {
        string com; 
        cin >> com; 

        if (com == "sum") 
        {
            sum = 0;
            cin >> num; 

            
            for (int i = 0; i < num; i++) 
                sum += v[i];
            
            
            cout << sum << '\n'; 
        }
        
        else if (com == "pap") 
        {
            cin >> num; 
            v.insert(v.begin() + num, num * 2);
        }

        else if (com == "del") 
        {
            cin >> num;
            v.erase(v.begin() + num - 1);
        }
    }
    return 0;
}