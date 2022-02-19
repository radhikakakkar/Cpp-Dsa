#include<iostream>
#include<math.h>
#include<stack>
using namespace std;


int postfix_eval(string s){

    stack<int> st;

    for(int i= 0; i <= s.length()-1; i++){
           

        if(s[i] >= '0' && s[i] <= '9'){
            //  cout<<"if"<<endl;
            st.push(s[i]-'0');
        }
        else{
            // cout<<"else"<<endl;
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            

            switch(s[i]){
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(pow(op1,op2));
                break;

            }

        }
    }
    return st.top();

}
int main(){
    // string s ='-+7*45+20';
    cout<<postfix_eval("46+2/5*7+")<<endl;

    return 0;
}