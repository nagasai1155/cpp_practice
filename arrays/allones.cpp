#include<iostream>
using namespace std;

// int main(){
//     //write a program to print all ones in an array of size 5;
//     int arr[5];
//     for(int i=0;i<5;i++){
//         arr[i]=1;
//     }
//     cout<<"Array of all ones: ";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//write a program ,declare an array os size 10 and assign first indexs as 10 and last elements as 100.

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        if(i==0){
            arr[i]=10;
        }else if(i==9){
            arr[9]=100;
        }
    }

    for(int i=0;i<10;i++){
        if(i==0){
            cout<<arr[0]<<endl;
        }
        else if(i==9){
            cout<<arr[9];
        }
    }

}