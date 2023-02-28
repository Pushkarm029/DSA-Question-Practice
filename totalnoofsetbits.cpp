#include<iostream>
using namespace std;

int bits(int a){
    int sum=0;
    while(a!=0){
        if (a&1){
            sum=sum+1;
        }
        else
        sum=sum+0;
        a = a>>1;
        sum=sum+a;
    }
    return sum;
}
int main(){
    int a ,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    int value = bits(a)+bits(b);
    cout<<value;
}