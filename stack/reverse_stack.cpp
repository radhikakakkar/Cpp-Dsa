#include <iostream>
using namespace std;
#include<stack>

void reverse_stack(string s){
    stack<string> st;

    for(int i=0; i<s.length(); i++){

        string word="";

        while(s[i]!=' ' && i<s.length()){
            word= word + s[i];
            i++;
        }
        st.push(word);
    }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
            cout<<endl;
}

int main (){

    string s = "hey, how are you";
    reverse_stack(s);
}