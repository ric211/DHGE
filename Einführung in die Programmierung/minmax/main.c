#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc==1)
    {
        printf("bitte gib ganze zahlen ein");
        return 1;
    }

    int mini=atoi(argv[1]);
    int maxi=mini;

    for(int i=1; i<argc; ++i)
    {
        if(atoi(argv[i]) > maxi)
        {
            maxi=atoi(argv[i]);
        }
        else if(atoi(argv[i]) < mini)
        {
            mini=atoi(argv[i]);
        }
    }
    printf("Minimum: %d, Maximum %d\n", mini, maxi);
    return 0;
}
