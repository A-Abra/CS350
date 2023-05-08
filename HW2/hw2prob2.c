#include <stdio.h>
#include <limits.h>
int main(){
printf("-----------------------------------------------------------------\n");
printf("\t\t\tword size w\n");
printf("value \t 8 \t 16 \t\t 32 \t\t 62\n");
printf("-----------------------------------------------------------------\n");
printf("UMaxw \t 0x%X \t 0x%X \t 0x%X \t 0x%lX \n", UCHAR_MAX, USHRT_MAX, UINT_MAX, ULONG_MAX);
printf(" \t %d \t %d \t %zu \t %zu \n\n", UCHAR_MAX,USHRT_MAX, UINT_MAX,ULONG_MAX);
printf("TMinw \t 0x%hhX \t 0x%X \t 0x%X \t 0x%lX \n",-CHAR_MIN,-SHRT_MIN, -INT_MIN, -LONG_MIN);
printf(" \t %d \t %d \t %d \t %ld \n\n", CHAR_MIN,SHRT_MIN, INT_MIN,LONG_MIN);
printf("TMaxw \t 0x%X \t 0x%X \t 0x%X \t 0x%lX \n", SCHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX);
printf(" \t %d \t %d \t %d \t %ld \n\n", SCHAR_MAX,SHRT_MAX, INT_MAX,LONG_MAX);
printf("-1 \t 0x%X \t 0x%04X \t 0x%X \t 0x%lX \n\n", (unsigned char)-1, (unsigned short)-1, (unsigned int)-1, (unsigned long)-1);
printf("0 \t 0x%02X \t 0x%04X \t 0x%08X \t 0x%016lX \n", (unsigned char)0, (unsigned short)0, (unsigned int)0, (unsigned long)0);
return 0;
}