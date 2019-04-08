/*
  The program that calculates the value of PI. 
  There are two sum of series that 
  we can use to calculate the value of PI.

   Auther: Larry Liu 
*/

#include <stdio.h>

void main(void)
{
	int Choice_00;
	int Choice_000;
	int Choice_0;
	int	Choice_1;
	int	Choice_2;
	int Max_1_int;
	int Max_2_int;
	int k_int;
	int j_int;
	float Max_1;
	float Max_2;
	float PI_G;
	float PI_N;
	float k;
	float j;
	float n;
	float m;
	bool stop = false;
	
	
	printf("Calculate the value of PI using\n");
    printf("1 - Gregory-Leibniz series\n");
    printf("2 - Nilakantha series\n");
    printf("0 - Exit\n");
    printf("Your choice: ");
	scanf("%d", &Choice_00);
	

	Choice_0 = 0;
	Choice_1 = 1;
	Choice_2 = 2; 
	

	//Calculate the value of PI
	if (Choice_00 != Choice_0)
	do {
		m = 1;
		n = 1;
		PI_G = 0;
	    PI_N = 3;
	//1.Gregory-Leibniz series
	if (Choice_00 == Choice_1)
	{
		    printf("\nGregory-Leibniz series\n");
			//Enter the maximum number of terms
          	printf("Enter the maximum number of terms to use: ");
	        scanf("%f", &Max_1);
	
	        //Enter the k terms
	        printf("Show the intermediate result in every _?_terms: ");
	        scanf("%f", &k);

			Max_1_int = Max_1;
			
		while (k <= Max_1) {
		    PI_G = PI_G + (4 / n) ;
			{
		    printf("With %.0f terms, PI = %.10f\n", k,PI_G);
			}
		    k = n = n + 2;
		    PI_G = PI_G - (4 / n);
			{
		    printf("With %.0f terms, PI = %.10f\n", k,PI_G);
			}
		    k = n = n + 2;
		}
		stop = true;
	}
	//2.The Nilakantha series
	if (Choice_00 == Choice_2)
	{
		    printf("\nThe Nilakantha series\n");
			//Enter the maximum number of terms
	        printf("Enter the maximum number of terms to use: ");
	        scanf("%f", &Max_2);
	
	        //Enter the k terms
	        printf("Show the intermediate result in every _?_terms: ");
	        scanf("%f", &j);
		while (j <= Max_2) {
		    PI_N = PI_N + 4 / ((m+1)*(m+2)*(m+3));
			{
		    printf("With %.0f terms, PI = %.10f\n", j,PI_N);
			}
		    j = m = m + 1;
		    PI_N = PI_N - 4 / ((m+1)*(m+2)*(m+3));
			{
		    printf("With %.0f terms, PI = %.10f\n", j,PI_N);
			}
		    j = m = m + 1;
		}
		stop = true;
	}
	
	printf("Calculate the value of PI using\n");
    printf("1 - Gregory-Leibniz series\n");
    printf("2 - Nilakantha series\n");
    printf("0 - Exit\n");
    printf("Your choice: ");
	scanf("%d", &Choice_000);
	}while (Choice_000 != Choice_0);
	if (Choice_000 = Choice_0)
	    printf("\n Bye Bye\n");

	else 
	    printf("\n Bye Bye\n");	
}

