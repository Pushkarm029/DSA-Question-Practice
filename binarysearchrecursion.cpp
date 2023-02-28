#include<iostream>
using namespace std;

int func(int *n, int s , int e , int k){
    if(e==0){
        return 0;
    }
    int mid = (s+e)/2;
    if(n[mid]==k){
        return 1;
    }
    else if(n[mid]>k){
        e=mid-1;
        func(n,s,e,k);
    }
    else{
        s=mid+1;
        func(n,s,e,k);
    }

}

int main(){
    int n[10]={1,2,3,4,5,6,7,8,9,11};
    int s = 0;
    int e = 9;
    int k = 3;
    int answer = func(n,s,e,k);
    cout<<answer<<endl;
}