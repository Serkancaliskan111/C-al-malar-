#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int i,j,n,k,l;

    char str[1000],str2[1000],temp[1000],b;

    printf("String 1'i giriniz:\n");
    gets(str);

    printf("String 2'i giriniz:\n");
    gets(str2);

    for ( i = 0; str[i] != '\0'; i++){}

    for ( j = 0; str2[j] != '\0'; j++){}

    for ( k = 0; k < i; k++)
    {
        temp[k] = str[k];
    }

    for ( k = i; k < i+j; k++)
    {
        temp[k] = str2[k-i];
    }

    temp[i+j] = '\0';

    for ( k = 0; temp[k] != '\0'; k++)
    {
        for ( l = k+1; temp[l] != '\0'; l++)
        {
            if (temp[k] > temp[l])
            {
                b = temp[l];
                temp[l] = temp[k];
                temp[k] = b;
            }
        }
    }
    
    printf("Kelimelerin birlestirilip siralanmis hali: ");
    puts(temp);
 
    return 0;
}