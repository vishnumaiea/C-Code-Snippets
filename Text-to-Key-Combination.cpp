//===========================================================================//
//                                                                           //
//  A small program to convert text to key combinations in 262 characters    //
//  Author : Vishnu M Aiea                                                   //
//  GitHub : https://github.com/vishnumaiea/                                 //
//  Date created : IST 5:35 PM 10-11-2017, Friday                            //
//                                                                           //
//===========================================================================//

//247 chars version below

#include <iostream>
using namespace std;

int m [] = {21,22,23,31,32,33,41,42,43,51,52,53,61,
           62,63,71,72,73,74,81,82,83,91,92,93,94};
main() {
    char i,j,k,*a;
    cin>> a;
    for(i=0; i < sizeof(a); i++) {
        j = a[i];
        j = m[j > 90 ? j-97 : j-65];
        for(k=0; k < j%10; k++)
        cout<< j/10;
        cout<< " ";
    }
}

//209 chars version

#include <iostream>
using namespace std;

int m [] = {0,3,6,9,12,15,19,22,26};

main() {
    char i,j,k,l,*a;
    cin>> a;
    for(i=0; i < sizeof(a); i++) {
        j = a[i] & 31;
        for(k=1;k<9;k++)if(j <= m[k])for(l=0; l < (j-m[k-1]); l++) cout<< k+1;
        cout<<" ";
    }
}
