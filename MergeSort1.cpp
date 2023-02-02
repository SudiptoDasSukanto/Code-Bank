#include<bits/stdc++.h>
using namespace std;
void conquer(int ar[],int s , int e){
    int mid = s+ (e-s)/2 ;
    int *merged = new int[e-s+1] ;
    int idx1 = s , idx2 = mid+1 ;
    int midx = 0 ;

    while(idx1 <= mid && idx2 <= e){
        if(ar[idx1]<ar[idx2])
        {
            merged[midx++] = ar[idx1++] ;
        }else
        {
            merged[midx++] = ar[idx2++] ; 
        }
    }

    while(idx1<=mid){
         merged[midx++] = ar[idx1++] ;
    }

    while(idx2<=e){
        merged[midx++] = ar[idx2++] ; 
    }

    for(int i= 0 , j=s ; i<(e-s+1) ; i++, j++)
    {
        ar[j] = merged[i];
    }
}

void divide(int ar[],int s , int e){
    if(s>=e) return ;

    int mid=s+(e-s)/2 ;

    divide(ar,s,mid);
    divide(ar,mid+1,e);

    conquer(ar,s,e);

}

int main(){
    int n ;
    cin >> n ;
    int ar[n];
    for(int i=0 ; i<n ; i++){
        cin >> ar[i];
    }

    divide(ar,0,n-1);

    for(int i= 0; i<n ; i++){
        cout << ar[i] << " " ;
    }cout << endl;
}