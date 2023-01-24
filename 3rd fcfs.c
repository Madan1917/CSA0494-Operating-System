#include<stdio.h>
 
 int main()
 
{
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&n);
 
    printf("nEnter Process Burst Timen");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
 
    wt[0]=0;   
 
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
 
    printf("nProcessttBurst TimetWaiting TimetTurnaround Time");
 
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("nP[%d]tt%dtt%dtt%d",i+1,bt[i],wt[i],tat[i]);
    }
 
    avwt/=i;
    avtat/=i;
    printf("nnAverage Waiting Time:%d",avwt);
    printf("nAverage Turnaround Time:%d",avtat);
 
    return 0;
} 

output
Enter total number of processes(maximum 20):7
nEnter Process Burst TimenP[1]:2
P[2]:3
P[3]:4
P[4]:5
P[5]:4
P[6]:3
P[7]:6
nProcessttBurst TimetWaiting TimetTurnaround TimenP[1]tt2tt0tt2nP[2]tt3tt2tt5nP[3]tt4tt5tt9nP[4]tt5tt9tt14nP[5]tt4tt14tt18nP[6]tt3tt18tt21nP[7]tt6tt21tt27nnAverage Waiting Time:9nAverage Turnaround Time:13
--------------------------------
Process exited after 24.32 seconds with return value 0
Press any key to continue . . .
