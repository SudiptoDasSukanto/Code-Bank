#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void Bubble_sort(int ar[],int n){

     for(int i=0 ; i<n-1 ; i++){
        bool swaped = false ;
        for(int j=0 ; j<(n-1-i) ; j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]) ;
                swaped = true;
            }
        }
        if(swaped== false) {
            break;
        }
    }
}

int main(){
    FAST;

    int n ;
    cin >> n ;
    int  ar[n];
    for(int i=0 ; i<n ; i++){
        cin >> ar[i] ;
    }
    Bubble_sort(ar,n);

    // Bubble sort
    // for(int i=0 ; i<n-1 ; i++){
    //     bool swaped = false ;
    //     for(int j=0 ; j<(n-1-i) ; j++){
    //         if(ar[j]>ar[j+1]){
    //             swap(ar[j],ar[j+1]) ;
    //             swaped = true;
    //         }
    //     }
    //     if(swaped== false) {
    //         break;
    //     }
    // }
    for(int i=0 ; i<n ; i++){
        cout << ar[i] << " " ;
    }

    return 0;
}