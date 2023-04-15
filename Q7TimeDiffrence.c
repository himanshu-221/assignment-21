/*Write a program to calculate the difference between two time periods*/
#include<stdio.h>
#include<stdlib.h>

struct time{
    int hr;
    int min;
    int sec;
};
struct time t();
struct time showtime(struct time t4);
struct time sub(struct time t5,struct time t6);
int main()
{
    struct time t1,t2,t7;
    printf("Enter time 1\n");
    t1=t();
    printf("Enter time 2\n");
    t2=t();
    showtime(t1);
    showtime(t2);
    printf("\n\nDiffrence Between Time 1 and Time 2 is");
    t7=sub(t1,t2);
    showtime(t7);
}
struct time t()
{
    struct time t3;
    int h,m,s,r1,r2;
    printf("Enter time in HR,MIN and SEC\n");
    scanf("%d%d%d",&h,&m,&s);
    if(m>60)
    {
        r1=m/60;
        h=h+r1;
        m=m%60;
    }
    
    if(s>60)
    {
        r2=s/60;
        m+=r2;
        s=s%60;
    }
    t3.hr=h;
    t3.min=m;
    t3.sec=s;
    return t3;
}
struct time showtime(struct time t4)
{
    printf("\nTime\n");
    printf("hr=%d min=%d sec=%d",t4.hr,t4.min,t4.sec);
}
struct time sub(struct time t5,struct time t6)
{
    struct time timediff;
    int m=0,n=0;
    if (t5.hr>t6.hr)
        m=1;
    else if(t5.hr<t6.hr)
        n=1;
    else if(t5.min>t6.min)
        m=1;
    else if(t5.min<t6.min)
        n=1;
    else if(t5.sec>t6.sec)
        m=1;
    else if(t5.sec<t6.sec)
        n=1;
    else{
        timediff.hr=0;
        timediff.min=0;
        timediff.sec=0;
    }    

    if(m==1)
    {
        timediff.hr=t5.hr-t6.hr;
        timediff.min=t5.min-t6.min;
        timediff.sec=t5.sec-t6.sec;
    }
    if(n==1)
    {
        timediff.hr=t6.hr-t5.hr;
        timediff.min=t6.min-t5.min;
        timediff.sec=t6.sec-t5.sec;
    }
    return timediff;
}



















