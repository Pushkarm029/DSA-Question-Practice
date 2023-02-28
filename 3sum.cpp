#include<iostream>
using namespace std;

int func3sum(int arr[], int size,int K){
    for(int i=0;i<size;i++){
        for(int j = i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==K){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    break;
                }
            }
        }
    }
}

int main(){
    int arr[4]={2,3,4,5};
    int size = 4;
    int K;
    cout<<"enter the value of Triplet Sum  = "<<endl;
    cin>>K;
    return func3sum(arr,size,K);
}