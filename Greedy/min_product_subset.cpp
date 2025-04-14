#include<bits/stdc++.h>
using namespace std;
int minProduct(vector<int>&arr){
    int cn=0,cz=0,cp=0;
    int product_positive=1,product_negative=1;
    int largestNegative=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            product_negative*=arr[i];
            cn++;
            largestNegative=max(largestNegative,arr[i]);
        }
        if(arr[i]==0) cz++;
        if(arr[i]>0){
            cp++;
            product_positive*=arr[i];
        }
    }

    if(cn==0){
        if(cz>0) return 0;
        else{
            auto it=min_element(arr.begin(),arr.end());
            return *it;
        }
    }
    else{
        if(cn%2==0){
            // even negative no hai
            return (product_negative)/largestNegative*product_positive;
        }
        else{
            return product_negative*product_positive;
        }
    }
}
int main(){
    vector<int>arr{-2,-3,1,4,-4};
    return 0;
}