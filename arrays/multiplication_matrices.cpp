#include <iostream>

using namespace std;

int main(){

    int mat1[2][3];
    int mat2[3][4];
    int ans[2][4];
    int i, j;

    cout<<"Enter the elements for the first matrix: ";
    for(i=0; i<2;i++){
        for(j=0; j<3; j++){
            cin>> mat1[i][j];
        }
    }
    cout<<"Enter the elements for the second matrix: ";
    for(i=0; i<3;i++){
        for(j=0; j<4; j++){
            cin>> mat2[i][j];
        }
    }

    //multiplication 

    for(i=0; i<2; i++){
            for(j=0; j<4; j++){
               ans[i][j]= 0;
               for(int k=0; k<3; k++){
                   ans[i][j] += mat1[i][k] * mat2[k][j];
               }
            }
        }

    cout << "The resultant matrix after multiplication is: " ;
        for(i=0; i<2; i++){
            for(j=0;j<4; j++){
                cout << ans[i][j] <<" ";
            }
            cout <<"\n";
        }
        
}