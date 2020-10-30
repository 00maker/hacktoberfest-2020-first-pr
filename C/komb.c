#include<stdio.h>
#include<string.h>
int main()
{
     int i,j,k,l,sum=6;
     char str[4];
     printf("Enter 4 letters : ");
     scanf("%s",str);
     if (strlen(str) == 4)
     {
     printf("Combinations: ");
     for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i != j)
            {
                for (k = 0; k < 4; k++)
                if ((k != i) && (k != j))
                    {
                        l = sum - (i + j + k);
                        printf("\n%c%c%c%c",str[i],str[j],str[k],str[l]);
                    }
            }
     printf("\nNumber of combinations = %d",4*3*2*1);
     }
     else
        printf("\nLength of the string must be 4-letters only! ");
    return 0;
}
