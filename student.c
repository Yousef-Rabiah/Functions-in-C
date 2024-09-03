#include "student.h"

int largest(int array[], int length) {
  int largestNum = array[0];
  int i;
  for (i=0; i < length; i++){
    if (array[i]>largestNum){
      largestNum = array[i];
      }
  }
  return largestNum;
}

int sum(int array[], int length) {
  int numSum = 0;
  int i;
  for (i=0; i < length; i++){
      numSum += array[i];
  }
  return numSum;
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void rotate(int *a, int *b, int *c) {

  int temp=*c;

  	*c=*b;
	*b=*a;
	*a=temp;

}

void sort(int array[], int length) {
  int next,prev,i,j,k;
  j = length;
  for (i = 0; i < length-1; i++){
    for (k=0; k < j-1;k++){
    	if (array[k]>array[k+1]){
    		prev = array[k];
    		next = array[k+1];
    		array[k]= next;
    		array[k+1]= prev;
    	}
    }
    j--;
  }
}

void double_primes(int array[], int length) {
	int isPrime(int n){

	    if (n <= 1){
	        return 0;
	    }
	 
	    for (int i = 2; i < n; i++){
	        if (n % i == 0)
	            return 0;
	    }
	 
	    return 1;
	}
	
	for (int i = 0; i < length-1; i++){
		if (isPrime(array[i])==1){
			array[i]=array[i]*2;
		}
	}
}

void negate_armstrongs(int array[], int length) {

	int isArm(int num){

        int originalNum, remain,n,i;
        int power = 1, digits = 0,result=0;
        originalNum = num;
        n = num;


        while (n != 0) {
            n /= 10;
            ++digits;
        }


        for (originalNum = num; originalNum != 0; originalNum /= 10) {
               remain = originalNum % 10;
                //
              for (i = 0; i < digits; ++i){
                power *= remain;
            }
            result += power;
            power = 1;

        }


           if (result == num){

            return 1;
           }
           else{

               return 0;
           }
    }


	
	for (int i = 0; i < length; i++){
		if (array[i]>0){
			if (isArm(array[i])==1){
				int z=-1;
				array[i]*=(z);
			}
		}
	}
}
