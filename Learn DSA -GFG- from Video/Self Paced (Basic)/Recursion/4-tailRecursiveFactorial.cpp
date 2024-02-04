#include <bits/stdc++.h>
using namespace std;

int tailFactRecursion(int n, int k =1){
    if( n == 1){
        return k;
    }
    else{
        return tailFactRecursion(n-1, n*k); //Tail Recussion
    }
    ///It is faster than normal recursion
}
int main(){
    int n =3;
    int k;
    int value = tailFactRecursion(n,k);
    cout<< value <<" ";
    return 0;
}
