#include<bits/stdc++.h>
using namespace std;
long long ans = 0;
    
void merge(vector<int>&arr,int l,int mid,int r,int&inv,int&comp){
        
    int temp[r-l+2];
    int k=0;
        
    int i,j;
    i=l;
    j=mid+1;
        
    while(i<=mid && j<=r){
        comp++;
        if(arr[i]>arr[j]){
            inv+=mid-i+1;
            temp[k++]=arr[j++];
        }else temp[k++]=arr[i++];
    }
        
    while(i<=mid)temp[k++]=arr[i++];
    while(j<=r)temp[k++]=arr[j++];
        
    k=0;
    while(l<=r)
        arr[l++]=temp[k++];
    
        
        
}
    
void split(vector<int>&arr,int l,int r,int &inv,int &comp){
    if(l>=r)return;
    
    int mid = l + (r-l)/2;
        
    split(arr,l,mid,inv,comp);
    split(arr,mid+1,r,inv,comp);
        
    merge(arr,l,mid,r,inv,comp);
        
        
}

void count_inversions(vector<int> &ar,int &inv,int &comp){

    split(ar,0,ar.size()-1,inv,comp);
}

int main(){

    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin>>n;

        vector<int> ar(n);
        
        for(int &i:ar) cin>>i;

        int inv=0;
        int comp=0;
        count_inversions(ar,inv,comp);
        
        for(int i:ar) cout<<i<< " "; 
			cout<<"\n";

        cout<<"comparisons = "<<comp<<"\n";
        cout<<"inversions = "<<inv<<"\n";

    }



    return 0;
}
