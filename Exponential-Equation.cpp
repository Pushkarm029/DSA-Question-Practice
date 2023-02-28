#include<iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int f2(int target){
    int eq = 0;
    for(int x = 0; x<target ; x++){
        for(int y=0 ; y<target ; y++){
            eq = pow(x,y)*y+pow(y,x)*x;
            if(eq==target){
                cout<<x<<" "<<y<<endl;
                break;
            }
        }
    }
}

int main(){
    cout<<"enter no of test cases : "<<endl;
    int n2;
    cin >> n2 ;
    int target;
    for(int i=0; i<n2 ; i++){
        cout<<"enter target"<<endl;
        cin>>target;
        f2(target);
    }
    return -1;
}