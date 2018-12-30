#include<stdio.h>

int main(){
	
	int a,b,hasil;
	printf("program pembagian tidak dengan NOL\n");
	printf("masukan bilangan yang akan di bagi:");
	scanf("%d",&a);
	printf("masukan bilangan pembagi:");
	scanf("%d",&b);
	
	if(b==0){
		printf("bilangan pembagi tidak boleh NO;L\n");
	}
	else{
		hasil=a/b;
		printf("hasilnya adalah : %d",hasil);
	}
	return 0;
}
