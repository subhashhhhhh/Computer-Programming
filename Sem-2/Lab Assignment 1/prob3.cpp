#include<iostream>
using namespace std;

 //for loop
int main(){
 for (int i=0; i<10; i++){
    cout << "i = " << i << endl;
 }


//for loop without initialization
int j=0;
for(; j < 10; j++){
    cout << "j = " << j << endl;
}

//for loop without increment
int k = 0;
for(; k < 10;){
    cout << "k = " << k << endl;
}

//while loop
int l=0;
while(1<10){
    cout << "l = " << l << endl;
    l++;
}

//do-while loop
int m=0;
do{
    cout << "m = " << m << endl;
    m++;
}
while(m<10);
}
