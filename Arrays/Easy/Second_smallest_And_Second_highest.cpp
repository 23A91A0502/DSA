                                /////better approach///
#include<bits/stdc++.h> 
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

                                         ////OPTIMAL APPROACH///
#include<bits/stdc++.h> //OPTIMAL approach
using namespace std;
int second_smallest(vector<int>&arr,int n){
    if(n<2) {return -1;}
    
        int s=INT_MAX;
        int ss=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i] < s){
                ss=s;
                s=arr[i];
            }
            else if(arr[i] < ss && arr[i]!=s){
                ss=arr[i];
            }
        }
    
    return ss;
}
int second_highest(vector<int>&arr,int n){
    if(n<2){return -1;}
    
        int h=INT_MIN;
        int sh=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i] > h){
                sh=h;
                h=arr[i];
            }
            else if(arr[i] > sh && arr[i]!=h){
                sh=arr[i];
            }
        }

    
    return sh;
}
int main(){
    vector<int>arr={1,2,5,4};
    int n=arr.size();
    int second_low=second_smallest(arr,n);
    cout<<"Second smallest: "<<second_low<<endl;
    int second_high=second_highest(arr,n);
    cout<<"Second highest: "<<second_high;
}


