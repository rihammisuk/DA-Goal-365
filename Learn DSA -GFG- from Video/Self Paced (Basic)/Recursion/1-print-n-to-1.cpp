#include <bits/stdc++.h>
using namespace std;

int reverseRecursion(int n){
    if( n < 1){
        return 0;
    }
    cout<< n <<" ";
    return reverseRecursion(n-1);
}
int main(){
    int n =3;
    reverseRecursion(n);
    return 0;
}
