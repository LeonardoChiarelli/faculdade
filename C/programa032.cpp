#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 1;
	
	while(i <= 10){
		printf("\n batata \n");
		i++;
	}
	
	return 0;
}
