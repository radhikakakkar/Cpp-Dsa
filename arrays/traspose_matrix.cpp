#include <iostream>

using namespace std;
#define N 4

int transpose(int arr[][N]){
  
    int new_arr[N][N];

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
           
            new_arr[i][j] = arr[j][i];
        }
    }
    // return new_arr[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
           
           cout<< new_arr[i][j] << " ";
        }
        cout<<"\n";
    }
    return 0;
}

int main(){
    // int N;
    int ans[N][N];

    // cout<<"Enter the value of n: ";
    // cin>> n;
    cout <<"Enter the elements of the array: ";
    for(int i=0; i<N; i++){
        for(int j=0;j<N;j++){
            cin>>ans[i][j];
        }
    }
    cout << "The resultant matrix after transposing is: " ;
        
         transpose(ans);
        
        return 0;
}
    