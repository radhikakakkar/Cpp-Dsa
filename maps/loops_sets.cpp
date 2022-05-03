#include <iostream>
// #include <bits/stdc++.h>
#include <set>
using namespace std;

void print(set<string> &s)
{
    //range based loop plus auto keyword
    for (auto it : s)
    {
        cout<<it<<endl;
        
    }
    
    //auto keyword
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<endl;
    }
    
    //range based loop
    for (string it : s)
    {
        cout<<it<<endl;
        
    }
    
}
int main()
{
    set<string> set;
    set.insert("abc");
    set.insert("efg");
    set.insert("hij");
    
    print(set);
}