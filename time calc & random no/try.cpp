#include<bits/stdc++.h>
using namespace std;
int partition(int ar[] , int s , int e){
    
    int pivot  = ar[s];
    int cnt = 0 ;
    for(int i=s+1 ; i<=e ; i++){
        if(pivot >= ar[i])
        {
            cnt++ ;
        }
    }

    int pidx = s+cnt ;
    swap(ar[s],ar[pidx]);

    int i = s , j =e ;
    while(i<pidx && j>pidx){
        while(ar[i]<=ar[pidx])
        {
            i++ ;
        }
       while(ar[j]>ar[pidx])
        {
            j-- ;
        }

        if(i<pidx && j>pidx)
        {
            swap(ar[i++],ar[j--]) ;
        }
    }

    return pidx ;
}
void quickSort(int ar[] , int s , int e){

    if(s>=e) return  ;

    int pidx = partition(ar,s,e);

    quickSort(ar,s,pidx-1);

    quickSort(ar,pidx+1,e) ;

}
int main(){
    int n ;
    cin >> n ;
    int ar[n];
    for(int i=0 ; i<n ; i++){
         cin >> ar[i] ;
    }

    quickSort(ar,0,n-1);

    for(int i=0 ; i<n ; i++){
        cout << ar[i];
        cout << " " ;
    }cout << endl;

    return 0;
}