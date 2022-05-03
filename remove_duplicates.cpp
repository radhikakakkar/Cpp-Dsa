#include <iostream>
using namespace std;


string remove_dupes(string s)

{
    if(s.length() == 0){
        return ""; 
    }
    char og = s[0];
    string ans = remove_dupes(s.substr(1));

    if(og == ans[0]){
        return ans;
    }
    return og+ans;
}

int main(){
    cout<<remove_dupes("bbcgjj");
    return 0;

}