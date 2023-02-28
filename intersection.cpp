#include <iostream>
using namespace std;
int main()
{
    int ntest;
    cout<<"no of test case = "<<endl;
    cin>>ntest;
    int n,m;
    cin>>n>>m;
    int arr1[100];
    int arr2[100];
    for(int i=0;i<ntest;i++){
        int value1 = 0;
        int value2 = 0;
        for(int j=0;j<n;j++){
            cin>>value1;
            arr1[j]=value1;
        }
        for(int k=0;k<m;k++){
            cin>>value2;
            arr2[k]=value2;
        }
    }
    cout<<"value inserted"<<endl;

    int arr3[100];
    for(int a=0;a<10;a++){
        int ele1 = arr1[a];
        for(int b=0;b<10;b++){
            int ele2 = arr2[b];
            if(ele1==ele2){
                arr3[a]=arr1[a];
            }
        }
    }
    for(int d=0;d<10;d++){
        cout<<arr3[d];
    }
    
}