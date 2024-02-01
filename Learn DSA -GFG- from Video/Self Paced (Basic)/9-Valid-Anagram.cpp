#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        if(s == t){
            return true;
        }
        return false;
}

int main(){
    string s = "ba", t = "ab";
    bool res = isAnagram(s,t);
    if(res ==false){
        cout<<endl<< "false";
    }
    else{
       cout<<endl<< "true";
    }
    return 0;
}
