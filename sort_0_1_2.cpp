#include<iostream>
using namespace std;


/* Approach   -----    1*/
int fuctsort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int k=0 ; k<size ; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr1[6]={1,2,2,0,1,2};
    int arr2[8]={1,2,2,0,1,2,0,0};
    int arr3[9]={1,2,2,0,1,2,0,2,1};
    int arr4[3]={1,0,2};
    int size1 = 6;
    int size2 = 8;
    int size3 = 9;
    int size4 = 3;
    return fuctsort(arr1,size1),fuctsort(arr2,size2),fuctsort(arr3,size3),fuctsort(arr4,size4) ;
}
/* Approach   -----    2     ------    Optimized*/
