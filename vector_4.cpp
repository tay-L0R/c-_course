#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    vector<int> v1(a);
    vector<int> v2(b);
    
    for(int i=0; i<v1.size(); i++)
       cin >> v1[i];
    
    
    for(int i=0; i<v2.size(); i++)
       cin >> v2[i];
    
    
    bool d = true;
    int count = 0;  
    int dumb =  0;
    
    while(d)
    {
        if(v1[0]>v2[0])
            {
                v1.push_back(v2[0]);
                v1.push_back(v1[0]);
                v1.erase(v1.begin());
                v2.erase(v2.begin());
            }
        
        else
            {
                v2.push_back(v1[0]);
                v2.push_back(v2[0]);
                v1.erase(v1.begin());
                v2.erase(v2.begin());
            }
        
        if(v1.empty()==true or v2.empty()==true)
            d = false;
        
        else if (v1.size() == a and v2.size() == b ) 
            dumb+=1;
            if (dumb == 3)
                d = false;

            
        count += 1;
    }
    
    if(v1.empty()==true)
        cout << count << " Jhon";
    else if(v2.empty()==true)
        cout << count << " Peter";
        
    else if (dumb == 3)         
        cout<< "Both losers";
        
    return 0;
}