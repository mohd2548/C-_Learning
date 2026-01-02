// Syntax  
/*  
for (initialization;condition;updation){
    work
}
*/

// * Keywords in C++ cannot be names as var  like break ,int etc */

#include <iostream>
using namespace std;

/* int main(){
    int n;
    cout<< "Enter the number : ";
    cin >> n;
    /* 
    for(int i=1;i<=n;i++){
    This code will print step =1 single step 
        cout << i << " ";
    } 
    

    for(int i=1;i<=n;i+=3){  
    this code i+=2 take  the step 
        cout << i << " ";
    }
    return 0;
}
*/



// Q Sum of numbers from 1 to n 

// int main(){
//     int n;
//     int i = 1 ;
//     int sum = 0;
//     cout << "Enter the number : ";
//     cin >> n;
//     for (int i=1; i<=n;i++){
//         sum += i;
//         if(i == 5){
//             break;
//             // Enter the number : 10
//             // out: 15
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }

//* Using While for the same problem */
// int main(){
//     int n = 10;
//     int i = 1;
//     int sum = 0;
//     while (i <= n){
//         sum += i;
//         if(i==5){
//             break;
//         }
//         i++;
//     }
//     cout << sum << endl;
//     return 0;
// }


// Here break is applied after sum then getting updated then condition applied i==5 
// prints sum frrom 1 to 5 

int main(){
    int n = 10;
    int i = 1;
    int sum = 0;
    while (i <= n){
        sum += i;
        if(i==5){
            break;
        }
        i++;   
    }
    cout << sum << endl;
    return 0;
}

// if  

// while (i <= n){
//         sum += i;
//         i++; 
//         if(i==5){
//             break;
//         }

        /* 
        in this scenerio input then checcking i<=n then sum + 1 and then egtting updated 
        after then condiina getting appied  after i =4 sum += i  10 the gets updated ith val = 5 
        then conditon applied loop get break  so that its print 10  not 15 
        */
        