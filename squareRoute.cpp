#include<bits/stdc++.h>
using namespace std;
int intSquareRoute(int n){
    long long l=0 , r = n ;
    long long  mid = (l+r)/2 ;
    while(l<=r){
        long long square = mid*mid ;
        if(square == n){
            return mid ;
        }
        else if (square > n){
            r = mid-1 ;
        }
        else if(square < n){
            //Also we can store the answer of mid than we no need to calculate l-1 in return
            l = mid+1 ;
        }
        mid = (l+r)/2 ;
    }
    return l-1 ;
}
double morePrecision(int n , int precision , double temp ){
    double factor = 1 ;

    for(int i=0 ; i<precision ; i++){
        factor/=10 ;
        for(double j = temp ; j*j <= n ; j+=factor){
            temp  = j ;
        }
    }

    return temp;
}

int main(){
    long long n ;
    cin >> n ;
    int temp = intSquareRoute(n);

   // cout << temp  ;

    cout << morePrecision(n, 3 , temp);


}