//develop a menu driven program demonstrating the following operations on a stack using array
//a) Push b) Pop c)isEmpty d) isFull c) Display d) peek

#include <iostream>
using namespace std;

const int MAX_SIZE= 10;

class Stack{
    private:
    int top;
    int arr[MAX_SIZE];

    public:
    Stack()
    {
        top = -1;
    }
    //push
    void push(int element){
     if(isFull()){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top] = element;
            cout<<element<<" pushed to stack"<<endl;
     }
    }

    //pop
    void pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            cout<<arr[top]<<" popped from stack"<<endl;
            top--;
        }
    }

    //isEmpty
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    //isFull
    bool isFull(){
        if(top == MAX_SIZE-1){
            return true;
        }
        else{
            return false;
        }
    }

    //display
    void display(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack elements are: ";
            for(int i=0; i<=top; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    //peek
    void peek(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Top element is: "<<arr[top]<<endl;
        }
    }


};

int main()
{
    Stack s;
    int choice, element;
    char ch;
    do{
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. Display"<<endl;
        cout<<"6. Peek"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter element to push: ";
                cin>>element;
                s.push(element);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                if(s.isEmpty()){
                    cout<<"Stack is empty"<<endl;
                }
                else{
                    cout<<"Stack is not empty"<<endl;
                }
                break;
            case 4:
                if(s.isFull()){
                    cout<<"Stack is full"<<endl;
                }
                else{
                    cout<<"Stack is not full"<<endl;
                }
                break;
            case 5:
                s.display();
                break;
            case 6:
                s.peek();
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
        cout<<"Do you want to continue? (y/n): ";
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');
    return 0;
}