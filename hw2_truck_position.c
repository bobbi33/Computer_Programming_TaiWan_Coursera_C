#include <stdio.h>

int main(void) {
	int t = 0,t0 =0, change= 0, dir = 0;
	int x = 0,y = 0;
	
	while(change != 3){
		scanf("%d\n%d\n",&t,&change);
		
		if(dir == 0) {
			x = x;
			y = y + 10*(t-t0);
		}
		else if (dir == 1){
			x = x + 10*(t-t0);
			y = y;
		}
		else if(dir == 2) {
			x = x;
			y = y- 10*(t-t0);
		}
		else if(dir == 3){
			x = x - 10*(t-t0);
			y= y;
		}
		
		if(change == 1)
			dir = (dir + 3)%4;
		else if(change == 2)
			dir = (dir + 1)%4;
			
		t0 =t;
	}
	printf("%d %d",x,y);
	return 0;
}
