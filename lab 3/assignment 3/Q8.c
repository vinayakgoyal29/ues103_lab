//Write a program to read in 5 numbers and compute the average, max, min, standard deviation.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,max,min,avg,stdev;
      printf("\nEnter any Five Numbers:");
      scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
      max=a;
      if(max<b)
      max=b;
      if(max<c)
      max=c;
      if(max<d)
      max=d;
      if(max<e)
      max=e;
      printf("MAX:%f",max);
      min=a;
      if(min>b)
      min=b;
      if(min>c)
      min=c;
      if(min>d)
      min=d;
      if(min>e)
      min=e;
      printf("\nMIN:%f",min);
      avg=(a+b+c+d+e)/5;
      printf("\nAVERAGE:%f",avg);
      stdev=sqrt(pow((a-avg),2))+pow((b-avg),2)+pow((c-avg),2)+pow((d-avg),2)+pow((e-avg),2)/2;
      printf("\nSTANDARD DEVIATION:%f\n",stdev);
}

