#include <stdio.h>
long decode2(long x,long y,long z){
    long a;
    y=y-z;
    x=x*y;
    a=y;
    a=a<<63;
    a=a>>63;
    a=a^x;
    return a;
}

int main(){
    long x,y,z,n;
    printf(" Enter the value of x:");
    scanf("%ld",&x);
    printf(" Enter the value of y:");
    scanf("%ld",&y);
    printf(" Enter the value of z:");
    scanf("%ld",&z);
    
    n=decode2(x,y,z);
    printf(" Result of function decode2(%ld,%ld,%ld) -> %ld \n",x,y,z,n);
    return 0;
}
