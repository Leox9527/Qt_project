#include "stdio.h"
int main(int argc,char** argv)
{
    if(argc==1)
    printf("helloworld\n");
    else
    {
        printf("hello %s!\n",argv[1]);
    }
    return 0;
}
