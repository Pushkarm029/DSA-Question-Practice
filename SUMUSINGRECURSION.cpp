#include<iostream>
using namespace std;

int func(int *n,int so){
    if(so==0){
        return 0;
    }
    if(so==1){
        return n[0];
    }
    int sum = n[0] + func(n+1,so-1);
    return sum;

}
int main(){
    int n[10] = {1,2,3,4,5,5,6};

    int so = 9;

    int ans = func(n,so);
    cout<<ans<<endl;
}