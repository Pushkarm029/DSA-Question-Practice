#include<iostream>
using namespace std;

int func1(int arr[], int n){
    int i=0;
    while(i<n){
        int sum1 = 0;
        int sum2 = 0;
        int j=i-1;
        while(j!=0){
            sum1 = sum1 + arr[j];
            j--;
        }
        int k=n-i;
        while(k<n){
            sum2 = sum2 + arr[k];
            k++;
        }
        if(sum1==sum2){
            return i;
        }
        else{
            i++;
        }

    }
    return -1;
}

int main(){
    int arr2[10]={0,1,1,1,1,2,3,2,2,1};
    int arr3[4]={0,1,2,3};
    int v1 = func1(arr2,10);
    int v2 = func1(arr3,4);
    cout<<v1<<" "<<v2<<endl;
    
}