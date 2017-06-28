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

void reverseString (char* sourceString) {
	char temp;
    int arraySize = strlen(sourceString);
    for(int i=0; i<arraySize/2; i++) {
        temp = sourceString[i];
        sourceString[i] = sourceString[(arraySize-1)-i];
        sourceString[(arraySize-1)-i] = temp;
    }
}

int main() {
    int i = 0;
    char binaryBuffer[65];
    long long number = 6345353453453453324234339;
    while (number>0) {
        sprintf(&binaryBuffer[i++],"%d",(number & 1));
        number >>= 1;
    }
    reverseString(binaryBuffer);
    cout << binaryBuffer;
}

