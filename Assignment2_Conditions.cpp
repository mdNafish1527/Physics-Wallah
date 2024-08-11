#include <iostream>
using namespace std;

int main(){
    int a,b,m;
    cin >> a >> b >> m;
    int ans = (a * b) % m;
    cout << ans;
    return 0;
}

/*
the answer will be zero.
here a = 2,b = 3,m = 6
if i multiply a and b then it will be 6
6 is divisible by 6
and the remainder is 0
*/



#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    // input is 3 2
    cout << (x != y) << "  " << (x >= y);
    return 0;
}

/*
the output will be 1 1
here x stored 3 and y stored 2
x and y isn't equal that's why the boolean expression print 1 mean's true
and the second condition is also true because 3 is greater than 2
*/


#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    // input is 2 3
    x+=y;
    x-=y;
    x%=y;

    cout << x;
    return 0;
}

/*
the output is 2
because firstly initialize x and y by 2 3
then x is updated to 5
then x is again converted in 2
then x is finally store 2 % 3

here diviend is smaller than divisor so x will be 2
then simply print the value of x
*/


#include <iostream>
using namespace std;

int main(){
    int radius,height;
    cout << "Enter the radius ";
    cin >> radius;
    cout << "Enter the height " ;
    cin >> height;

    cout << "The volume is " << 3.14259 * radius * radius * height;
    return 0;
}



#include <iostream>
using namespace std;

int main(){
    char ch,zh;
    cout << "Enter the first character ";
    cin >> ch;
    cout << "Enter the second character ";
    cin >> zh;
    cout << (int) (ch - zh);
    return 0;
}



#include <iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout<<i;
}

/*
here the output will be 49
according to hierchy division will be first then the multiplication then addition 
then finall y 49 % 100 will print 49
*/
