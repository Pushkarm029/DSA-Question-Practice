#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    for(int i = 0 ; i<size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

/*int arrayb(int size){
    int arr[100];
    for(int i=0 ; i<size ; i++){
        int element;
        cin>>element;
        arr[i]=element;
    }
    return arr;
}*/

int main(){
    int arr[10]={5,4,2,6,88,99,45,112,75,150};
    int key;
    cout<<"Enter The Key"<<endl;
    cin>>key;
    bool found = linearSearch(arr,10,key);

    if(found){
        cout<<"Present";
    }

    else{
        cout<<"Absent";
    }
    return 0;
}