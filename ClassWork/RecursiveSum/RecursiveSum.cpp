/*
Author: Ferraro, AJ
Assignment: Programming Assignment #06
Course: COMP B12
Instructor: Richard Miles
Date submitted: 2020/04/30
*/

#include <iostream>
using namespace std;

// Function prototype
int arraySum(int [], int );

int main()
{
   // Create an array with some values in it.
   int array[] = { 1, 2, 3, 4, 5, 6};

   // Display the sum of the values. 
   cout << arraySum(array, 6) << endl;

   return 0;
}

int arraySum(int arr[], int elements) {
    // If there are no more elements left to add to the sum...
    if (elements <= 0) {
        // exit the function, we're done.
        return 0;
    }
    // Otherwise, return the last unsummed element in the list plus the sum of
    // all the other elements
    return arr[elements - 1] + arraySum(arr, elements - 1);
}