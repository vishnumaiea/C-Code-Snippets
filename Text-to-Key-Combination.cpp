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
    char*a i,j,k;
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
    char*a i,j,k,l;
    cin>> a;
    for(i=0; i < sizeof(a); i++) {
        j = a[i] & 31;
        for(k=1;k<9;k++)if(j <= m[k])for(l=0; l < (j-m[k-1]); l++) cout<< k+1;
        cout<<" ";
    }
}

//207 chars

#include <iostream>
#define M std::cout<<

int m [] = {0,3,6,9,12,15,19,22,26};

main() {
    char*a,i,j,k,l;
    std::cin>> a;
    for(i=0; i < sizeof(a); i++) {
        for(k=1;k<9;k++)
        if((j=a[i]&31) <= m[k])
        for(l=0; l<j-m[k-1]; l++) M k+1;
        M " ";
    }
}

// #include <iostream>
// #define M std::cout<<
// int m[]={0,3,6,9,12,15,19,22,26};main(){char*a,i,j,k,l;std::cin>>a;for(i=0;i<sizeof(a);i++){for(k=1;k<9;k++)if((j=a[i]&31)<=m[k])for(l=0;l<j-m[k-1];l++) M k+1;M " ";}}


//204 chars

#include<iostream>
#define Q std::cout<<

int m[]={0,3,6,9,12,15,19,22,26};

main(){
    char*a,i,j,k,l;
    std::cin>>a;
    for(i=0;i<sizeof(a);i++){
        for(k=1;k<9;k++)
        if((j=a[i]&31)<=m[k])
        for(l=0;l<j-m[k-1];l++)Q k+1;
        Q" ";
    }
}

// #include<iostream>
// #define Q std::cout<<
// int m[]={0,3,6,9,12,15,19,22,26};main(){char*a,i,j,k,l;std::cin>>a;for(i=0;i<sizeof(a);i++){for(k=1;k<9;k++)if((j=a[i]&31)<=m[k])for(l=0;l<j-m[k-1];l++)Q k+1;Q" ";}}


