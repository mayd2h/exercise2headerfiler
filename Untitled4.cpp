 #include <iostream>
 #include <cmath>
 #include <string>
 #include "myheader.h"
 using namespace std;
 	double number;
 int main()
 {

 	cout << "enter a number you want for the radius of circle:" << endl;
 	cin >> number;
 	double result = square(number);
 	double result1 = CircleArea(number);
 	double  result2 = Circumfrance(number);
 	cout << "the squared number is :" << endl;
    cout <<result<< endl;
    cout << "the area of a circle  is :" << endl;
    cout << result1<< endl;
    cout << "the circumfrance of a circle is :" << endl;
    cout << result2<< endl;
    
 }
