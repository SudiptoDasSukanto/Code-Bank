#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void Insertion_sort( vector<int>v,int n){
    for(int i=1 ; i<n ; i++)
    {
        int temp = v[i];
        for(int j=i-1 ; j>=0 ; j-- )
        {
            if(v[j]>temp){
                v[j+1]=v[j];
            }else{
                v[j+1]=temp;
                break;
            }
        }
    }
    // for(auto &pr:v){
    //     cout << pr << " ";
    //  }cout << endl;
}

int main(){
    int n ;
    cin >> n ;
     vector<int> v(n);
     for(int i=0 ; i<n ; i++)
     {
        cin >> v[i] ;
     }
     Insertion_sort(v,n);
     for(auto &pr:v){
        cout << pr << " ";
     }
}