#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll maximum(ll a, ll b){
    return a >= b ? a : b;
}


int lcs( string str1, string str2, ll len1, ll len2 ){
    if (len1 == 0 || len2 == 0){
        return 0;
    }
    if (str1[len1-1] == str2[len2-1]){
        return 1 + lcs(str1, str2, len1-1, len2-1);
    }
    else{
        return max(lcs(str1, str2, len1, len2-1), lcs(str1, str2, len1-1, len2));
    }
}
 

int main(){
    string str1, str2;

    cout << "Enter first  string : ";
    cin >> str1;

    cout << "Enter second string : ";
    cin >> str2;

    cout<<"Length of LCS is "<< lcs( str1, str2, str1.length(), str2.length() );
     
    return 0;
}
 
