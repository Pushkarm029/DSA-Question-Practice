#include<iostream>
using namespace std;
int AP(int num){
    int value;
    value = (3*num)+7;
    return value;
}

int main(){
    int n;
    cin>>n;
    cout<<AP(n);
}