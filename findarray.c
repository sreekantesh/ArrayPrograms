#include <stdio.h>

typedef struct names
{
    int a;
    char c;
};
int main()
{
    struct names *n=NULL;
    n++;
    printf("%d",n);
    
    return 0;
}
