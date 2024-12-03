#include<iostream>
using namespace std;

int main(){
    //create a variable to store the input
    int x;
    //create an array to store the digits of the input
    //create a variable to loop through the array
    int A[5], i = 0;

    //prompt the user to enter an int
    cout << "Enter a number between 100 and 10000 : ";
    cin >> x;
    //test the int
    while(x < 100 || x > 10000)
    {
        cout << "ERROR!";
        cout << "Enter a number between 100 and 10000 : ";
        cin >> x;
    }
    int y = x;

    //store the digits into the array
    //stop when x = 0
    while(x > 0)
    {
        A[i] = x % 10;
        x /= 10;
        i++;
    }

    //i now has the legth of the array
   
    //collect A[0] and A[1] in one int
    int last_2 = A[1] * 10 + A[0];
    //calculate sum
    int sum = 0;
    for(int j = 0; j <= i ; j++)
    {
        sum += A[j];
    }
    //if first digit in A is even then x is even
    if(A[0] == 0 || A[0] == 2 || A[0] == 4 || A[0] == 6 || A[0] == 8)
    {
        cout << y <<" is DIVISIBLE by 2" << endl;
    }

    //if sum of all digits is a multiple of 3 aka sum % 3 = 0
    //x is divisible by 3
    if(sum % 3 == 0)
    {
        cout << y <<" is DIVISIBLE by 3" << endl;
    }

    //if A[1]A[0] are a multiple of 4
    //x is divisible by 4
    if(last_2 % 4 == 0)
    {
        cout << y <<" is DIVISIBLE by 4" << endl;
    }

    //if A[0] == 0 or 5 
    //x is divisible by 5
    if(A[0] == 0 || A[0] == 5)
    {
        cout << y <<" is DIVISIBLE by 5" << endl;
    } 

    return 0;
}