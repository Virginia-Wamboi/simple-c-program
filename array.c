#include <stdio.h>
int main()
{
    float mark[5];
    int counter;double sum,avg;
    for (counter=0;counter<=4;counter++)
    {
        printf("\n key in value%d:",counter+1);
        scanf("%f",&mark[counter]);
    }
    for(counter=0;counter<=4;counter++)
    {
        sum+=mark[counter];
    }
    avg=sum/5;
    printf("sum is:%f",sum);
    printf("mean is:%f",avg);
    return 0;
}
