#include <bits/stdc++.h>
using namespace std;

void countingSort(int arr[] ,int n , int exp){

    int ans[n] , count[10] = {0} ;

    for(int i=0 ; i<n ; i++){
        count[(arr[i]/exp)%10]++ ;
    }

    for(int i=1 ; i<10 ; i++){
        count[i]+=count[i-1] ;
    }

    for(int i=n-1; i>=0 ; i--){
        ans[count[(arr[i]/exp)%10]-1] = arr[i] ;
        count[(arr[i]/exp)%10]--;
    }

    for(int i= 0; i<n ; i++){
        arr[i] = ans[i] ;
    }
}

void selectionSort(int arr[],int digit[],int n){

    for(int i=0 ; i<n-1 ; i++){
        int minIdx = i ;
        for(int j=i+1 ; j<n ; j++){
            if(digit[j]<digit[minIdx]){
                minIdx = j;
            }
        }
        swap(digit[i],digit[minIdx]);
        swap(arr[i],arr[minIdx]);

    }
}

//mergeSort

void merge(int *arr,int digit[],int s , int e){

    int mid= (s+e)/2 ;

    int len1 = mid-s+1 ;
    int len2 = e-mid ;

    int *first = new int[len1];
    int *second = new int[len2];

    int *first1 = new int[len1];
    int *second1 = new int[len2];

    //copy valus
    int mainArrayIndex = s ;
    for(int i=0 ; i<len1 ; i++){
        first[i]=digit[mainArrayIndex];
        first1[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1 ;
    for(int i=0 ; i<len2 ; i++){
        second[i] = digit[mainArrayIndex];
        second1[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted array
    int index1 = 0 ;
    int index2 = 0;
    mainArrayIndex = s ;

    while(index1<len1 && index2< len2){
        if(first[index1]<second[index2]){
            digit[mainArrayIndex]=first[index1];
            arr[mainArrayIndex++]=first1[index1++];

        }else{
            digit[mainArrayIndex]=second[index2];
            arr[mainArrayIndex++]=second1[index2++];
        }
    }

    while(index1<len1){
        digit[mainArrayIndex]=first[index1];
        arr[mainArrayIndex++]=first1[index1++];
    }

    while(index2<len2){
        digit[mainArrayIndex]=second[index2];
        arr[mainArrayIndex++]=second1[index2++];
    }

    delete []first;
    delete []second;
    delete []first1;
    delete []second1;

}
void mergeSort(int *arr ,int digit[] , int s , int e){
    // base case 
    if(s>=e){
        return;
    }

    int mid=(s+e)/2 ;
    //left part sort 
    mergeSort(arr,digit,s,mid);

    // right part sort
    mergeSort(arr,digit,mid+1,e);

    merge(arr,digit,s,e);
}

//Quick Sort

int partition(int arr[], int digit[] , int s , int e){
    
    int pivot  = digit[s];
    int cnt = 0 ;
    for(int i=s+1 ; i<=e ; i++){
        if(pivot >= digit[i])
        {
            cnt++ ;
        }
    }

    int pidx = s+cnt ;

    swap(digit[s],digit[pidx]);
    swap(arr[s],arr[pidx]);

    int i = s , j =e ;
    while(i<pidx && j>pidx){
        while(digit[i]<=digit[pidx])
        {
            i++ ;
        }
       while(digit[j]>digit[pidx])
        {
            j-- ;
        }

        if(i<pidx && j>pidx)
        {
            swap(digit[i],digit[j]) ;
            swap(arr[i++],arr[j--]) ;
        }
    }

    return pidx ;
}

void quickSort(int arr[] ,int digit[], int s , int e){

    if(s>=e) return  ;

    int pidx = partition(arr,digit,s,e);

    quickSort(arr,digit,s,pidx-1);

    quickSort(arr,digit,pidx+1,e) ;

}


void otherSort(int arr[],int n,int exp){
    int digit[n];
    for(int i= 0 ; i<n ; i++){
        digit[i]=(arr[i]/exp)%10 ;
    }

    //selectionSort(arr,digit,n);
   mergeSort(arr,digit,0,n-1);
   //quickSort(arr,digit,0,n-1) ;
    
}


void radixSort(int arr[] , int n ){
    
    int k =arr[0] ;
    for(int i=1 ; i<n ; i++){
        k = max(k,arr[i]) ;
    }

    //cout << k << endl;

    for(int exp = 1 ; k/exp>0 ; exp*=10){
        // countingSort(arr,n,exp) ;
        otherSort(arr,n,exp) ;
    }

}

int main()
{

   
    FILE *ptr;
    ptr = fopen("Input.txt", "r");

    if (ptr == NULL)
    {
        cout << "File is Empty." << endl;
        return 0;
    }

    int n;
    fscanf(ptr, "%d", &n);
    //cout << n << endl;

    int arr[n];

    for (int i = 0; i<n; i++)
    {
        fscanf(ptr, "%d", &arr[i]);
    }

    clock_t t;
    t = clock();


    radixSort(arr,n) ;

    for (int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    
    }cout << endl;
     


    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC;

    printf("took %f seconds to execute \n", time_taken);

}