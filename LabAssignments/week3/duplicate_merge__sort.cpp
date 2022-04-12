#include<bits/stdc++.h>
using namespace std;
 
bool merge(vector<int>&arr,int l,int mid,int r){
    bool found=0;    
    int temp[r-l+2];
    int k=0;
        
    int i,j;
    i=l;
    j=mid+1;
        
    while(i<=mid && j<=r){
        if(arr[i]==arr[j]) found=1;
        if(arr[i]>arr[j]){
            temp[k++]=arr[j++];
        }else temp[k++]=arr[i++];
    }
        
    while(i<=mid)temp[k++]=arr[i++];
    while(j<=r)temp[k++]=arr[j++];
        
    k=0;
    while(l<=r)
        arr[l++]=temp[k++];
    
        return found;
        
}
    
bool split(vector<int>&arr,int l,int r){
    if(l>=r)return 0;
    
    int mid = l + (r-l)/2;
        
    bool found = (split(arr,l,mid) | split(arr,mid+1,r));
        
    return (found | merge(arr,l,mid,r));
        
        
}

bool duplicate(vector<int> &ar){

    return split(ar,0,ar.size()-1);
}

int main(){

    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<int> ar(n);
        
        for(int &i:ar) cin>>i;
		if(duplicate(ar)) cout<<"YES\n";
		else cout<<"NO\n";
    }



    return 0;
}
