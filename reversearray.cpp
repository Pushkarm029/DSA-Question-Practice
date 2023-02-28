#include<iostream>
using namespace std;

int reverse(int arr[],int size){
    int start = 0;
    int end = size - 1;
    while (start<=end){
        swap(arr[start],arr[end]);
        start+=1;
        end--;
    }   
}

