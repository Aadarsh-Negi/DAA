
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

        int compare=0;
        int shift=0;
        for(int i=0;i<n-1;i++){
            int mn=i;
            for(int j=i+1;j<n;j++){
				compare++;
				if(ar[mn]>ar[j]) mn=j;
			}
			shift++;
			swap(ar[i],ar[mn]);
        }

        for(int i:ar) cout<<i<<" ";
        cout<<"\n";
        cout<<"comparisons "<<compare<<"\n";
        cout<<"shift "<<shift<<"\n";
		cout<<"\n";



    }

    


    return 0;
}
