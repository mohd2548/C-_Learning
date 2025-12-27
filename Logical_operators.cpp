// *************Logical Operators***********
// OR  || ==> use it when T || F  = T   //  T || T = T  and so on ..............

// AND  &&   ampersand ==> USe it when all value are true then 
// T && T = T  and so on ..........

// NOT  !    ===> If TRUE then will convert FALSE 


#include <iostream>
using namespace std;

int main() {
    //  ! operator
    cout << (!(3 > 1)) << endl; // converted T into False  ==>  0  False 
    cout << (!(3 < 1)) << endl; // converted F into T  ==>  1  True

    // OR || Operator 

    cout << ((3>1) || (3>2)) << endl;   // T || T = T ==> 1
    cout << ((3>1) || (3>5)) << endl;   // T || F = T ==> 1    
    cout << ((3<1) || (3>5)) << endl;   // F || F = F ==> 0    
    cout << ((3<1) || (3>2)) << endl;   // F || T = T ==> 1    

    // && AND Operator

    cout <<((3>1) && (3>2)) << endl;   // T && T = T  ==>1
    cout <<((3>1) && (3>6)) << endl;   // T && F = F  ==>0
    cout <<((3>5) && (3>4)) << endl;   // F && F = F  ==>0
    cout <<((3>5) && (3>2)) << endl;   // F && T = T  ==>0
    
    return 0;


}
