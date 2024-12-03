#include<iostream>
using  namespace std;

//create a function to calculate the nb of prime values
//it takes an array A of 30 elements as parameter
int nbprime( int A[30] ){
    //define a counter variable and a flag 
    int count = 0, flag = 0;

    //test the elements of A using for loop
    for( int i = 0 ; i < 30 ; i++)
    {
        if(A[i] < 1)
        {
            flag = 1;
        }
        //nested for loop to check for divisors 
        //start from 2 since all numbers are divisible by 1
        for( int j = 2 ; j < A[i]/2 + 1 ; j++)
        {
            //if a divisor is detected flag != 0
            if( A[i] % j == 0)
            {
                flag++;
            }
        }
        //if flag = 0 then we've found a prime value
        if(flag == 0)
        {
            count++;
        }
    }
    //return the counter
    return count;
}

//funtion to calculate the average of even numbers
double caleven( int A[30] ){
    //we need 2 variables 
    //one to keep track of the nb of even elements 
    //and the other one for calculation  of the average
    int avg = 0, count = 0;

    //for loop through the elements
    for( int i = 0 ; i < 30 ; i++)
    {
        //check if A[i]%2 == 0?
        if(A[i] % 2 == 0)
        {
            //add the value to the avg
            avg += A[i];

            //add one to the counter
            count++;
       }
    }

    //calcul of the actual avg
    //return the value
    return avg / count;
}


int main(){
    //create an array "A" of size 30
    int A[30];

    //print the input message
    cout<<"Enter the 30 elements of the array:";
    //loop through the array with the for loop
    for(int i = 0 ; i < 30 ; i++)
    {
        cin >> A[i];
    }

    //calcul of the nb of prime values via the nbprime function
    cout << "The number of PRIME values in the array is " << nbprime( A ) << endl;

    //calcul for the avg of even values via the caleven function
    cout << "The average of EVEN values in the array is " << caleven( A ) << endl;

    //procedure of turning each negative value in the array to zero
    for(int j = 0 ; j < 30 ; j++)
    {
        if(A[j] < 0)
        {
            //assign 0 to the A[j]
            A[j] = 0;
        }
    }

    //print the modified array
    for(int k = 0 ; k < 30 ; k++)
    {
        cout << A[k] << " ";
    }
    cout << endl;

return 0;
}