#include<iostream>
using namespace std;

int func1(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = 0;
    while(start<=end){
        if(arr[mid]==k){
            ans =  mid;
            start = mid+1;
            
        }
        if(k>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int func2(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = 0;
    while(start<=end){
        if(arr[mid]==k){
            ans = mid;
            end = mid-1;
            
        }
        if(k>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr2[10]={0,1,1,1,1,2,3,3,3,4};
    int arr3[4]={0,1,2,2};
    int v1 = func1(arr2,10,1);
    int v2 = func2(arr2,10,1);
    int v5=v1-v2-1;
    cout<<v5<<endl;
    int v3 = func1(arr3,4,2);
    int v4 = func2(arr3,4,2);
    int v6 = v3-v4-1;
    cout<<v6<<endl;
    
}