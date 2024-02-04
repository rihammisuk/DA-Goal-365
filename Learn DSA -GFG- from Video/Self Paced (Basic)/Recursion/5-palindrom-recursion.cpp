#include <bits/stdc++.h>
using namespace std;

bool tailRecursionPalindrom(string str, int s, int e){
    if(s == e || s > e){
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }
    return tailRecursionPalindrom(str, s+1, e-1);
}
int main(){
    string str = "abaa";
    int s = 0;
    int e = str.size()-1;
    bool value = tailRecursionPalindrom(str,s,e);
    cout<< value <<" ";
    return 0;
}
