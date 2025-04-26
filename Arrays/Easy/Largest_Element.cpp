//                                                                      //BruteForce Approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,5,12,3};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    cout<<"The largest number in the given array is: "<<arr[n-1];
}
//                                                                     //Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int findHighestNumber(vector<int>&arr,int size){

          int maxi=arr[0];

          for(int i=1;i<size;i++){

               if(arr[i]>maxi){

                 maxi=arr[i];

}
}
return maxi;
}
int main(){

         vector<int> arr={2,5,7,3};

         int max = findHighestNumber(arr,arr.size());

         cout<<"The largest number in the given array is: "<<max;

}
