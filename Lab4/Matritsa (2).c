#include<stdio.h>
#include<stdlib.h>
int main()
{
    int M = 2;
    int N = 3;
    int a[M][N];
		int i, j;
		
		int ch, n1, n2;
		for (i = 0; i<M; i++) {
			for (j = 0; j<N; j++) {
				scanf("%5d", &a[i][j]);
			}
		}
		printf("\n");
		for (i = 0; i<M; i++) {
			for (j = 0; j<N; j++) {
				printf("%5d\t", a[i][j]);
			}
			printf("\n");
		}
 printf("Поміняти стовпці: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    for (i=0; i<M; i++) {
        ch = a[i][n1-1];
        a[i][n1-1] = a[i][n2-1];
        a[i][n2-1] = ch;
    }
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
