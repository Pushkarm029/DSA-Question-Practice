#include<iostream>
using namespace std;

int func(int a , int b,int ans){
    if(b==0){

        return ans;
    }
    
    ans = ans*a;
    b--;
    func(a,b,ans);
}

int main(){
    int a = 5;
    int b = 5;
    int c = 5;
    int ans = func(a,b,c);
    cout<<ans<<endl;
}