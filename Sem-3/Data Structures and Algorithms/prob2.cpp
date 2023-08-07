#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int size){
    if (size <= 1){
        return size;
    }

    int newSize = 1;
    for (int i=1;i<size;i++){
        bool isDuplicate = false;
        for (int j=0;j<newSize;j++){
            if (arr[i]==arr[j]){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            arr[newSize] = arr[i];
            newSize++;
        }

    }

    return newSize;
}

int main(){
    int arr[25];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " elements" << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    int newSize = removeDuplicates(arr, size);

    cout << "The array after removing duplicates is: ";
    for(int i=0;i<newSize;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}