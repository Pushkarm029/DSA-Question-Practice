#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int i=0;
    int value=0;
    while(i<n){
        value = value^arr[i];
        i=i+1;
    }
    return value;
}

int main(){
    int arr[5]={7,10,5,7,5};
    cout<<unique(arr,5)<<endl;
    return 0;
}