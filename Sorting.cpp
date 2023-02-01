#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[] , int n ){
    int k = arr[0] ;
    for(int i=0 ; i<n ; i++){
        k = max(k,arr[i]) ;
    }

    int count[k+1] = {0} ;
    for(int i= 0; i<n ; i++){
        count[arr[i]]++ ;
    }

    for(int i=1 ; i<k+1 ; i++){
        count[i]+=count[i-1] ;
    }

    int ans[n] ;
    for(int i=n-1 ; i>=0 ; i--){
        ans[--count[arr[i]]] = arr[i] ;
    }

    for(int i=0 ; i<n ; i++){
        arr[i] = ans[i] ;
    }
}



// merge Sort

void merge(int arr[],int s , int e){
    int mid = s+(e-s)/2 ;

    int len1 = mid-s+1 ;
    int len2 = e-mid ;

    int *first = new int[len1] ;
    int *second = new int[len2] ;

    int p = s;
    for(int i=0 ; i<len1 ; i++){
        first[i] = arr[p++] ;
    }

    for(int i=0 ; i<len1 ; i++){
        second[i] = arr[p++] ;
    }

    int idx1 =0 , idx2 = 0 ;
    p = s ;

    while(idx1<len1 && idx2<len2){
        if(first[idx1]<second[idx2]) arr[p++] = first[idx1++] ;
        else arr[p++] = second[idx2++] ; 
    }

    while(idx1<len1) arr[p++] = first[idx1++] ;

    while(idx2<len2) arr[p++] = second[idx2++] ;

    delete []first ;
    delete []second ;

}

void mergeSort(int arr[] , int s , int e){
    
    if(s>=e) return ;
    int mid = s+(e-s)/2 ;

    mergeSort(arr,s,mid) ;
    mergeSort(arr,mid+1,e) ;

    merge(arr,s,e) ;
}



//Quick Sort

int partition(int arr[] , int s , int e ){

    int pivot = arr[s] ;
    int cnt = 0 ;

    for(int i=s+1 ; i<=e ; i++){
        if(arr[i]<=pivot) cnt++ ;
    }

    int pidx = s+cnt ;

    swap(arr[s],arr[pidx]) ;

    int i=s , j=e ;

    while(i<pidx && pidx<j){

        while(arr[i]<=pivot) i++ ;
        while(arr[j]>pivot) j++ ;

        if(i<pidx && pidx<j) swap(arr[i],arr[j]) ;
    }

    return pidx ;
}

void QuickSort(int arr[] , int s , int e){

    if(s>=e) return ;

    int pidx = partition(arr, s, e) ;

    QuickSort(arr,s,pidx-1) ;
    QuickSort(arr,pidx+1,e) ;
}


// Radix Sort

void countsortRadix(int arr[],int n , int exp){

    int ans[n] , count[10] ={0} ;

    for(int i=0 ; i<n ; i++){
        count[(arr[i]/exp)%10]++ ;
    }

    for(int i=1 ; i<10 ; i++){
        count[i]+=count[i-1] ;
    }

    for(int i=n-1 ; i>=0 ; i--){
        ans[--count[(arr[i]/exp)%10]]=arr[i] ;
    }

    for(int i=0 ; i<n ; i++){
        arr[i] = ans[i] ;
    }
}

void RadixSort(int arr[],int n){
    int k = arr[0] ;
    for(int i=0 ; i<n ; i++){
        k = max(k,arr[i]) ;
    }

    for(int exp =1 ; (k/exp)>0 ; exp*=10){
        countsortRadix(arr,n , exp) ;
    }
}


// Bucket Sort

void bucketSort(float arr[], int n ){

    vector<float>b[n] ;

    for(int i=0 ; i<n ; i++){
        int bi = n*arr[i] ;
        b[bi].push_back(arr[i]) ;
    }

    for(int i=0 ; i<n ; i++){
        sort(b[i].begin() , b[i].end()) ;
    }

    int idx =0 ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<b[i].size() ; j++){
            arr[idx++]= b[i][j] ;
        }
    }
}



int main()
{
    int n ;
     cin >> n ;
    //  int ar[n] ;
     float ar[n] ;
     for(int i =0 ; i<n ; i++){
        cin >> ar[i] ;
     }

    //countSort(ar,n) ;

    //mergeSort(ar,0 ,n-1);

    // QuickSort(ar,0,n-1) ;

    //RadixSort(ar,n) ;

     bucketSort(ar,n) ;

    


     for(int i=0 ; i<n ; i++){
        cout << ar[i] << " " ;
     }cout << endl;


}