#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    int n;
    for(int i=0; i<tc ; i++){
    	cin>>n;
    	if(n>=24){
    	    cout << 'Yes' <<endl;
    	}
    	else{
    	    cout<<'No'<<endl;
    	}
    	n=0;
    }
	return 0;
}
