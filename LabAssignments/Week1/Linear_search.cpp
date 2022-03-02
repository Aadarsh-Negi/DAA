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
		int fl=0;
		
		for(int i:ar){
			cnt++;
			if(i==key){
			   fl=1;
			   break;
		   	 }
		}
		if(fl){
			cout<<"Present "<<cnt<<"\n";
		}else{
			cout<<"Not Present "<<cnt<<"\n";
		}
	
	
	}
	
	
	
	return 0;
	
}
