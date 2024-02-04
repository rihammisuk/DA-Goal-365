#include <bits/stdc++.h>
using namespace std;

void reverseRecursion(int n){
    if( n < 1){
        return;
    }
    cout<< n <<" ";
    reverseRecursion(n-1); //Tail Recussion
    ///It is faster than normal recursion
}
int main(){
    int n =3;
    reverseRecursion(n);
    return 0;
}
