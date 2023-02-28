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
    int a = 3;
    int b = 1;
    int c=1;
    int ans = func(a,b,c);
    cout<<ans<<endl;
}