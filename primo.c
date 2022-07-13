#include <stdio.h>

int primo(int num);

int main()
{
int n, x;
	do{
		scanf("%d", &n);
	}while (n>10000000);
	x = primo(n);
		
		if (x==2 && n!=1){
			printf ("PRIMO");}
		else{
			printf("!PRIMO");}
	
	return 0;    		
} 
int primo(int num)
{ 		int i;
		
	
	
  		for (i=2;i<num;i++){
			if (num % i== 0){
				return 0;
			}}
		return 2;

}
