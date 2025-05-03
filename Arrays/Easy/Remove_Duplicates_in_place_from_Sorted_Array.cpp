#include<bits/stdc++.h>                      //Optimal Approach
using namespace std;
int main(){
    vector<int>arr={1,1,1,2,2,3,3,3,3,4,4};
    int n=arr.size();
    int i=0;
    int j=1;
    while(j<n){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            i++;
            arr[i]=arr[j];
        }
    }
    for(int k=0;k<(i+1);k++){
        cout<<arr[k]<<" ";
    }
}
