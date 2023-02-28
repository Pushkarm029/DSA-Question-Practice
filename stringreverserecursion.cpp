#include<iostream>
using namespace std;

void func(string& gg, int i, int j){
    if(i>j){
        return ;
    }
    swap(gg[i],gg[j]);
    i++;
    j--;
    func(gg,i,j);
}


int main(){
    string gg = "abcde";
    func(gg,0,4);
    cout<<gg<<endl;
}