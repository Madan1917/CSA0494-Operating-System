#include<stdio.h>
#include<conio.h>

struct
{
    char fname[10];
} f[10];

main()
{
    int n,i,j,b[20],sb[20],t[20],x,c[20][20];
    printf("Enter no. of files: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter file %d name: ", i+1);
        scanf("%s", f[i].fname);
        printf("Enter no. of blocks occupied by file %s: ",f[i].fname);
        scanf("%d",&b[i]);
        printf("Enter the starting block of file %s: ",f[i].fname);
        scanf("%d",&sb[i]);
        t[i]=sb[i];
        for(j=0;j<b[i];j++)
            c[i][j]=sb[i]++;
    }
    
    printf("Filename\tStart block\tlength\n");
    for(i=0;i<n;i++)
        printf("%s\t %d \t%d\n",f[i].fname,t[i],b[i]);
    printf("blocks occupiedate:\n");
    
    for(i=0;i<n;i++)
    {
        printf("file name %s ",f[i].fname);
        for(j=0;j<b[i];j++)
            printf("\t%d",c[i][j]);
        printf("\n");