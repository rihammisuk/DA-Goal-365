#include <bits/stdc++.h>
using namespace std;

void reverseNormalRecursion(int n){
    if( n < 1){
        return;
    }
    reverseNormalRecursion(n-1); // Normal Recursion
    cout<< n <<" ";
}

void reverseTailRecursion(int n, int k = 1){
    if( n < 1){
        return;
    }
    cout<< k <<" ";
    reverseTailRecursion(n-1, k+1); // Tail Recursion (It is faster)

}

int main(){
    int n = 5;
    int k;
    reverseNormalRecursion(n); // Normal Recusrsion
    cout<< endl;
    n=5;
    k=1;
    reverseTailRecursion(n,k); // Tail Recursion (It is faster)
    return 0;
}
