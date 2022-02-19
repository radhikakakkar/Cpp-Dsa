#include <iostream>

using namespace std;

    int stack[100], n= 100, top =-1;

    //push function
    void push(int val){

        if(top >= n-1){
            cout << "the stack is full"<<endl;

        }
        else{
            top++;
            stack[top] = val;
        }

    }
    void pop(){
        if(top <= -1){
            cout << "popping not availaable as stack is empty";
        }
        else{
            cout<<"the popped element is "<<stack[top] << endl;
            top--;
        }

    }
    void display(){
        if(top>=0){
            cout<<"stack is elements are: ";
            // for(int i=0; i<top; i++){
            //     cout<< stack[i]<<" ";

            // }
            for( int i=top; i>=0; i--){
                cout<< stack[i]<<" ";
            }
        }
        else{
            cout<<"the stack is empty";
        }
        
    }
    


    int main(){
        int ch, val;

       do{
        cout<<"\n";
        cout<<"1. push in stack"<<endl;
        cout<<"2. pop from stack"<<endl;
        cout<<"3. display the elements of the stack"<<endl;
        cout<<"4. Exit"<<endl;


        cout<<"Enter your choice"<<endl;
        cin>>ch;


        switch(ch){
            case 1:
                cout<<"Enter the value to be pushed: ";
                cin>>val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Exit" <<endl;
                break;
            default:
                cout<<"invalid choice"<<endl;

        }
    }
    while(ch!=4);
    return 0;

}