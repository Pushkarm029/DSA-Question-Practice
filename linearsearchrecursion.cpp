#include<iostream>
using namespace std;

int func(int *n,int size,int k){
    if(size==0){
        return 0;
    }
    if(n[0]==k){
        return 1;
    }
    int check = func(n+1,size-1,k);
}


int main(){
    int n[10]={2,3,4,5,1,7,8,9,23,12};
    int size = 10;
    int k = 1;
    int answer = func(n,size,k);
    cout<<answer<<endl;
}