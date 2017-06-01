#include <stdio.h>

char magic_square[99][396] = {0};

void create_magic_square(int n, char magic_square[99][396]);
void print_magic_square(int n, char magic_square[99][396]);

int main(void) {
	int n;

	printf("Enter size of magic square: ");
	
	do {
		scanf("%d",&n);
		if (n % 2 == 0){
			printf("size should be a odd number\n");
		}
	}while(n % 2 == 0);

	create_magic_square(n, magic_square);

	return 0;
}

void create_magic_square(int n, char magic_square[99][396]){
	
	int i, j, k, num, temp;

	magic_square[0][4 * (n / 2) + 3] = '1';
	
	for(i = 0, j = n / 2, num = 2; num <= n * n; num++){
		temp = num;
		i--;
		j++;

		if(i < 0){
			i = n + i;
		}
		if(j >= n){
			j = j - n;
		}
		if(j < 0){
			j = n + j;
		}
		if(i >= n){
			i = i - n;
		}
		
		if(magic_square[i][4 * j + 3] != 0){
			i += 3;
			j -= 2;
			num--;
		}
		else {
			for(k = 3 ; temp > 0 ; k--){
				magic_square[i][j * 4 + k] = temp % 10 + '0';
				temp /= 10;
			}
		}
	}
	
	print_magic_square(n , magic_square);
}

void print_magic_square(int n, char magic_square[99][396]){
	
	int i, j;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < 4*n; j++){
			if(magic_square[i][j] <  '0'){
				magic_square[i][j] = ' ';
			}
		}
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < 4 * n; j++){
			printf("%c",magic_square[i][j]);
			if(j % 4 == 3){
				printf(" ");
			}
		}
		printf("\n");
	}

}
