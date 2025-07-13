// Operators::::::-----
// 1. Arithmetic Operators {%,/,*,+,-}
// 2. Relational Operators {=,<=,>=,==,<,>,!=}
// 3. Logical Operators {&&,||,!}
// 4. Assignment Operators {=,+=,-=,*=,/=,%=}
// 5. Increment/Decrement Operators {++,--}


// Code 1. Arithmetic Operators {%,/,*,+,-}
/*
#include <iostream>
using namespace std;
int main(){
    // int a = 52 , b = 25;
    int a = 12;
    int b = 45;
    // cout << "a = " << a << ", b = " << b << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "Add (a + b): " << (a + b) << endl;
    cout << "Sub (a - b): " << (a - b) << endl;
    cout << "Multi (a * b): " << (a * b) << endl;
    cout << "Div (a / b): " << (a / b) << endl;
    cout << "Modul (a % b): " << (a % b) << endl;
    return 0; 

}

#include <iostream>
using namespace std;
int main(){
     int a ,b; // Input by User.... 

    cout << "Enter the Value of a: " << endl;
    cin >> a;

    cout << "Enter the Value of b: " << endl;
    cin >> b;
    
    cout << "Add (a + b): " << (a + b) << endl;
    cout << "Sub (a - b): " << (a - b) << endl;
    cout << "Multi (a * b): " << (a * b) << endl;
    cout << "Div (a / b): " << (a / b) << endl;
    cout << "Modul (a % b): " << (a % b) << endl;

    return 0; 

}

// Code 2. Relational Operators {=,<=,>=,==,<,>,!=}
#include <iostream>
using namespace std;
int main(){
    int a = 23;
    int b = 85;
    // int a = 45 , b = 32;
    bool first = (a == b);
    cout << first << endl;

    bool sec = (a <= b);
    cout << sec << endl;

    bool third = (a >= b);
    cout << third << endl;

    bool four = (a < b);
    cout << four << endl;

    bool five = (a > b);
    cout << five << endl;

    bool six = (a != b);
    cout << six << endl;
    return 0;
}
 
#include <iostream>
using namespace std;
int main(){
    int a , b; // Input by User....
    cout << "Enter the Value of a: " << endl;
    cin >> a;

    cout << "Enter the Value of b: " << endl;
    cin >> b;

    bool first = (a == b);
    cout << first << endl;

    bool sec = (a <= b);
    cout << sec << endl;

    bool third = (a >= b);
    cout << third << endl;

    bool four = (a < b);
    cout << four << endl;

    bool five = (a > b);
    cout << five << endl;

    bool six = (a != b);
    cout << six << endl;
    return 0;

}
 
// Code 3. Logical Operators {&&,||,!}
// [!]::::::::::::::::
#include <iostream>
using namespace std;
int main(){
    int a = 0;// True ko false kar dega. 
    int a = 20;
    cout << !a << endl;
    return 0;
}

// [&&]:::::::::::
#include <iostream>
using namespace std;
int main(){
    int a = 12;
    int b = 56;

    if (a < b && b > a)
    {
        cout << "Both Conditions are True: " << endl;
    }
    return 0;
}


// [||]:::::::::::::
#include <iostream>
using namespace std;
int main(){
    int k = 45;
    int d = 54;

    if (k == 45 || d == 54) // if (k == 62 || d == 22)
    {
        cout << "Atleast One Value have to be True!" << endl;
    }
    return 0;
}


// Code 4. Assignment Operators {=,+=,-=,*=,/=,%=}
#include <iostream>
using namespace std;
int main(){
    int a = 45;
    cout  << "a = " << a << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main (){
    int a; // By User''''
    cout << "Enter the Value Of a = " << endl;
    cin >> a;
    return 0;
}


#include <iostream> 
using namespace std;
int main (){
    int a = 12;
    a += 5;
    cout << "a = " << a << endl;
    return 0; 
}


#include <iostream> 
using namespace std;
int main (){
    int a;
    cout << "Enter the Value of a = " << endl;
    cin >> a;
    a += 5;
    cout << "a = " << a << endl;
    return 0; 
}

#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the Value of a = " << endl;
    cin >> a;
    a -= 6;
    cout << "a = " << a << endl;
    return 0;

}

#include <iostream>
using namespace std;
int main (){
    int d;
    cout << "Enter the value of d = " << endl;
    cin >> d;
    d *= 5;
    cout << "d = " << d << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main (){
    int k;
    cout << "Enter the value of k = " << endl;
    cin >> k;
    k = 5;
    cout << "k = " << k << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main (){
    int s;
    cout << "Enter the value of s = " << endl;
    cin >> s;
    s %= 5;
    cout << "s = " << s << endl;
    return 0;
}

// Code 5. Increment/Decrement Operators {++,--}
// 1. Pre-Increment (++a)
#include <iostream>
using namespace std;
int main (){
    int a = 7;
    int b = ++a;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

// 2. Post-Increment (a++)
#include <iostream>
using namespace std;
int main (){
    int a = 4;
    int b = a++;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}


// 3. Pre-Decrement (--a)
#include <iostream>
using namespace std;
int main (){
    int a = 4;
    int b = --a;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;

}

// 4. Post-Decrement (a--)
#include <iostream>
using namespace std;
int main (){
    int a = 4;
    int b = a--;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;

}
*/
