/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        cout << "          ";
        i = i + 1;
    }
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while(i<=n){
        sum = sum + 1;
        i = i + 1;
    }
    cout << "Value of sum is: " << sum << endl;
}

// Loop By the Formula...[n/2 (a + l)]

#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i<=n){
        sum = sum + i;
        i = i + 1;
    }
    cout << "Enter the Value of n: " << sum << endl;
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout << "Value of sum is: " << sum << endl;
}

// Prime Or Not Prime numbers ....
# include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 2; //prime numbers always lie between (2 to n-1)
    while (i<n){
        if (n % i == 0)// agar divide hoga and remainder 0 aaya then it is' Not Prime'.
        {
            cout << "Not Prime for: " << i << endl;
        }
        else {
            cout << "Prime for: " << i << endl;
        }
        i = i + 1;
    } 
}

// Even Or Odd Numbers.....
#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i = 2;
    while (i <= n){
        if (n % i == 0){
            cout << "The Value is Even: " << i << endl;
        }
        else {
            cout << " The Value is Odd: " << i << endl;
        }
        i++;
        // i = i + 1;
    }
}

// While Loop Row and Column, [i = 0] se....
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    // while (i <= n)
    {
        int j = 1;
        while (j < n)
        // while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
   }

}

// While Loop Row and Column, [i = 1] se....
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

//  OR,,
// Print Numbers....(i)
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << i ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// OR,,,
// Print Numbers....(i)
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
     }
}


#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
     }
}


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int j = 1;
    while (j <= n){
        cout << n - j + 1;
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
    }
}


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 0;
    while (i <= n){
    int j = 0;
    while (j <= n){
        cout << j + 1;
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
    }
}


#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int i = 1;
    while (i <= n){
    int j = 1;
    while (j <= n){
        cout << j - 1;
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

}


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n){
    int j = 1;
    while (j <= n){
        cout << count << " ";
        count = count + 1;
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
    }

}
*/


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while (row <= n){
        int col = 1;
        while (col <= row){
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}