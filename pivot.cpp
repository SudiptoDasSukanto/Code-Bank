#include<bits/stdc++.h>
using namespace std;
int getPivot(vector<int> &v , int n ){
    int l = 0 , r = n-1 ;
    int mid = (l+r)/2 ;
    while(l<r){
        if(v[mid]>v[0]){
            l = mid+1 ;
        }
        else{
            r = mid ;
        }

        mid = (l+r)/2 ;
    }

    return l ;
     
}
int binarySearch(vector<int>&v ,int a, int b , int m){
    int l = a , r =b-1 ;
    int mid = (l+r)/2 ;
    while(l<=r){
        if(v[mid]==m){
            return mid;
        }
        else if(v[mid]>m){
            r=mid-1 ;
        }
        else {
            l= mid+1 ;
        }

        mid = (l+r)/2 ;
    }
    return -1 ;
}
int main(){
    int n , m ;
    cin >> n >> m ;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int pivot = getPivot(v,n) ;
    cout << pivot << endl;
    if(m>=v[0] && m<v[pivot]){
        cout << binarySearch(v,0 ,pivot,m);
    }else {
        cout << binarySearch(v,pivot ,n ,m );
    }

}