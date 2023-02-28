#include <iostream>
using namespace std;

int togglebit(int n)
{
    if (n == 0)
        return 1;
    int i = n;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
 
    return i ^ n;
}

int XNOR(int num1, int num2)
{
    if (num1 < num2)
        swap(num1, num2);
    num1 = togglebit(num1);
   
    return num1 ^ num2;
}

int main(){    
    int noofcase, numofele, value,value2;
    int value1=0;
    cout<<"enter no of case = "<<endl;
    cin>>noofcase;
    for(int i=0;i < noofcase;i++){
        cout<<"enter no of element = "<<endl;
        cin>>numofele;
        for(int j=0;j < numofele;j++){
            cin>>value;
            value1=value2;
            value2=XNOR(value, value1);
        }
    }
    cout<<value1<<endl<<value2<<endl;
}

