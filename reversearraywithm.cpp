#include <bits/stdc++.h>
void reverseArray(vector<int> &arr , int m){
    for(int j=0; j<n ; j++){
        int s = arr.size();
        for(int i=m+1 ; i<s ; i++ ){
            int temp = arr[i];
            arr[i]  = arr[s-i-1];
            arr[s-i-1] = temp;
        }
}
