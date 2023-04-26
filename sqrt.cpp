#include<iostream>
using namespace std;

int sqrt(int num){

    int s = 0;
    int e = num;
    int mid = (s+e)/2;
    int ans;
    while(s<e){
        int val= mid*mid;
        if(val==num){
            return mid;
        }
        else if(val>num){
            e=mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid=(s+e)/2;
        s++;
    }
    return mid;
}

int main(){
    /*cout<<"enter the number = "<<endl;*/
    int num = 10;
    int value = sqrt(num);
    cout<<value;
}