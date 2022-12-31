#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int rec(int i, int j, int m, int n){
    if(i == (m-1) && j == (n - 1)){
        return 1; 
    }

    if(i == m || j == n){
        return 0;
    }

    return rec(i + 1, j, m, n) + rec(i, j + 1, m, n);
}

int ansRecursive(int m, int n){
    return rec(0,0,m,n);
}

int factorial(int n){
    if(n <= 1){
        return 1;
    }

    return n*factorial(n-1);
}

int optimized_NcR(int N, int R){
    int r = min(R, N - R);
    int n = N;
    int numerator = 1, denominator = 1;
    while(r > 0){
        numerator = numerator*n;
        denominator = denominator*r;
        n --;
        r --;

        int gcd = __gcd(numerator, denominator);
        numerator = numerator / gcd;
        denominator = denominator / gcd;

        cout << numerator << " " << denominator << "\n";
    }

    return numerator;
}

int ansPnC(int m, int n){
    // return factorial(m+n - 2) / (factorial(m - 1)*factorial(n-1));
    return optimized_NcR(m + n - 2, m - 1);
}




int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int m, n;
    cout << "Rows ' ' columns : ";
    cin >> m >> n;

    cout << "Ans Rec : " << ansRecursive(m, n) << "\n";
    cout << "Ans PnC : " << ansPnC(m, n) << "\n";

}
