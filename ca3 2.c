#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int x,i;
    char *ptr, a;

    printf("how many characters do you want to enter?:");
    scanf("%d", &x);
    ptr=(char*)calloc(x, sizeof(char));
    if(ptr!=NULL)
    {
        printf("\n enter the char array:");
        for(i=0;i<x;i++)
        {
            scanf(" %c", ptr+i);
        }
        printf("\nentered array is:");
        for(i=0;i<x; i++)
        {
            printf("%c\t", ptr[i]);

        }
        //lowervowel=(ptr[i]=='a'| ptr[i]=='e'| ptr[i]=='i'| ptr[i]=='o'| ptr[i]=='u');
        //uppervowel=(ptr[i]=='A'| ptr[i]=='E'| ptr[i]=='I'| ptr[i]=='O'| ptr[i]=='U');

        for(i=0;i<x; i++)
        {
            if(ptr[i]=='a'| ptr[i]=='e'| ptr[i]=='i'| ptr[i]=='o'| ptr[i]=='u'| ptr[i]=='A'| ptr[i]=='E'| ptr[i]=='I'| ptr[i]=='O'| ptr[i]=='U')
            {
                ptr[i]=ptr[i] +1;
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
