/*
Author: Ferraro, AJ
Assignment: Programming Assignment #04
Course: COMP B12
Instructor: Richard Miles
Date submitted: 2020/03/22
*/

#include <iostream>
using namespace std;

void calcVolts(double* current, double* resistance, double* voltage, const int size);

int main(){
    const int SIZE = 10;
    double current[SIZE] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15 ,3.98};
    double resistance[SIZE] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
    double voltage[SIZE];

    //calculate the voltages
    calcVolts(current, resistance, voltage, SIZE);
    
    //Print out the contents of the voltage array:
    cout << "Resultant voltages: [";
    for(int i = 0; i < SIZE - 1; i++){
        cout << voltage[i] << ", ";
    }
    cout << voltage[SIZE - 1] << "]" << endl;

    return 0;
}

void calcVolts(double* current, double* resistance, double* voltage, const int size){
    for(int i = 0; i < size; i++){
        //for the current element in the voltage array, set it to the result of
        //the current element in the current array multiplied by the current 
        //element in the resistance array
        *(voltage + i) = *(current + i) * *(resistance + i);
    }
}
