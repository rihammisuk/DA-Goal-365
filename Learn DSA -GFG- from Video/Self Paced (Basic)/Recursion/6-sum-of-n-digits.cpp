#include <bits/stdc++.h>
using namespace std;

int SumOfDigits(int n){
    if(n < 1){
        return n;
    }
    return SumOfDigits(n/10) +n%10;
}
int main(){
    int n = 233;
    int k;
    int value = SumOfDigits(n);
    cout<< value <<" ";
    return 0;
}
