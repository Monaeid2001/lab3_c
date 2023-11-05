#include <stdio.h>

int main()
{
    int a[2000],i=0,n=0,min=0,max=0;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    printf("Enter elements in array : ");
    for(; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];
		   if(max<a[i])
		    max=a[i];
    }
     printf("minimum of array is : %d\n",min);
          printf("maximum of array is : %d",max);


    return 0;
}
