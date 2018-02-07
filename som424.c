#include<stdio.h>
void main()
{ 
    char a[10000],d[10000];
    int b=0,i,j,c=0;
    printf("\nenter two strings\n");
    scanf("%s%s",&a,&d);
    for(i=0;a[i]!='\0';i++)
    {
    b+=a[i];
    }
    for(j=0;a[j]!='\0';j++)
    {
    c+=a[j];
    }
    if(b==c)
    printf("%s",a);
    else if(b>c)
    printf("%s",a);
    else
    printf("%s",c);
}
