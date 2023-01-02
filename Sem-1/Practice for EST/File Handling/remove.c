#include<stdio.h>
int main(){

    int del = remove("newFile.txt");
    if (!del){
        printf("File deleted successfully");
    }
    else {
        printf("File deleted unsuccessfully");
    }
    return 0;
}