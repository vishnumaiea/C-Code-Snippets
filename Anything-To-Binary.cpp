//==================================================//

//  A small program to print the equivalent binary
//  of any number as large as long long.
//
//  Author : Vishnu M Aiea
//  Website : www.vishnumaiea.in
//  Date : IST 12:17 AM 29-06-2017, Thursday

//==================================================//

#include <iostream>
#include <string.h>

using namespace std;

//the following function reverses the binary string
//becasue LSB will be on the left side when binaryBuffer is created.
void reverseString (char* sourceString) { //modify the source string
    char temp; //copy the char
    int arraySize = strlen(sourceString);
    for(int i=0; i<arraySize/2; i++) { //
        temp = sourceString[i]; //copy the char
        sourceString[i] = sourceString[(arraySize-1)-i]; //switch the digits from right to left
        sourceString[(arraySize-1)-i] = temp; //copy the left half char to right
    }
}

int main() {
    int i = 0;
    char binaryBuffer[65]; //65 bits - why odd number is because we can split the binary string half
    long long number = 6345353453453453324234339; //a really large number
    while (number>0) { //loop until number becomes 0
        sprintf(&binaryBuffer[i++],"%d",(number & 1)); //AND each LSB with 1
        number >>= 1; //shift the number to right
    }
    reverseString(binaryBuffer); //reverse the string
    cout << binaryBuffer; //print the boanry string in the right format
}

