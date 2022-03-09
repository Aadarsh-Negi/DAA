
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int jump(vector<int> &ar,int key){
		
		int n=ar.size();
		int m=sqrt(n);
		
		int i=0;
		while(i<n){
				if(ar[i]==key) return 1;
				
				if(ar[i]>key){
					for(int j=max(0,i-m)+1;j<i;j++)
						if(ar[j]==key) return 1;
				
					return 0;
				}
				
				if(i+m>=n){
					for(;i<n;i++) if(ar[i]==key) return 1;
					return 0;
				}
				i+=m;
		}
	return 0;
}


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
		
		
	
		if(jump(ar,key)){
			cout<<"Present\n";
		}else{
			cout<<"Not Present\n";
		}
	
	
	}
	
	
	
	return 0;
	
}

