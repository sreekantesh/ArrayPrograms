#include <stdio.h>
int main(int argc, char *argv[])
{
    int iTotalElement = 0 ;
    int  aiData[] = {10, 20, 30, 40, 50, 60,45};

    iTotalElement = *(&aiData + 1) - aiData;
    printf("Number of element = %d",iTotalElement);
    return 0;
}
