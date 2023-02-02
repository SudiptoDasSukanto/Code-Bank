#include<bits/stdc++.h>
#include<time.h>

using namespace std;

int main(){
    FILE *fptr;
    fptr = fopen("Input.txt","w");

    srand(time(0));

    // rand function generate random number in rang (0 to RAND_MAX)

    int n = 5000 ;
    fprintf(fptr,"%d\n",n) ;

   

    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        arr[i] = rand()%(100000-9999+1)+9999;
        fprintf(fptr,"%d ",arr[i]) ;
    }
}