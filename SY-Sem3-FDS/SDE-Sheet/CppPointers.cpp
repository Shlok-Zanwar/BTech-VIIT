#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Increment(int *a){
    *a += 1;
};

int sumOfElements(int A[], int size){
    // int sizeOfArr = sizeof(A) / sizeof(A[0]);         // This wouldnt work cause ..... fucntiond doesnot know how long is A
    int sum = 0;
    for(int i = 0; i < size; i ++){
        sum += A[i];
    }

    return sum;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int a = 10;                         // integer a
    int *ptr = &a;                      // ptr points to a
    ptr = &a;                           // ptr points to a          => ptr = 0x61ff08          => a = 10
    *ptr = 11;                          // ptr = 0x61ff08          => a = 11
    // cout << ptr;                     // This will print address of a;
    // cout << *ptr;                    // This will print value of a;
    int b = 20;
    *ptr = b;                           // value of a = 20;           => ptr still points to a;
    ptr = &b;                           // ptr points to b now;

    // cout << ptr;                     // This will print address of b;
    // cout << ptr + 1                  // This will print address of (b + 4) cause int is 4 bytes;


    // Poitner types is required to dereference ..... (if you increment pointer it should know by how much bytes should it increase the address .... etc)
    // therefore, it is imp yo know the pointer type.





    // Character Pointer
    char *chPtr;
    char chr = 'a';
    chPtr = &chr;                       // chrPtr Point to chr
    // cout << chPtr << " " << (chPtr + 1);// will print address of a and 1 byte ahead (cause char is 1 byte)

    chPtr = (char *)a;                  // points to first byte of int a ( remaining three will be unkonwn)
    chPtr += 1;                         // points to 2nd   byte of int a ( remaining three will be unkonwn)


    // Void Pointer
    void *voidPtr;
    voidPtr = chPtr; 
    voidPtr = ptr;                      // void pointer doesnot need any dereferencing
    voidPtr = &a;                       // All the statements are valid ..........  but cannot do any operations with void ptr






    // Pointer to a pointer
    int x = 1;
    ptr = &x;
    int **ptrToPtr = &ptr;              // ptrToPtr points to ptr
    int ***ptrToPtrToPtr = &ptrToPtr;    // ptrToPtrToPtr points to ptrToPtr 

    // cout << ptr                      // Address of x
    // cout << *ptr;                    // Value of x
    // cout << *ptrToPtr;               // address of x (value inside ptrToPtr)
    // cout << *ptrToPtrToPtr           // address of ptrToPtr

    // cout << *ptr 
    // << *(*ptrToPtr) 
    // << ***ptrToPtrToPtr               // All print value of x


    ***ptrToPtrToPtr = 100;             // Changes the value of x;
    // cout << x                        // 100
    **ptrToPtr = 222;                   // Changes the value of x;
    // cout << x                        // 222






    // Using Pointers As a function Arguments
    // void Increment(int *p){
        // *p += 1;                     // *p = *p + 1          (value_inside_a =  value_inside_a + 1)
    // };
    // cout << x << "\n";                  // 222
    Increment(&x);
    // cout << x;                          // 223






    // Pointers and arrays
    int arr[5] = {1,2,3,4,5};                         // This will create 5 consecutive address

    int *arrPtr;
    arrPtr = arr; // &arr[0]            // It gives address of the first index of array
    // cout << *arrPtr;                    // Prints the value ar arr[0]

    arrPtr = (arr + 1); // || &arr[1]   // It gives address of the 2nd   index of array
    // cout << *arrPtr;                    // Prints the value ar arr[1]

    arrPtr ++;                          // Points to arr[2]







    // Arrays as function arguments;
    // int sumOfElements(int A[], int size){                // arr is not copied in A[] .... A is just a pointer to arr[0] 
        // int sizeOfArr = sizeof(A) / sizeof(A[0])         // This wouldnt work cause ..... fucntiond doesnot know how long is A

    //     for(int i =0; i < size; i ++){
    //         sum += A[i];
    //     }

    //     return sum
    // }

    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);         // This would work => ( 5 )
    // cout << sumOfElements(arr, sizeOfArr);                 // Prints the sum .......... Array is not copied








    // Strings ass charecter Array

    // For storing a string the char array should be large enough
    // ie => len of string + 1
    // last index for '\0' => null charecter;           To identify the end of string;

    char str[] = "Shlok";           // \0' will be added auto                   => size 6
    char str1[20] = "Shlok";        //    => size 20
    // char str2[5] = "Shlok";         // => compilation error

    char *c = str;                  // Points to adress of 'S' 
    // cout << *c;                     // S 
    c ++;
    // cout << *c;                     // h

    // print the string 
    // void print(char *c){
    //     while(*c != '\0'){
    //         cout << *c
    //         *c += 1;
    //     }
    // }

    char *constChr = "Shlok";
    constChr[0] = 'A';                          // ERROR => You cannot change the literals of a const char pointer            
    cout << "constChr - " << constChr;          // Prints Shlok...... cause it stores as array
    

    // Int the above function (PRINT_STRING) we can react the value of c ..... change any char to any other.
    // If we want to disallow that .............. Change char *c => const char *c 
    // Now cause we cannot modify const char ptrs ..... It will give compilation error if someone tries to change.
    // 









    // Multidimensional array 

    // Multidimensional arrays are stored in memory as contiguous block of memory
    // int B [2][3];

    // int *p [3] = B                => B will retuyn us pointer to array of len 3 

    // For a 2D array
    // B[i][j] = *(B[i] + j)
    //         = *( *(B + i) + j )                 // Cause arr[i] = (arr + i) 

    // B
    // *B
    // B[0]
    // &B[0][0]                             // All four print the address of first index of 2d array





    // Dynamic memory in C / C++
    // https://youtu.be/zuegQmMdy8M?t=7910







    // Pointers as return types for functions;

    


}
