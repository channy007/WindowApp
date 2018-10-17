#include <stdio.h>
#include <stdlib.h>

void hello(char *ch){
	int i=0;
	for(i=0;i<5;i++){
		printf("%s %d \n",ch,i);
	}
}

int main(int argc, char *argv[]) {
	hello("Hello idol wellcome"); 
	return 0;
}
