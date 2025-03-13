//Problem1
//Write a C++ program to implement a recursive function to calculate the product of two numbers without using the
//multiplication operator.

// #include<iostream>
// using namespace std;
// int product(int a, int b) {
//     if (b==0) return 0;
//     if (b>0) return a+product(a,b-1);
//     if (b<0) return a-product(a,b-1);
// }
// int main(){
//     int number1, number2;
//     cout<<"Enter two numbers: ";
//     cin>>number1>>number2;
//     cout<<"The product of numbers "<<number1<<" and "<<number2<<" is "<<product(number1, number2);
//     return 0;
// }

//Problem2
//Write a recursive function to calculate the factorial
// #include<iostream>
// using namespace std;
// int factorial(int n) {
//     if (n==0 || n==1) return 1;
//     return n*factorial(n-1);
// }
// int main () {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     cout<<"The factorial of "<<num<<" is "<<factorial(num);
//     return 0;
// }

//           1,2,3,4,5,6,7,,8
//Problem3 0,1,1,2,3,5,8,13,21
//fibonacci number
// #include<iostream>
// using namespace std;
// int fibonnaci(int a) {
//     if (a==0) return 0;
//     if (a==1) return 1;
//     return fibonnaci(a-1)+fibonnaci(a-2);
// }
// int main () {
//     int n;
//     cout<<"Enter the position of n in Fibonacci number: ";
//     cin>>n;
//     cout<<"Fibonacci number at position "<<n<<" is "<<fibonnaci(n)<<endl;
//     return 0;
// }

//Problem4
//Sum of numbers from 1 to n
// #include<iostream>
// using namespace std;
// int sum(int num) {
//     if (num==0) return 0;
//     return num+sum(num-1);
// }
// int main () {
//     int number;
//     cout<<"Input a number: ";
//     cin>>number;
//     cout<<"The sum of numbers from 1 to  "<<number<<" is "<<sum(number);
//     return 0;
// }

//Problem 5
//From N to 1 in descending order
// #include<iostream>
// using namespace std;
// int descending(int n) {
//     if (n==0) return 0;
//     cout<<n<<"";
//     descending(n-1);
// }
// int main () {
//     int num;
//     cout<<"Input a number: ";
//     cin>>num;
//     cout<<descending(num)<<endl;
//     return 0;
// }

//Problem 6
//Count number of digits in an integer
// #include<iostream>
// using namespace std;
// int digit(int n) {
//     if (n==0) return 0;
//     return 1+digit(n/10);
// }
// int main () {
//     int number;
//     cout<<"Enter an integer number: ";
//     cin>>number;
//     cout<<"The number of digits in "<<number<<" is "<<digit(number)<<endl;
//     return 0;
// }

//Problem 7
//sum of digits
// #include<iostream>
// using namespace std;
// int digitsum(int num) {
//     if (num==0) return 0;
//     return (num%10)+digitsum(num/10);
// }
// int main () {
//     int n;
//     cout<<"Enter an integer: ";
//     cin>>n;
//     cout<<"The sum of digits in number "<<n<<" is "<<digitsum(n);
//
//     return 0;
// }

//problem 8
//Calculate the power
// #include<iostream>
// using namespace std;
// int power(int x, int y) {
//     if (y==0) return 1;
//     return x*power(x, y-1);
// }
// int main () {
//     int num1, num2;
//     cout<<"Enter a base number and exponent: ";
//     cin>>num1>>num2;
//     cout<<num1<<" in the power of "<<num2<<" is "<<power(num1, num2)<<endl;
//     return 0;
// }

//Problem9
// #include <iostream>
// using namespace std;
// int reversedigit(int n, int rev) {
//      if (n==0) return rev;
//      return reversedigit(n/10, rev*10+n%10);
// }
// int main () {
//      int number,rev;
//      cout<<"Enter an integer number: ";
//      cin>>number;
//      int reversed=reversedigit(number,rev=0);
//      cout<<"The reverse order of number "<<number<<" is "<<reversed<<endl;
//      return 0;
// }

//Problem 10 Palindrome
// #include <iostream>
// using namespace std;
// int reversedigit(int n, int rev) {
//     if (n==0) return rev;
//     return reversedigit(n/10, rev*10+n%10);
// }
// bool isPalindrome(int num) {
//     if (num<0) return false;
//     return num==reversedigit(num,0);
// }
// int main() {
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     if (isPalindrome(number)) {
//         cout<<"The number is a palindrome";
//     }
//     else {
//         cout<<"The number is not a palindrome";
//     }
//     return 0;
// }

//Problem11 Prime or not
// #include <iostream>
// using namespace std;
// bool isPrime(int n, int divisor = 2) {
//     if (n < 2) return false;
//     if (divisor * divisor > n) return true;
//     if (n % divisor == 0) return false;
//     return isPrime(n, divisor + 1);
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << (isPrime(num) ? "Prime" : "Not Prime") << endl;
//     return 0;
// }

//Problem12 Bonus
// #include <iostream>
// using namespace std;
// void TowerOfHanoi(int n, char from_peg, char to_peg, char aux_peg) {
//     if (n == 1) {
//         cout << "Move disk 1 from " << from_peg << " to " << to_peg << endl;
//         return;
//     }
//     TowerOfHanoi(n - 1, from_peg, aux_peg, to_peg); // Move n-1 disks to auxiliary peg
//     cout << "Move disk " << n << " from " << from_peg << " to " << to_peg << endl;
//     TowerOfHanoi(n - 1, aux_peg, to_peg, from_peg); // Move n-1 disks to destination peg
// }
// int main() {
//     int num;
//     cout << "Enter number of disks: ";
//     cin >> num;
//     TowerOfHanoi(num, 'A', 'C', 'B'); // A = source, C = destination, B = auxiliary
//     return 0;
// }