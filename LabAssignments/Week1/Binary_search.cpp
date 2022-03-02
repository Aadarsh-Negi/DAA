#include<iostream>
#include<vector>
using namespace std;


int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		vector<int> ar(n);
		
		for(int &i:ar) cin>>i;
		
		int key;
		cin>>key;
		
		
		int cnt=0;
		int l=0;
		int r=n-1;
		
		while(l<=r){
			int mid = l + (r-l)/2;
			cnt++;
			if(ar[mid]==key){
					break;
			}else if(ar[mid]>key) r=mid-1;
			else l=mid+1;
		}
	
		if(l<=r){
			cout<<"Present "<<cnt<<"\n";
		}else{
			cout<<"Not Present "<<cnt<<"\n";
		}
	
	
	}
	
	
	
	return 0;
	
}
