#include<stdio.h>


int main()
{
	char fname[100] = "time.log";
	FILE* fp;
	int min, sec;
	int sum1, sum2,sum3;
	float sum4;
	int max1,n;
	int sum5,sum6,max;
	n = 0;	

	fp = fopen(fname, "r");
	
	if (fp == NULL) {
		printf("Failed to open file\n");
		return 0;
	}

	while(!feof(fp)) 
		{
		fscanf(fp, "(%d:%d)\n", &min, &sec);
		printf("min = %d, sec = %d\n", min, sec);
		n = n+1;
		sum1 +=min;
		sum2 +=sec;
		sum5 = min * 60;
		sum6 = sec + sum5;
		if (sum6 > max)
			max = sum6;
			
				
		// get min, max, avg access time 

	}
	sum1 = sum1 * 60;
	sum3 = sum1+ sum2;
	sum4 = sum3 / n;
	printf("평균 접속시간은 %lf초입니다.\n", sum4);
	printf("가장 오래 접속한 경우의 시간은 %d초입니다.\n", max);
	return 0;
}

