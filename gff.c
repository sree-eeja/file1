#include <stdio.h>
int main()
{
    int a[5],i;
    int even[5],odd[5];
    int e=0,d=0;
    int w=0;
    int b[5];
    int c[5];
    int j;
    int m;

    for(i=0;i<5;i++)
    {
        printf("enter the value");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            even[e]=a[i];
            e++;

        }
        else
        {
            odd[d]=a[i];
            d++;

        }
        }
        for(i=0;i<e;i++)
        {
            c[i]=even[i];
        }
        for(i=(e);i<5;i++)
        {
            c[i]=odd[w];
            w++;
        }
        for(i=0;i<5;i++)
        {
            printf("%d",c[i]);
        }
        printf("\n");
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(c[i]>c[j])
                {
                     m=c[i];
            c[i]=c[j];
            c[j]=m;

                }
            }
        }
        for(i=0;i<5;i++)
        {
            printf("%d",c[i]);
        }

        return(0);



    }
