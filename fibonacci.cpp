#include<iostream>
using namespace std;

int fibo(int n){
    int n1 = 0;
    int n2 = 1;
    int sum = 0;
    while(n!=0){
        sum = n1+n2;
        n1=n2;
        n2=sum;
        n=n-1;
    }
    return n1;
}
int main(){
    int n;
    cout<<"Enter the Value of N = ";
    cin>>n;
    cout<<fibo(n-1);
}