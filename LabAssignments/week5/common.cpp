#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin>>n;
		vector<int> ar(n);
		for(int &i:ar) cin>>i;	
		int m;
		cin>>m;
		vector<int> ar2(m);
		for(int &i:ar2) cin>>i;
		int i=0;
		int j=0;
		while(i<n && j<m){
			if(ar[i]==ar2[j]) cout<<ar[i]<<" ",i++,j++;
			else if(ar[i]>ar2[j]) j++;
			else i++;	
		}
	return 0;
}
