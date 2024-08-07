Q1. How can you output “Physics” and “Wallah” in two different lines in C++?
#include <iostream>
using namespace std;

int main(){
    cout << "Physics" << endl << "Wallah";
    return 0;
}

Q2. Write a program to print 10 using 2 positive numbers less than 6 in C++ as output.

#include <iostream>
using namespace std;

int main(){
    cout << 5 + 5 ;
    return 0;
    }


Q3. How much space does the following data types take?
 .int
 .bool
 .float

int will take 4 bytes
bool will take 1 byte
float will take 4 bytes


Q4. What is the output of this program?
int main() {
int a = 4;
int b = 5;
a++, b--;
cout << ++a << " " << b--;
}


the output will be 6 4

here preincrement and post increment used


Q5. Write a program to find the circumference of a circle with radius 10 in C++.
#include <iostream>
using namespace std;

int main(){
    int radius = 10;
    float circumference = 3.14159 * radius * 2;
    cout << circumference;
    return 0;
   }


Q6. How many of these can be a variable name ?
* 01Pwskills won't be a variable name because variable name can't start with number
* _FLOAT it can be a variable name 
* int can't be a variable name because it's a keyword
* FLOAT can be a variable name because cpp is a case sensitive language
* You will succeed can't be a variable name because variable name don't have space
