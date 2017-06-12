#include <stdio.h>

int main(void) {

	FILE *yup, *hair;
	char yp, hr;
	
	yup = fopen("intput_yup.txt", "r");
	hair = fopen("hair.txt", "r");

	while(1){
		while(1){
			yp = fgetc(yup);
			if(yp == 'A' || yp == 'T' || yp == 'C' || yp == 'G' || yp == EOF){
				break;
			}
		}
		while(1){
			hr = fgetc(hair);
			if(hr == 'A' || hr == 'T' || hr == 'C' || hr == 'G' || hr == EOF){
				break;
			}
		}
		
		if(yp == hr){
			if( yp == EOF && hr == EOF){
				printf("Hearth stone!!!!!!!!!!\n");
				break;
			}
		}
		else{
			printf("Killed!\n");
			break;
		}
	}
	fclose(yup);
	fclose(hair);
	return 0;
}
