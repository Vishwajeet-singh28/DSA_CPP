#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cctype>

using namespace std;

int main(){
    int n,i,j;
    cout<<"enter no. of elements: "<<endl;
    cin>>n;
    
    vector<int> a(n);
    
    cout<<"enter elements: "<<endl;
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    
    cout<<"\narray:\n "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    
    for(i=0;i<n-1;i++){
        int smallest=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[smallest]){
                smallest=j ;
            }
        }
        swap(a[i],a[smallest]);
    }
    
    cout<<"\nsorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    
    }
    return 0;
}
    
