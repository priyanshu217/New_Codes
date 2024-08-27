#include <stdio.h>
int main()
{

    int cp;
    printf("Enter cost price : ");
    scanf("%d", &cp);

    int sp;
    printf("Enter selling price :");
    scanf("%d", &sp);

    if (sp > cp)
    {

        printf("Profit");
    }
    else if (sp == cp)
    {
        printf("Best");
    }
    else
    {

        printf("You Bastard");
    }

    return 0;
}