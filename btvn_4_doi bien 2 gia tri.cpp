#include<stdio.h>
int main(){
	int x,y;
	printf("nhap vao 2 so x,y: \n");
	scanf("%d",&x);
	scanf("%d",&y);
	int m;
	m=x;
	x=y;
	y=m;
	printf("2 gia tri sau khi doi nguoc la :\n x=%d \n y=%d",x,y); 
} 
