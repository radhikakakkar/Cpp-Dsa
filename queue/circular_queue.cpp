#include <iostream>

using namespace std;
// #define N 5;

int cqueue[5];
int front = -1;
int rear = -1; 

void insert(int val){

    if(front == -1 && rear == -1){
        rear++;
        front++;
        cqueue[rear]=val;
    }
    else if( ((rear+1)% 5) == front){
        cout<<"the queue is full";
    }
    else{
        rear=(rear+1)%5;
        cqueue[rear] = val;

    }
    

}

void delet(){

    if(front==-1 && rear==-1){
        cout<<"queue is empty";

    }
    else if(front==rear){
        int del = cqueue[front];
        cout<<"the deleted element is:  "<< del<<endl;
        front=rear=-1;

    }
    else{
        int del = cqueue[front];
        cout<<"the deleted element is:  "<< del<<endl;
        front=(front+1)%5;
    }

}

void display(){

    int i = front;
    if(front == -1 && rear ==-1){
        cout<< "queue is empty" ;
    }
    else{
        cout<<"elements are : ";
        while (i!=rear){
            cout<<cqueue[i];
            i = (i+1)%5;
            }
        cout<<cqueue[rear]<<endl;
    }
}

int main(){
       
        int ch, val;
        cout<<"circular queue implementation"<<endl;
       do{
        cout<<"\n";
        cout<<"1. enqueue"<<endl;
        cout<<"2. dequeue"<<endl;
        cout<<"3. display the elements of the queue"<<endl;
        cout<<"4. Exit"<<endl;


        cout<<"Enter your choice"<<endl;
        cin>>ch;


        switch(ch){
            case 1:
                cout<<"Enter the value to be inserted: ";
                cin>>val;
                insert(val);
                break;
            case 2:
                delet();
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
