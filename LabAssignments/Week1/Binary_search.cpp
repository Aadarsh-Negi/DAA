#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){
	
	int n;
	cin>>n;
	vector<vector<int>> adj(n,vector<int>(n));
	
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>adj[i][j];
	
	int src,des;
	cin>>src>>des;
	src--;
	des--;
	
	stack<int> st;
	
	st.push(src);

	while(st.size()){
			int cur = st.top(); 
			cout<<cur+1<<" "<<"\n";
			for(int i=0;i<n;i++){
				if(adj[cur][i]==1){
					adj[cur][i]=2;
					if(i==des){
						cout<<"Yes Path Exists\n";
						return 0;
					}
					st.push(i);	
				}
				
			}
		
	}
	cout<<"No Path does not exists";
	
	
	
	
	
	
	
	return 0;
	
}
