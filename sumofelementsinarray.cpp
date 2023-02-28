#include<iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    return sum;
}
int main(){
    int arr[4] = {2,3,6,3};
    int size = 4;
    cout<<sum(arr,size)<<endl;
}