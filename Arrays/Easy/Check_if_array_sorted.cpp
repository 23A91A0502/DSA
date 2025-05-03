//brute force approach
#include<bits/stdc++.h> 
using namespace std;
int main(){
    vector<int>arr={5,4,1,2};
    int n=arr.size();
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0)cout<<"True";
    else cout<<"False";
   ///optimal approach
#include<bits/stdc++.h> //better approach
using namespace std;
int main(){
    vector<int>arr={1,2,3,4};
    int n=arr.size();
    int flag=0;
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<false;
    else cout<<true;
}
