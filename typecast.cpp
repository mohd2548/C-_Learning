// Type casting  
// Converting data from one type to another 

// 1 conversion (implicit )
// used for small datatype ----> big data type 

#include <iostream>
using namespace std;

int main() {
    char grade = 'A';    // ASCII val == 65
    char grad = 'a';     // ascii val == 97 
    int value = grade;   // Implicit concersion char into int 
    int val = grad;

    cout << value <<endl;
    cout << val <<endl;
    return 0;   
}



// 2 Casting (Explicit)
// used for big datatype ----> small data type 

// here progrmammer know and do the conversion manuallly 

// generally in maths  100.99 value == 101
// but in c++ 100.01 or 100.9999   === 100 only 



#include <iostream>
using namespace std;

int main() {
   double price = 100.99;
   int  new_price = price;    // 100   Iimplicit
   int  new_p = (int) price;    // 100  Explicit 
   cout << new_price <<endl;   
   cout << new_p <<endl;   
   return 0;   
}

// === **** Comparision ** =========

// Method 1: Implicit (int x = price)
// The compiler does it automatically behind the scenes.
// Risky. Some compilers will give a "warning" because you are losing data (.99).

// Method 2: Explicit (int x = (int)price)
// You manually tell the compiler to change the type.
// Safer. It tells other programmers, "I know I'm losing data, and I'm doing it on purpose."
