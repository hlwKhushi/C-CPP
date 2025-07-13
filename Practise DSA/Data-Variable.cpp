//  Data Type & Variable........ 

 /*
Int  -> a = 5;
Char -> a = 'a';
Bool -> a = 15;
Float -> a =1.26;
Double -> a = 1.65;

// Code 1.
#include <iostream>
using namespace std;
int main () {
    int a = 1646;
    cout << a << endl;
    char b = 'k';
    cout << b << endl;
    bool c = true;
    cout << c << endl;
    float d = 1.023;
    cout << d << endl;
    double e = 0.122;
    cout << e << endl;
    int size = sizeof (d);
    cout << "Size of d is : " << size << endl;
    return 0;
}

// Code 2.
#include <iostream>
using namespace std;
int main (){
     char ch = 'k';  // Single character.
    cout << ch << endl;
    return 0;

}
// Code 3.
#include <iostream>
using namespace std;
int main (){
     char ch = 'jhskjdsaa';// Invalid: single quotes are for a single character.
    cout << ch << endl;
    return 0;

}
// Code 4.
#include <iostream>
using namespace std;
int main (){
    string cha = "ssdsdkfmd";  // Use double quotes for string.
    cout << cha << endl;
    return 0;

}


// Code 5.
// Type Casting.......
#include <iostream>
using namespace std;
int main(){
    int a = 'K';// Type Casting ho jayega 'integer' mai.
    cout << a << endl;
    return 0;
} 

// Code 6.
#include <iostream>
using namespace std;
int main(){
    char ch = 67;// Type Casting ho jayega 'char' mai.
    cout << ch << endl;
    return 0;

}
*/

#include <iostream>
using namespace std;
int main(){
    int a = 65;
    cout << a << endl;
    // char b = 'kh'; // Store only single char.
    char b = 'k';
    cout << b << endl;
    bool bl = true;
    cout << bl << endl;
    float fl = 1.236;
    cout << fl << endl;
    double d = 1.236;
    cout << d << endl;

    int size = sizeof(d);
    cout << "Size of d is : " << size << endl;



}

