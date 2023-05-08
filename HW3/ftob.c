#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 32
#define EXP_32 8
#define MAN_32 9

void floatToBinstr(float,char *,int);
void print();

int main(int argc, char **argv) {
    int num=LEN;
    float floatnum;
    char binstr[LEN];

    floatnum = atof(argv[1]);
    floatToBinstr(floatnum,binstr,num);
    print(binstr, num);

    return 0;
}

void floatToBinstr(float fnum, char *binstr, int num){
  int fling = *(int*)&fnum;
  for (int p = (num-1); p >= 0; p--){
      int len = num-p-1;
      int bit = ((fling >> p) & 1);
      *(binstr+len) = bit + '0';
  }
}

void print(char *binstr, int num) {
    int p=0;
    for (p=0; p < num; p++){
        printf("%c", binstr[p]);
        if(p==0 | p==8)
            printf(" | ");
    }
    printf("\n");
}