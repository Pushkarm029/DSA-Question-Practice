#include<iostream>
using namespace std;

int func1(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid+1]>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid=start+(end-start)/2;
    }
    return mid;
}

int main(){
    int arr2[10]={0,1,1,1,1,2,3,2,2,1};
    int arr3[4]={0,1,2,3};
    int v1 = func1(arr2,10);
    int v2 = func1(arr3,4);
    cout<<v1<<" "<<v2<<endl;
    
}
