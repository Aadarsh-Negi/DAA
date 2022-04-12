#include<bits/stdc++.h>
using namespace std;
int main(){
int t;	
	cin>>t;	
	while(t--){
		int n;
		cin>>n;
		vector<int> ar(n);
		for(int &i:ar) cin>>i;
		bool found=0;
		for(int i=0;i<n && !found;i++){
			for(int j=i+1;j<n && !found;j++){
				for(int k=j+1;k<n;k++){
					if(ar[i] + ar[j] == ar[k]){
						cout<<i+1<<", "<<j+1<<", "<<k+1<<"\n";
						found=1;
						break;
					}
				}
			}
		}
		if(!found) cout<<"No sequence found.\n";		
	}
return 0;	
}
