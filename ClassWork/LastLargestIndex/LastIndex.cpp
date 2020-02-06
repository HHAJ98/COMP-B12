/* 
Author: Ferraro, AJ
Assignment: Programming Assignment #02
Course: COMP B12
Instructor: Richard Miles
Date submitted: 2020/02/09
*/

#include <iostream>
using namespace std;

int lastLargestIndex(int array[], int arraySize) {
    if (arraySize == 0){
        return 0;
    }

    int max = array[0];
    int maxLastIndex = 0;

    for(int i = 1; i < arraySize; i++){
        if (array[i] => max){
            max = array[i];
            maxLastIndex = i;
        }
    }

    return maxLastIndex;

}

int main(){
    const int ARRAY_SIZE = 15;
    int list[ARRAY_SIZE] = {23, 51, 38, 56, 83, 38, 36, 49, 72, 35, 83, 36, 38, 51, 45};
    int maxLastIndex = lastLargestIndex(list, ARRAY_SIZE);
    int max = list[maxLastIndex];

    cout << "Max Value:\t\t\t" << max << endl;
    cout << "Last index of max value:\t" << maxLastIndex << endl;

}

