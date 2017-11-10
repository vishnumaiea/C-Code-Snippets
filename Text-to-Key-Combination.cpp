//===========================================================================//
//                                                                           //
//  A small program to convert text to key combinations                      //
//  Author : Vishnu M Aiea                                                   //
//  GitHub : https://github.com/vishnumaiea/                                 //
//  Date created : IST 5:35 PM 10-11-2017, Friday                            //
//                                                                           //
//===========================================================================//

#include <iostream>

using namespace std;

int m[] = {21,22,23,31,32,33,41,42,43,51,52,53,61,62,63,71,72,73,74,81,82,83,91,92,93,94};

int main() {
    int i,j,k;
    char* a;
    cin>> a;
    for(i=0; i < sizeof(a); i++) {
        j = a[i];
        j = m[j > 90 ? j-97 : j-65];
        for(k=0; k < (j-((j/10)*10)); k++)
        cout<< j/10;
        cout<< " ";
    }
    return 0;
}
