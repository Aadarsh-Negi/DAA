#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int l,int mid,int r){
    int temp[r-l+2];
    int k=0;
    int i,j;
    i=l;
    j=mid+1;
    while(i<=mid && j<=r){
        if(arr[i]>arr[j]){
            temp[k++]=arr[j++];
        }else temp[k++]=arr[i++];
    }
    while(i<=mid)temp[k++]=arr[i++];
    while(j<=r)temp[k++]=arr[j++];
    k=0;
    while(l<=r)   arr[l++]=temp[k++];
}
void split(vector<int>&arr,int l,int r){
    if(l>=r)return;
    int mid = l + (r-l)/2;
    split(arr,l,mid);
    split(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		vector<int> ar(n);
		for(int &i:ar) cin>>i;
		split(ar,0,n-1);
		
		int tar;
		cin>>tar;
		int i=0;
		int j=n-1;
		while(i<j){
			int cur = ar[i] + ar[j];
			if(cur==tar) break;
			if(cur>tar) j--;
			else i++;
		}
		if(i<j && ar[i]+ar[j]==tar) cout<<ar[i]<<" "<<ar[j]<<"\n";
		else cout<<"No Such Element Exist\n";
		
	}
	return 0;
}
