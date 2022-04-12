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
		int k;  cin>>k;
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(ar[i]-ar[j]==k) cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
return 0;	
}
