#include <iostream>

using namespace std;

int queue[5], n=5, rear= -1, front= -1;

void insert(int val){

    if(rear == n){
        cout<<"overflow condition of queue";
    }
    else {
        
        queue[rear]=val;
        rear++;
        cout<<"the value inserted is : "<<val<<endl;

    }
}
// if(rear==-1||front==-1){

void del(){
    if(rear == -1 && front == -1){
        cout<<"queue is empty"<<endl;
    }
    else{
        int ele = queue[front];
        front++;
        cout<<"The deleted/dequeued element is: " <<ele<<endl;
        }

}

void display(){
     
    if(rear == -1 || front == -1){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout <<"elements in the queue are : ";
        for(int i=front; i<rear; i++){
            
        cout<<queue[i]<<" ";
        }

    }
    

}

 int main(){
        front++, rear ++;
        int ch, val;

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
                del();
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