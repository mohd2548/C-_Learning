// Nested Loops with pattern problems 
#include <iostream>
using namespace std;
/*
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
*/

// int main(){
//     int n = 5;
//     for(int i=1;i<n;i++){ // using i=0 then i<=n-1
//         for(int j=1;j<n;j++){
//             cout<<j << " ";
//         }
//     cout << endl;
//     }
//     return 0;
// }



// FOr characters

/*
A B C D 
A B C D 
A B C D 
A B C D
*/ 

// int main(){
//     int n = 4;
//     for (int i=0;i<=n-1;i++){
//         char ch = 'A';
//         for(int j=0;j<=n-1;j++){
//             cout << ch << " ";
//             ch = ch+1;
//         }
//     cout << endl;
//     }
//     return 0;
// }

/*
1 2 3 
4 5 6 
7 8 9 
*/
// int main(){
//     int n =3;
//     int num = 1;
//     for (int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             cout << num << " ";
//             num ++;
//         }
//     cout << endl;
//     }
//     return 0;
// }


// A B C D 
// E F G H 
// I J K L 
// M N O P 

// int main(){
//     int n =4; 
//     char ch  = 'A';
//     for (int i = 1; i<=n; i++){   // print no rows  i = 1 to 4  also {int i=0;i<=n-1;i++} or{ i=0;i<n;i++}
//         for (int j =1 ; j<=4; j++){ // print no columns j=1 to 4
//             cout << ch << " ";
//             ch = ch + 1;  // ASCII A= 65 B=66 C=67 D=68  
//             //  ch = A + 1  ==> B  A= 65 + 1 = 66 ===> B
//         }
//     cout << endl;
//     }
//     return 0;
// }


// int main(){
//     int n = 3;
//     int num = 1;
//     for (int i = 1; i<= n ; i ++){
//         for (int j = 1; j<=n; j++){  
//             cout << num << " ";         // num print the number in sequence by incrementing 
//             num ++;
//         }
//     cout <<endl ;
//     }
//     cout << "After pattern num Value :"  << num << endl;
//     return 0;
// }


// int main(){
//     int n = 3;
//     char ch = 'A';
//     for (int i = 1; i<=n; i++){
//         for (int j = 1; j<=n; j++){
//             cout << ch ;
//             ch ++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Triangle pattern +
/* int main(){
    int n = 6;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "* ";
        }
    cout << endl;
    }
    return 0;
}
*/

// for number
/*
1
22
333
4444
*/

// int main(){
//     int n = 4;
//     for(int i=0; i<n; i++){
//         for(int j=0;j<i+1;j++){
//             cout << (i+1) ;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// A
// BB
// CCC
// DDDD

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//         cout << ch << " ";
//         }
//         cout << endl;
//         ch++;   // Increament AFTER finishing one row [I got stuck here]
//     }
//     return 0;
// }

// ======================================================

// 1
// 12
// 123
// 1234

// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<i+1;j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Reverse triangle pattern 
// 1
// 21
// 321
// 4321
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
