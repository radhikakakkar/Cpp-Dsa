#include <iostream>
#include <map>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        m[s]++; // this statement is adding the string to the map and simultaneously incrementing the int value it stores
    }
    for (auto &pr: m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}