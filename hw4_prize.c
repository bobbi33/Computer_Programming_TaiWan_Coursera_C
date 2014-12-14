#include <stdio.h>

int main(){
  int i;
  int specialPrizeNumbers[3];
  int firstPrizeNumbers[3];
  int myNumber;
  int totalPrize = 0;

  for (i = 0; i < 3; i++){
    scanf("%d", &(specialPrizeNumbers[i]));
 //   printf("main: specialPrizeNumbers[%d] is %d \n",i,specialPrizeNumbers[i]);
  }
  for (i = 0; i < 3; i++){
    scanf("%d", &(firstPrizeNumbers[i]));
  //   printf("main: firstPrizeNumbers[%d] is %d \n",i, firstPrizeNumbers[i]);
  }

  while (scanf("%d", &myNumber) != EOF){
  	printf("Prize is %d\n", prize(specialPrizeNumbers, firstPrizeNumbers, myNumber));
    totalPrize += prize(specialPrizeNumbers, firstPrizeNumbers, myNumber);
    
  }

  printf("totalPrize is %d\n", totalPrize);
  return 0;
}  

int prize(int specialPrizeNumbers[3], int firstPrizeNumbers[3], int myNumber){
//	int prize = 0;
	int i;
	int n,m;
	
	for (m = 0; m < 3; m++){
//     printf("prize: specialPrizeNumbers[%d] is %d \n",m, specialPrizeNumbers[m]);
//     printf("prize: firstPrizeNumbers[%d] is %d \n",m, firstPrizeNumbers[m]);
//	 printf("prize: myNumber is %d\n",myNumber);
	 if(myNumber == specialPrizeNumbers[m] )
			return 2000000;
	}
	
	for (m = 0; m < 3; m++){
	 if(myNumber == firstPrizeNumbers[m])
			return 200000;
	}
	
	for (i = 0;i < 3; i++){
		 if((firstPrizeNumbers[i] - myNumber) % 10000000 == 0){
			return 40000;
//			printf("7 is %d\n",(firstPrizeNumbers[i] - myNumber) % 10000000);
		}
		if((firstPrizeNumbers[i] - myNumber) % 1000000 == 0){
			return 10000;
//			printf("6 is %d\n",(firstPrizeNumbers[i] - myNumber) % 1000000);
		}
		if((firstPrizeNumbers[i] - myNumber) % 100000 == 0){
			return 4000;
//			printf("5 is %d\n",(firstPrizeNumbers[i] - myNumber) % 100000);
		}
		if((firstPrizeNumbers[i] - myNumber) % 10000 == 0){
			return 1000;
//			printf("4 is %d\n",(firstPrizeNumbers[i] - myNumber) % 10000);
		}
		if((firstPrizeNumbers[i] - myNumber) % 1000 == 0){
			return 200;
//			printf("3 is %d\n",(firstPrizeNumbers[i] - myNumber) % 1000);
		}
  }
  return 0;
}
