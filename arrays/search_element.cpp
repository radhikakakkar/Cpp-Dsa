#include <iostream>

 using namespace std;

 int main(){

    int arr[3];
    int i;
    int ele;
    cout<<" Enter the array elements: ";
    for(i=0; i< 3; i++){
        cin >> arr[i];
        }
    cout << "Enter the element to be found in the array : ";
    cin >> ele;
    for(i=0; i< 10; i++){
        if(arr[i] == ele){
            cout<<"element found at position : "<< i+1;
        }
    }
    return 0;

}
