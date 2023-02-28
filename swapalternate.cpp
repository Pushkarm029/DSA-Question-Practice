#include<iostream>
using namespace std;

/* i/p -  {1,2,3,4,5}
o/p - {2,1,4,3,5}*/
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlter(int arr[],int size){
    int i= 0;
    while(i+1<size){
        swap(arr[i],arr[i+1]);
        i = i+2;
    }
}

int main(){
    int arr[5]={8,10,33,43,55};
    int arr2[6]={10,23,31,22,44,12};
    swapAlter(arr,5);
    swapAlter(arr2,6);
    printArray(arr,5);
    printArray(arr2,6);

    return 0;
}