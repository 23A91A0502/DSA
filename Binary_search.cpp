#include<bits/stdc++.h>
using namespace std;
bool binary_search(vector<long long>&a,long long n,long long target){
	long long low=0;
	long long high=n-1;
	if(low > high){
		return false;
	}
	while(low <= high){
		long long mid =(low + high)/2;
		if(a[mid]==target){
			return true;
		}
		else if(a[mid]>target){
			high=mid - 1;
		}
		else{
			low=mid + 1;
		}
	}
	return false;
}
int main(){
	long long n,k;
	cin>>n>>k;
    vector<long long>a(n,0);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long>q(k,0);
    for(long long i=0;i<k;i++){
    	cin>>q[i];
    }
    //binary_search_algo
    for(long long i=0;i<k;i++){
    	if(binary_search(a,n,q[i])){
    		cout<<"YES"<<"\n";
    	}
    	else{
    		cout<<"NO"<<"\n";
    	}
    }
}
