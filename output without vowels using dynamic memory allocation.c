///printing the final string entered by user without any vowels using pointers

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int x,i;
    char *ptr, a; ///declaring pointer ptr

    printf("how many characters do you want to enter?:"); //taking length or size of char array
    scanf("%d", &x);
    ptr=(char*)calloc(x, sizeof(char)); //deallocating by calloc
    if(ptr!=NULL)  //checking if memory allocation is successful
    {
        printf("\n enter the char array:");
        for(i=0;i<x;i++)
        {
            scanf(" %c", ptr+i); //taking char input from user
        }
        printf("\nentered array is:");
        for(i=0;i<x; i++)
        {
            printf("%c\t", ptr[i]); //printing the entered array

        }
        //lowervowel=(ptr[i]=='a'| ptr[i]=='e'| ptr[i]=='i'| ptr[i]=='o'| ptr[i]=='u');
        //uppervowel=(ptr[i]=='A'| ptr[i]=='E'| ptr[i]=='I'| ptr[i]=='O'| ptr[i]=='U');

        for(i=0;i<x; i++)  ///giving the condition to identify vowels using 'or'
        {
            if(ptr[i]=='a'| ptr[i]=='e'| ptr[i]=='i'| ptr[i]=='o'| ptr[i]=='u'| ptr[i]=='A'| ptr[i]=='E'| ptr[i]=='I'| ptr[i]=='O'| ptr[i]=='U')
            {
                ptr[i]=ptr[i] +1; ///increasing the ascii values of the vowels entered inorder to print
            }
        }
        printf("\nnew array is:");
        for(i=0;i<x;i++)
        {
            printf("%c\t", ptr[i]);
        }
        return 0;
        }
}
