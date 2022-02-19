#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

int main(){
    
    // write your code here
    
    int n;//enemies
    int s;//ninja position
    // int i,j,k,m;
    int pos[n];
    int diff[n];

    cin>>n>>s;
    
    
    for(int i=0; i<n ; i++){
        cin >> pos[i];
        
    }
    
    for(int j=0; j<n; j++){
        
        diff[j] = pos[j]-s;
       
    }
	
     for(int k=0; k<n; k++){

        if(diff[k] < 0){
            diff[k] = -diff[k];
            // diff[k] *= -1;
        }
    }
         
    int small = diff[0];
    
    for(int m=0; m<n ; m++){
        
        if(diff[m] < small){
            // int temp = diff[m];
            small = diff[m];
            // diff[m]=small;

        }
        
    }
    
    if(small==0){
        small=1;
    }
    
    
    cout<<small;
    
    return 0;
}