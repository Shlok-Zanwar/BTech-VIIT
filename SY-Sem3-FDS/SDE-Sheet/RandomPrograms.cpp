#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


// Calculates Factorial Recursively
int factorial(int n){
    if(n <= 1){
        return 1;
    }
    return factorial(n-1);
}


// Function for Gratest common divisor / Highest common factor
// Using the Euclideans algorithm       
// STL => __gcd()
int GCD(int num1, int num2){

    // Algo 1 => Basic
    // ===========================================================================
    // int i = min(num1, num2); 
    // while(i-- > 0){
    //     if(num1 % i == 0 && num2 % i == 0){
    //         return i; 
    //     }
    // }
    // return 1;

    // Algo 2 => Euclideans (Recursive)
    // ===========================================================================
    // if(num1 == 0){
    //     return num2;
    // }
    // if(num2 == 0){
    //     return num1;
    // }

    // if(num1 == num2){
    //     return num1;
    // }

    // if(num1 > num2){
    //     return GCD(num1 - num2, num2);
    // }
    // else{
    //     return GCD(num1, num2 - num1);
    // }
    


    // Algo 3 => Extension of Alog 2
    // ===========================================================================
    if(num1 == 0){
        return num2;
    }
    return GCD(num2 % num1, num1);
}



// Uses GCD to calculate the NcR so that the int dosent overflow ....
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

        // cout << numerator << " " << denominator << "\n";
    }

    return numerator;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    // cout << "Factorial : " << factorial(5) << "\n";
    // cout << "GDC : " << GCD(100, 36) << "\n";
    cout << "NcR : " << optimized_NcR(10, 6) << "\n";

}
