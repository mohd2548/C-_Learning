#include <iostream>
using namespace std;

int main() {
    // ** NOT   ! operator
    // cout << (!(3 > 1)) << endl; // converted T into False  ==>  0  False 
    // cout << (!(3 < 1)) << endl; // converted F into T  ==>  1  True

    // ** OR || Operator 

    // cout << ((3>1) || (3>2)) << endl;   // T || T = T ==> 1
    // cout << ((3>1) || (3>5)) << endl;   // T || F = T ==> 1    
    // cout << ((3<1) || (3>5)) << endl;   // F || F = F ==> 0    
    // cout << ((3<1) || (3>2)) << endl;   // F || T = T ==> 1    

    // **  && AND Operator

    // cout <<((3>1) && (3>2)) << endl;   // T && T = T  ==>1
    // cout <<((3>1) && (3>6)) << endl;   // T && F = F  ==>0
    // cout <<((3>5) && (3>4)) << endl;   // F && F = F  ==>0
    // cout <<((3>5) && (3>2)) << endl;   // F && T = T  ==>0

    // ********* Post Increament operator  a++ 

    // int a = 10;
    // int v = a++;  // Kaam karenge that mean will store the value in "v" variable then update 10 --> 10 + 1 = 11  
    // cout << "v :"<< v << endl;  // v = 10  stored the existing value 
    // cout << "a :"<< a << endl;  // a = 11  update by 1

    // ********* Pre Increament operator  ++a

    // int a = 10;
    // int v = ++a;  // first  update 10 --> 10 + 1 = 11  then Kaam karenge that mean will store the value in "v" variable  
    // cout << "v :"<< v << endl;  // v = 11  stored the existing value 
    // cout << "a :"<< a << endl;  // a = 11  update by 1

    // ********* Post Decreament  operator a--
    // int a = 10;
    // int v = a--;  // Kaam karenge that mean will store the value in "v" variable then update 10 --> 10 - 1 = 9 
    // cout << "v :"<< v << endl;  // v = 10  stored the existing value 
    // cout << "a :"<< a << endl;  // a = 9  decrease by 1

    // ********* Pre Decreament  operator  --a

    int a = 10;
    int v = --a;  // first  update 10 --> 10 - 1 = 9  then Kaam karenge that mean will store the value in "v" variable  
    cout << "v :"<< v << endl;  // v = 9  stored the existing value 
    cout << "a :"<< a << endl;  // a = 9  decrease  by 1


    return 0;


}
