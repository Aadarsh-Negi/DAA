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
        for(int i=1;i<n;i++){
            int temp=ar[i];
            int j=i-1;
            for(;j>=0;j--){
                compare++;
                if(ar[j]>temp){
                    ar[j+1]=ar[j];
                    shift++;
                }else break;
            }
            ar[j+1]=temp;
        }

        for(int i:ar) cout<<i<<" ";cout<<"\n";
        cout<<"comparisons "<<compare<<"\n";
        cout<<"shift "<<shift<<"\n";




    }

    


    return 0;
}
