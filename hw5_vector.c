#include 
#define N 256

void upper_solver(double *A, double *x, double *y, int n);
int main(void)
{
    int i, j;
    int n; 
    double A[N * (N + 1) / 2];
    double *aptr = A;
    double x[N];
    double y[N];
    scanf("%d", &n);
    for ( i = 0 ; i < n ; i++ )
        for ( j = i ; j < n ; j++ ) {
            scanf("%lf", aptr);
            aptr++;
        }
    for ( i = 0 ; i < n ; i++ )
        scanf("%lf", &(y[i]));
		
    upper_solver(A, x, y, n);

    for ( i = 0 ; i < n ; i++ )
        printf("%lf ", x[i]);

    return 0;
}

void upper_solver(double *A, double *x, double *y, int n){
	int i;
	for(i= n; i>=0;i--){
		A*x[i] = y[i];
		(&A)++;
		return x;
	}



}
