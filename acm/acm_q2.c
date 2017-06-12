#include <stdio.h>

void jiyoung_sort(int num[], int len);
void swap(int *a, int *b);

int main(void) {

	FILE *input;
	int num[100] = {0}, i, count = 0;

	input = fopen("input.txt", "r");

	for( i = 0; i < 100; i++){
		fscanf(input, "%d ", &num[i]);
		if(num[i] == 0){
			break;
		}
		count++;
	}
	
	for(i = 0; i <= count; i++){
		printf("%d ", num[i]);
	}
	printf("\n");

	jiyoung_sort(num, count);

	for(i = 0; i < count; i++){
		printf("%d ",num[i]);
	}
	printf("\n");

	fclose(input);

	return 0;
}

void jiyoung_sort(int num[], int len){
	int i, j, count = 0;

	for( i = 0; i < len; i++){
		if(num[i] % 2 == 0){
			for(j = i; j < len; j++){
				if(num[j] % 2 != 0){
					swap(&num[i], &num[j]);
					break;
				}
			}
			if(j == len){
				break;
			}
		}
	}

	for(i = 0; i < len; i++){
		if(num[i] % 2 == 0){
			break;
		}
		count++;
		//count is number of odd numbers.
	}

	for(i = 0; i < count; i++){
		for(j = 0; j < count - 1; j++){
			if(num[j] < num[j + 1]){
				swap(&num[j], &num[j + 1]);
			}
		}
	}
	for(i = count; i < len; i++){
		for(j = count; j < len - 1; j++){
			if(num[j] > num[j + 1]){
				swap(&num[j], &num[j + 1]);
			}
		}
	}
}

void swap(int *a, int *b){
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
