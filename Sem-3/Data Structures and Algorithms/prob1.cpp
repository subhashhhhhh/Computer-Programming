#include<iostream>
using namespace std;

int arr[25];
int size;
int pos;
int ele;

void createArray(){
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter" << size << "elements";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
}

void displayArray(){
    cout << "The array is: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

void insertElement(){
    cout << "Enter the position to insert the element: ";
    cin >> pos;

    cout << "Enter the element to insert: ";
    cin >> ele;

    for(int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
}

void deleteElement(){
    cout << "Enter the position to delete the element: ";
    cin >> pos;

    for(int i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
}

void linearSearch(){
    cout << "Enter the element to search: ";
    cin >> ele;

    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            cout << "Element found at position" << i+1;
            return;
        }
        else{
            cout << "Element not found";
        }
    }
}

int main(){
    int choice;
    do{
        cout << "-----MENU-----" <<endl;
        cout << "1. Create an array" << endl;
        cout << "2. Display the array" << endl;
        cout << "3. Insert an element" << endl;
        cout << "4. Delete an element" << endl;
        cout << "5. Linear search" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1: createArray();
            break;
            case 2: displayArray();
            break;
            case 3: insertElement();
            break;
            case 4: deleteElement();
            break;
            case 5: linearSearch();
            break:
            case 6: exit(0);
            break:
            default: cout << "Invalid choice";
        }
    } while(choice!=6);
    return 0;
}