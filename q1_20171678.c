#include <stdio.h>

int n[4] = {0}, j = 0, k = 0;

int numofcoins();

int main(void){

	int num = 1000;
	int price;
	int i = 0;

	printf("Input price: ");

	scanf("%d",&price);

	for(i = 0; i < 4; i++){
		n[i] = price / num;
		price = price % num;
		num /= 10;
	}

	printf("Total number of coin to pay: %d\n",numofcoins());

	return 0;
}

int numofcoins(){
	int s;

	while(n[j] >= 1 && n[j+1] <= 40){
		n[j] -= 1;
		n[j+1] += 10;
	}

	j++;

	if(j == 3 && k == 3){
		return n[0] + n[1] + n[2] + n[3];
	}
	else if(j == 3 && k < 3) {
		k++;
		j = 0;
		s = numofcoins();
		return s;
	}
	else {
		s  =numofcoins();
		return s;
	}
}
