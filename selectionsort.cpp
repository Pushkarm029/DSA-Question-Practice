#include<iostream>
using namespace std;

int func(int arr[],int n){
    for(int i=0; i<n; i ++){
        for(int j=i; j<n; j++){
            int ans = arr[i];
            
            if(ans>arr[j]){
                ans = arr[j];
            }
        }
        
    }
}