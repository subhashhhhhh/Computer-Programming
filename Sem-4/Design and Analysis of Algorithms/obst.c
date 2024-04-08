#include <stdio.h>
#include <limits.h>

int sum(int freq[], int i, int j);
int optcost(int freq[], int i, int j){
    if(j<i)
    return 0;
    if(j == i)
    return freq[i];

    int fsum = sum(freq,i,j);
    int min = INT_MAX;
    for(int r = i; r<=j; ++r){
        int cost = optcost(freq,i,r-1)+optcost(freq,r+1,j);
        if(cost<min)
        min = cost;
    }
    return min + fsum;
}

int optimalsearchtree(int keys[], int freq[], int n){
    return optcost(freq, 0, n-1);
}

int sum(int freq[], int i, int j){
    int s=0;
    for(int k=i; k<=j; k++)
    s += freq[k];
    return s;
}

int main(){
    int keys[] = {10,12,20};
    int freq[] = {34, 8, 50};
    int n = sizeof(keys)/ sizeof(keys[0]);
    printf("Cost of Optimal BST is %d ", optimalsearchtree(keys, freq, n));
    return 0;
}