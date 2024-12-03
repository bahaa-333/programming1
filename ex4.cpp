#include<iostream>
using namespace std;

//function to check the nbs in the array
bool isequal(int A[5], int B[5]){
    //create a flag variable
    int flag = 0;
    //flag will detect whether nbs are equal or not 
    //0 will mean all nb are respectively equal
    //1 will mean that some inequality was detected

    //k will be our guide in looping through exactly 5 nb
    int k = 0;
    //i will loop through A and B 
    int i = 0;
    while(k < 5)
    {
        if(A[i] == B[i])
        {
            //no error
            flag = 0;
            //increase i by 1 
            i++;
        } 
        else 
        {
            flag = 1;
        }
        //increase k by 1
        k++;
    } 
    
    //if flag = 1 return false aka return 0
    if(flag == 1)
    {
        return false;
    }
    //else return true aka return 1
    else
    {
        return true;
    }
}

//function to check the sum 
bool check_sum(int A[5], int B[5]){
    //create 2 sum variables
    int sum_a = 0, sum_b = 0;

    //fill each variable with the respective values
    //using var i loop through each array
    for(int i = 0 ; i < 5 ; i++)
    {
        sum_a += A[i];
    }
    for(int i = 0 ; i < 5 ; i++)
    {
        sum_b += B[i];
    }

    //if both sums are equal return true
    if(sum_a == sum_b)
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main(){
    //create 2 arrays
    int A[5], B[5];

    //use A for input
    //prompt the user for input
    cout<<"Enter 5 digits between 0 and 9 : ";
    //test each digit using flaged
    int flaged = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        cin>>A[i];
        if(A[i] < 0 || A[i] > 9){
            flaged = 1;
        }
    }
    //case of having an error in input
    while(flaged == 1)
    {
        cout << "ERROR! ALL INT MUST BE BETWEEN 0 AND 9" << endl ;
         cout<<"Enter 5 digits between 0 and 9 : " << endl ;
        for(int i = 0 ; i < 5 ; i++)
        {
            cin>>A[i];
            if(A[i] < 0 || A[i] > 9){
                flaged = 1;
            }
        }
    }

    //fill in B with random digits between 0 and 9
    for(int j = 0 ; j < 5 ; j++)
    {
        B[j] =  (rand() % 9);
    }

    //use each function 
    if(isequal(A, B) == 1)
    {
        cout << "CONGRATS! you've won FIRST place" << endl;
    }
    else if(check_sum(A, B) == 1)
    {
        cout << "CONGRATS! you've won SECOND place" << endl;
    }
    else
    {
        cout << "You've LOST! try again" << endl;
    }

    return 0;
}