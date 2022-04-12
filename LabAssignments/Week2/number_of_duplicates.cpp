
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		vector<int> ar(n);
		
		for(int &i:ar) cin>>i;
		
		int key;
		cin>>key;
		
		int l=0;
		int r=n-1;
		int f,ls;
		f=ls=-1;
		while(l<=r){
			int mid = l + (r-l)/2;
			if(ar[mid]==key){
					f=mid;
					r=mid-1;
			}else if(ar[mid]>key) r=mid-1;
			else l=mid+1;
		}
		
		l=0;
		r=n-1;
	
		while(l<=r){
			int mid = l + (r-l)/2;
			if(ar[mid]==key){
					ls=mid;
					l=mid+1;
			}else if(ar[mid]>key) r=mid-1;
			else l=mid+1;
		}
		
		if(f==-1) cout<<"Not present\n";
		else cout<<key<<" - "<<(ls-f+1)<<"\n";
		
	
		
	
	
	}
	
	
	
	return 0;
	
}

