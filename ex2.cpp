#include<iostream>
using namespace std;

//function to convert from decimal to binary
int* binary(int x) {
    //create an array to store the binary value
    //we'll be using 32 bits
    int A[32];
    //create an int i to loop through the array
    int i = 0;

    //keep calculating the remainder of the division until x = 0
    while (x > 0)
    {
        //the array will take the remainder of each div as input
        A[i] = x % 2;
        A[i] = x / 2;
        //move to the next slot of the array
        i++;

    }
    //fill the rest of the bits by 0
    if (x == 0)
    {
        for (int j = i; j < 32; j++)
        {
            A[j] = 0;
        }
    }
    //return the array
    return A;
}

//function to calculate the complement of binary number
int* complement(int* binary) {
    //loop through the whole array by using the size of the returned value
    int size = sizeof(binary) / sizeof(binary[0]);

    //loop through each array slot
    for (int i = 0; i < size; i++)
    {
        //use the ternary operator
        binary[i] = (binary[i] == 0 ? 1 : 0);
    }
    //return the array
    return binary;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    //test for positive int
    while (n < 0)
    {
        cout << "#\tERROR!\t#\n";
        cout << "Enter a positive int value : ";
        cin >> n;
    }

    //call the conversion function
    //store info in a new array
    int* binaryNumber = binary(n);

    //call the complement function 
    //store info in a new array
    int* complementBinary = complement(binaryNumber);

    cout << "The value of " << n << " in binary is : ";
    for (int i = 0; i < 32; i++)
    {
        cout << binaryNumber[i];
    }

    cout << "It's binary complement is : ";
    //to delete zeros on the left we'll need to keep track
    //introduce a variable track 
    int track = 0;
    //when track reaches 1 it's value will change
    for (int i = 0; i < 32; i++)
    {
        //case of having 1 as the first digit
        if (complementBinary[i] == 1)
        {
            track = 1;
        }

        //case of not encountering a 1
        if (track == 0)
        {
            if (complementBinary[i] == 1)
            {
                cout << complementBinary[i];
            }
        }
        //case of encountering a digit 1
        //we'll print everything
        else
        {
            cout << complementBinary[i];
        }

    }

    return 0;
}