#include <stdbool.h>
#include <stdio.h>
#include <limits.h>
int main(){
    printf("constant1 \t constant2 \t\t relation\t Evaluation\n\n");

    bool surprise = 0 == (unsigned int)0;
    if (surprise)
      printf("0 \t\t 0U \t\t\t == \t\t unsigned\n");
    else 
      printf("0 \t\t 0U \t\t\t == \t\t signed\n");
 
    surprise = -1 < 0;
    if (surprise)
      printf("-1 \t\t 0 \t\t\t < \t\t signed\n");
    else 
      printf("-1 \t\t 0 \t\t\t < \t\t unsigned\n");
  
    surprise = -1 > (unsigned int)0;
    if (surprise)
      printf("-1 \t\t 0U \t\t\t > \t\t unsigned\n");
    else 
      printf("-1 \t\t 0U \t\t\t > \t\t signed\n");

    surprise = INT_MAX > INT_MIN;
    if (surprise)
      printf("%d \t -%d-1 \t\t > \t\t signed\n", INT_MAX, INT_MAX);
    else 
      printf("%d \t -%d-1 \t\t > \t\t unsigned\n", INT_MAX, INT_MAX);

    surprise = (unsigned int)INT_MAX < INT_MIN;
    if (surprise)
      printf("%d \t -%d-1 \t\t < \t\t unsigned\n", INT_MAX, INT_MAX);
    else
      printf("%d \t -%d-1 \t\t < \t\t signed\n", INT_MAX, INT_MAX);

    surprise = -1 > -2;
    if (surprise)
      printf(" -1 \t\t -2 \t\t\t > \t\t signed\n");
    else 
      printf("-1 \t\t -2 \t\t\t > \t\t unsigned\n");

    surprise = (unsigned int)-1 > -2;
    if (surprise)
      printf("(unsigned)-1 \t -2 \t\t\t > \t\t unsigned\n");
    else 
      printf("(unsigned)-1 \t -2 \t\t\t > \t\t signed\n");
 
    surprise = INT_MAX < (unsigned int)(INT_MAX+1);
    if (surprise)
      printf("%d \t %dU \t\t < \t\t unsigned\n", INT_MAX, INT_MAX+1);
    else 
      printf("%d \t %dU \t\t < \t\t unsigned\n", INT_MAX, INT_MAX+1);

    surprise = (signed int)INT_MAX < (unsigned int)(INT_MAX+1);
    if (surprise)
      printf("%d \t (int)%dU \t > \t\t signed\n", INT_MAX, INT_MAX+1);
    else 
      printf("%d \t (int)%dU \t > \t\t unsigned\n", INT_MAX, INT_MAX+1);

    return 0;
}
