#include <stdio.h>
int main () {
 float a;
	printf (" nhap a= \n");
	scanf("%f",&a);
 float b;
    printf (" nhap b= \n");
	scanf("%f",&b);
 float c;
    printf (" nhap c= \n");
	scanf("%f",&c);
if (a>b) { 
   if (a>c) { 
     printf (" max = %f \n",a);
   }else{
     printf (" max = %f \n",c);
     }
}else{
   if (b>c) {
		printf (" max =%f \n",b);
		}else{
		printf (" max =%f \n",c);
	        }
	   }
}
