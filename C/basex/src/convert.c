#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "convert.h"

void print_back(long int arr[],int len)
{
	if (len == -1) return;
	printf("%ld",arr[len]);
	print_back(arr,--len);
}

void convert_base(long int source,int from, int to) {

	long int temp,converted=0,rev,convert_arr[100]={0},cnt = -1;
		temp = source;
		if(from < to ){
			while(temp) {
				rev = temp % 10;
				temp/=10;
				converted += rev * pow(from,++cnt);
			}
			printf("%ld\n",converted);
		}
		else {

			while(temp) {
				rev = temp % to;
				temp/=to;
				convert_arr[++cnt] = rev;
			}
			print_back(convert_arr,cnt);
		}
	
}
