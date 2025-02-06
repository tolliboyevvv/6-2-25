//problem 1
// #include <iostream>
// using namespace std;
// // int main() {
// //     double number;
// //     cout << "Enter a number: ";
// //     cin >> number;
// //     if (number > 0) {
// //         cout << "The number is positive." << endl;
// //     } else if (number < 0) {
// //         cout << "The number is negative." << endl;
// //     } else {
// //         cout << "The number is zero." << endl;
// //     }
// //     return 0;


//problem 2
// #include <iostream>
// using namespace std;
//
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//
//     if (number % 2 == 0) {
//         cout << "The number is even." << endl;
//     } else {
//         cout << "The number is odd." << endl;
//     }
//
//     return 0;
// }

//problem 3
// #include <iostream>
// using namespace std;
// int main() {
//     int number1, number2;
//     cout << "Enter number1: ";
//     cin >> number1 ;
//     cout << "Enter number2: ";
//     cin >> number2 ;
//     if (number1 > number2) {
//         cout <<  " Largest number is " << number1 << endl;
//     } else if (number2 > number1) {
//         cout << " Largest number is " << number2 << endl;
//     }
//     return 0;
// }

// //problem 4
// #include <iostream>
// using namespace std;
//
// int main() {
//     int number1, number2, number3;
//     cout << "Enter number1: ";
//     cin >> number1 ;
//     cout << "Enter number2: ";
//     cin >> number2 ;
//     cout << "Enter number3: ";
//     cin >> number3 ;
//     if (number1>number2 && number1>number3) {
//         cout<<"Largest number is "<< number1 <<endl;
//     } else if (number2>number1 && number2>number3) {
//         cout<<"Largest number is "<< number2 <<endl;
//     } else if(number3>number1 && number3>number2) {
//         cout<<"Largest number is "<< number3 <<endl;
//     }
//     return 0;
// }

// //problem 5
// #include <iostream>
// using namespace std;
//
// int main() {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout << "This is a leap year." << endl;
//     } else {
//         cout << "This is not a leap year." << endl;
//     }
//     return 0;
// }

// //problem 6
// #include <iostream>
// using namespace std;
// int main() {
//     int v;
//     cout << "Please enter Speed: ";
//     cin >> v;
//     if (v<20) {
//         cout << "Speed is too slow." << endl;
//     }else if (v>20 && v<80) {
//         cout << "Speed is just right." << endl;
//     }else  {
//         cout << "Speed is too fast." << endl;
//     }
//     return 0;
// }

// //problem7
// #include <iostream>
// using namespace std;
// int main() {
//     int m;
//     cout << "Please enter your mark: ";
//     cin >> m;
//     if (m>=50) {
//         cout << "You passed" << endl;
//     }else if (m<50) {
//         cout << "You failed" << endl;
//     }
//     return 0;
// }

// //problem8
// #include <iostream>
// using namespace std;
// int main() {
//     double x;
//     cout << "Please enter a number: ";
//     cin >> x;
//     if (x>0) {
//         cout << "Number is positive " << endl;
//     }else if (x<0) {
//         cout << "Number is negative " << endl;
//     }else if (x==0) {
//         cout << "Number is zero " << endl;
//     }
//     return 0;
// }

// //problem 9
// #include <iostream>
// using namespace std;
// int main() {
//     char c;
//     cout<<"Enter Command:";
//     cin>>c;
//     if (c=="g") {
//         cout<<"Go";
//     }else if (c=="y") {
//         cout<<"Get ready!";
//     }else if (c=="r") {
//         cout<<"Stop";
//     }
//     return 0;
// }

// //prb 10
// #include <iostream>
// using namespace std;
//
// int main() {
//     int score;
//
//     cout << "Enter the student's score (0-100): ";
//     cin >> score;
//
//     switch (score / 10) {
//         case 10: 100;
//         case 9:  99-90;
//             cout << "Grade: A" << endl;
//         break;
//         case 8:  89-80;
//             cout << "Grade: B" << endl;
//         break;
//         case 7: 79-70;
//             cout << "Grade: C" << endl;
//         break;
//         case 6: 69-60;
//             cout << "Grade: D" << endl;
//         break;
//         case 5: 0-59;
//             cout << "Grade: F" << endl;
//         break;
//     }
//
//     return 0;
// }

// //prb11
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cout<<"Enter two integers: ";
//     cin>>a>>b;
//     if (a%b==0) {
//         cout<<a<<" is a divisible of "<<b<<endl;
//     }else {
//         cout<<a<<" is not divisible of "<<b<<endl;
//     }
//     return 0;
// }

// //prb12
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,c,d;
//     cout<<"Enter angles of triangles: ";
//     cin>>a>>b>>c;
//     d=a+b+c;
//     if(d<180) {
//         cout<<"The triangle is not valid ";
//     }else {
//         cout<<"The triangle is valid ";
//     }
//     return 0;
// }

// //prb 13
// #include <iostream>
// using namespace std;
//
// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     if (ch >= 'A' && ch <= 'Z') {
//         cout << "The character is uppercase." << endl;
//     }
//     else if (ch >= 'a' && ch <= 'z') {
//         cout << "The character is lowercase." << endl;
//     }
//     else {
//         cout << "The character is not an alphabet." << endl;
//     }
//     return 0;
// }

// //prb14
// #include <iostream>
// using namespace std;
//
// int main() {
//     double weight1, price1, weight2, price2;
//     double pp1, pp2;
//
//     cout << "Enter the weight (in kg) and price (in dollars) of the first package: ";
//     cin >> weight1 >> price1;
//
//     cout << "Enter the weight (in kg) and price (in dollars) of the second package: ";
//     cin >> weight2 >> price2;
//
//     pp1 = price1 / weight1;
//     pp2 = price2 / weight2;
//
//     if (pp1 < pp2) {
//         cout << "The first package has the better price: $" << pp1 << " per kg." << endl;
//     } else if (pp1 > pp2) {
//         cout << "The second package has the better price: $" << pp2 << " per kg." << endl;
//     } else {
//         cout << "Both packages have the same price per kg: $" << pp1 << endl;
//     }
//
//     return 0;
// }

// //prb15
// #include <iostream>
// using namespace std;
//
// int main() {
//     int num, firstDigit, secondDigit, thirdDigit;
//
//     cout << "Enter a three-digit integer: ";
//     cin >> num;
//
//
//     firstDigit = num / 100;
//     secondDigit = (num / 10) % 10;
//     thirdDigit = num % 10;
//
//     if (firstDigit == thirdDigit) {
//         cout << num << " is a palindrome number." << endl;
//     } else {
//         cout << num << " is not a palindrome number." << endl;
//     }
//
//     return 0;
// }


// //problem 16
// #include <iostream>
// using namespace std;
// int main() {
//     int x,y;
//     float d;
//     cout<<"Enter x,y coordinates (in correcr order): ";
//     cin>>x>>y;
//     d=((x-0)^2+(y-0)^2)^(1/2);
//     if(d<=10) {
//         cout<< "Your coordinate is in circle";
//     }else if(d>10) {
//         cout<<"Your coordinate is not in circle";}
//     return 0;
// }
