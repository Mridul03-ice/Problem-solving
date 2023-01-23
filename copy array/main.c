#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[1000] ,n=0,mx,mn;
    int b[1000], i;
    scanf("%d",&n);
    for(int i = 0; i < n; ++i) {
     scanf("%d", &a[i]);
  }

    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    printf("The first array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nThe second array is :");
    for (i = 0; i < n; i++) {
            if(a[i]>30){
                    printf("%d ", b[i]);

    }
            mx = b[i];
            mn = b[i];

    for(i=1; i<n; i++)
    {
        if(b[i]>mx)
        {
            mx = b[i];
        }


        if(b[i]<mn)
        {
            mn = b[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);

}
  return 0;
}
