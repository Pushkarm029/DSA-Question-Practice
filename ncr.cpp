#include <iostream>
using namespace std;

int ncr (int a) {  
  int ans = 1;
  while(a!=0){
    ans = ans * a;
    a = a - 1;
  }
  return ans;
}

int main(){
  int n,r;
  cout<<"enter the value of n "<<endl;
  cin>>n;
  cout<<"enter the value of r "<<endl;
  cin>>r;
  if(n<r){
    cout<<"0";
  }
  else{
    int e = ncr(n);
    int f = ncr(r);
    int b = ncr(n-r);
    int answer = e/(f*b);
    cout<<"answer is "<<answer;
  }
}