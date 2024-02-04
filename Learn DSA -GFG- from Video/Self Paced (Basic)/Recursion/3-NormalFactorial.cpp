#include <bits/stdc++.h>
using namespace std;

int normalfact(int n){
    if( n  == 0){
        return 1;
    }
    else{
        return n * normalfact(n-1);
    }


}
int main(){
    int n= 4;
    int value = normalfact(n);
    cout<< value <<" ";
    return 0;
}
