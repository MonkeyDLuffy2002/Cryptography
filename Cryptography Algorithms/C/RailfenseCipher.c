#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char plaintxt[50], cipher1[50], cipher2[50], decrypt[50];
    int j=0, k=0, i;
    
    printf("The value of n: 2");
    printf("\nEnter the Plain Text: ");
    scanf("%s",&plaintxt);
    
    printf("\nEncrypted Text: ");
    for(i=0;plaintxt[i]!='\0';i=i+2)
    {
        cipher1[j]=plaintxt[i];
        printf("%c",cipher1[j]);
        j++;
    }
    
    cipher1[j]='\0';
    for(i=1;i<strlen(plaintxt);i=i+2)
    {
        cipher2[k]=plaintxt[i];
        printf("%c",cipher2[k]);
        k++;
    }
    cipher2[k]='\0';
    j=0;
    k=0;
    printf("\nDecrypted Text: ");
    for(i=0;i<strlen(plaintxt);i++)
    {
        if(i%2==0)
        {
            decrypt[i]=cipher1[j];
            j++;
        }
        else
        {
            decrypt[i]=cipher2[k];
            k++;
        }
    }
    decrypt[i]='\0';
    printf("%s",decrypt);
}
