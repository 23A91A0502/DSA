#include<bits/stdc++.h> //better approach
using namespace std;
int main(){
    vector<int>arr={1,2,5,4};
    int n=arr.size();
    int small=arr[0];
    int large=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<small){
            small=min(small,arr[i]);
        }
        if(arr[i]>large){
            large=max(large,arr[i]);
        }
    }
    int sec_high;
    int sec_small;
    for(int i=0;i<n;i++){
        if(arr[i]>small){
            sec_small=arr[i];
            break;
        }   
    }
    for(int i=n-1;i>=0;i++){
        if(arr[i]<large){
            sec_high=arr[i];
            break;
        }
    }
    cout<<"Second smallest: "<<sec_small<<endl;
    cout<<"Second highest: "<<sec_high;
}
