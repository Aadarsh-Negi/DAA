#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		vector<char> s(n);
		for(char &c:s) cin>>c;
		
		vector<int> cnt(26,0);
		for(char &c:s) cnt[c-'a']++;
		int mx=0;
		for(int i=0;i<n;i++) if(cnt[mx]<cnt[i]) mx=i;
		
		if(cnt[mx]==1) cout<<"No Duplicates Present\n";
		else
			cout<<char('a'+mx)<<"  "<<cnt[mx]<<"\n";
	}
	return 0;
}
