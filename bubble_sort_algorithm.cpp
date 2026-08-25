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
    
    //bubble sort
    for(i=0;i<n-1;i++){  // time comp 0(n^2)
        for(j=0;j<n-i-1;j++){
            //swapping
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];     //in c++ we can use swap(a[j],a[j+1]) too.
                a[j+1]=temp;
            }
        }
    }
    cout<<"\nsorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
