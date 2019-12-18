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
if (a<b) { 
   if (a<c) { 
     printf (" min = %f \n",a);
   }else{
     printf (" min = %f \n",c);
     }
}else{
   if (b<c) {
		printf (" min =%f \n",b);
		}else{
		printf (" min =%f \n",c);
	        }
	   }
}
