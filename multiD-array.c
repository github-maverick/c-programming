	#include <stdio.h>

	int main() {
		float average;
        int grades[2][5], i, j;    //declaring 2D array
        char * subject[2] = {"Physics", "Mathematics"};   // char * is used to declare a word

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		for (i = 0; i < 2; i++) {
			average=0;
            for (j = 0; j < 5 ; j++) {
				average += grades[i][j];
			}
			average /= 5;
			printf("The average marks obtained in subject %s is: %.2f\n", subject[i] , average);   //.2f denotes two decimal places after the decimal
        }

		return 0;
	}
