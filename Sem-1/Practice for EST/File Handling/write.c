#include<stdio.h>
int main(){
    FILE* fptr;

    fptr = fopen("newFile.txt", "w");

    fputs("I am Subhash\n", fptr);
    fputs("Iron man reference lol", fptr);

    fclose(fptr);
    return 0;
}