#include<stdio.h>
void main()
{ 
    char a[10000],d[10000];
    int b=0,c=0,i;
    printf("\nenter two strings\n");
    scanf("%s%s",&a,&d);
    for(i=0;a[i]!='\0';i++)
    {
    b+=a[i];
    }
    for(i=0;d[i]!='\0';i++)
    {
    c+=d[i];
    }
    if(b==c)
    printf("Strings are equal :%s",a);
    else if(b>c)
    printf("Bigger string : %s",a);
    else
    printf("Bigger string : %s",d);
}
