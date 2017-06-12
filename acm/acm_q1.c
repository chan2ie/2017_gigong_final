#include <stdio.h>

int main(void) {

	int height, h = 1, i = 0;

	scanf("%d",&height);

	while(1){
		printf("시 ");
		i++;
		if(i == h){
			i = 0;
			h++;
			printf("\n");
		}
		if(h == height + 1){
			break;
		}
		printf("공 ");
		i++;
		if(i == h){
			i = 0;
			h++;
			printf("\n");
		}
		if(h == height + 1){
			break;
		}
		printf("조 ");
		i++;
		if(i == h){
			i = 0;
			h++;
			printf("\n");
		}
		if(h == height + 1){
			break;
		}
		printf("아 ");
		i++;
		if(i == h){
			i = 0;
			h++;
			printf("\n");
		}	
		if(h == height + 1){
			break;
		}
	}
	

	return 0;
}
