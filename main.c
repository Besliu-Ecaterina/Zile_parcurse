#include <stdio.h>
     int n, i, rmax, rmin;
     int a[30], max, min;
               int main()
                {
                  printf("dati n= ");
                  scanf("%d", &n);
               // }
              // while ((n<1)||(n>20));
               for(i=0; i<n; i++)
                {
                  printf("a(%d)=", i);
                  scanf("%d",&a[i]);
               }
               max=a[0]; rmax=0;
               min=a[0]; rmin=0;
   for(i=0; i<n; i++)
    {
      if (a[i] > max)
       {
         max=a[i]; rmax=i;
       }              
      if (a[i] < min)
       {
         min=a[i]; rmin=i;
       }
    }                 
               printf("maxumul este %d si se afla pe pozitia %d\n", max, rmax);
               printf("minimul este %d si se afla pe pozitia %d", min, rmin);
return 0;
            }

