#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &ar,int &cmp,int &swp,int l,int r){
    int rx = l + rand()%(r-l);
    swp++;
    swap(ar[r],ar[rx]);
    int pivot = ar[r];
    int i = l-1;
    
    for(int j=l;j<=r-1;j++){
        cmp++;
        if (ar[j] < pivot)
        {
            i++; 
            swp++;
            swap(ar[i],ar[j]);
        }
    }
    swp++;
    swap(ar[i+1],ar[r]);
    return i+1;
}


void quicksort(vector<int> &ar,int &cmp,int &swp,int l,int r){
    if(l>=r) return;
    int pi = partition(ar,cmp,swp,l,r);
    
    quicksort(ar,cmp,swp,l,pi-1);
    quicksort(ar,cmp,swp,pi+1,r);
}

int main(){
    int t;
    cin>>t;
    srand(time(0));
    while(t--){
        int n;
        cin>>n;

        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        int cmp=0;
        int swp=0;
        quicksort(ar,cmp,swp,0,n-1);

        for(int &i:ar) cout<<i<<" ";
        cout<<"\n";
     
        cout<<"comparisons = "<<cmp<<"\n";
        cout<<"swaps = "<<swp<<"\n";

    }



    return 0;
}
