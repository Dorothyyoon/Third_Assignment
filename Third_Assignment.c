#include<stdio.h>
#include<ctype.h>
void main()
{
    char array[100];
    int i,index=0,op;
    printf("\n Enter a sentence(ending with '$') : ");
    array[0]='a';
    for(i=1;array[i-1]!='$';i++)
    {
        scanf("%c",&array[i]);
        index++;
    }
    printf("\nThis is your sentence : ");
    for(i=1;i<index;i++)
        printf("%c",array[i]);
    printf("\n\n ***Which Function do you want to perform?***\n");
    printf("\n Wanna Know no. of character you enter        Press 1");
    printf("\n Wanna connect with another sentence          Press 2");
    printf("\n Wanna convert the character to uppercase     Press 3");
    printf("\n Wanna convert the character to lowercase     Press 4");
    printf("\n\n Enter your option : ");
    scanf("%d",&op);
    switch(op)
    {
        case 1: printf("\n No. of character you enter is %d",index-1); break;
        case 2: printf("\n Enter another sentence(ending with '$') : ");
                int t=index;
                for(i=index;array[i-1]!='$';i++)
                {
                    scanf("%c",&array[i]);
                    t++;
                }
                printf("\nThis is your sentence : ");
                for(i=1;i<t-1;i++)
                    printf("%c",array[i]);
                break;
        case 3: printf("\n Uppercase character are : ");
                for(i=1;i<index;i++)
                {
                    printf("%c",toupper(array[i]));
                }
                break;
        case 4: printf("\n Lowercase character are : ");
                for(i=1;i<index;i++)
                {
                    printf("%c",tolower(array[i]));
                }
                break;
        default: printf("\n Invalid option!!"); break;
    }
    printf("\n\n GoodBye!!");
}
