/*
Author: Ferraro, AJ
Assignment: Programming Assignment #03
Course: COMP B12
Instructor: Richard Miles
Date submitted: 2020/03/01
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

class romanType {
public:
    void setRoman(string);

    void romanToPositiveInteger();

    void printPositiveInteger() const;

    void printRoman() const;

    romanType();

    romanType(string);

private:
    string romanNum;
    int num;
};

void romanType::printPositiveInteger() const {cout << num << endl;}

void romanType::printRoman() const {cout << romanNum << endl;}

void romanType::setRoman(string rString) {
    romanNum = rString;
    romanToPositiveInteger();
}

void romanType::romanToPositiveInteger() {
    map<char, int> romanDict = {
        {'I', 1}, 
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
        {'\0', 0}
    };
        
    int total = 0;
    for(int i = 0; i < romanNum.length(); i++){
        if(romanDict[romanNum[i + 1]] > romanDict[romanNum[i]])
            total -= romanDict[romanNum[i]]; 
        else
            total += romanDict[romanNum[i]];  
    }
    num = total;
}

romanType::romanType() {
    romanNum = "\0";
    num = 0;
}

romanType::romanType(string rString) {
    romanNum = rString;
    romanToPositiveInteger();
}

int main() {
    romanType roman;
    string romanString;
    cout << "Enter a roman number: ";
    cin >> romanString;
    cout << endl;
    roman.setRoman(romanString);
    cout << "The equivalent of the Roman numeral " << romanString << " is ";
    roman.printPositiveInteger();
    cout << endl;
    
    return 0;
}
