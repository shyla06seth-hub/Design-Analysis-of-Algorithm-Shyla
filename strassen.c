#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];
    int i, j, k;

    printf("Enter matrix A:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&A[i][j]);

    printf("Enter matrix B:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&B[i][j]);

    // Traditional method
    for(i=0;i<2;i++)
        for(j=0;j<2;j++) {
            C[i][j]=0;
            for(k=0;k<2;k++)
                C[i][j] += A[i][k]*B[k][j];
        }

    printf("Traditional Result:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    // Strassen method
    int p1 = (A[0][0]+A[1][1])*(B[0][0]+B[1][1]);
    int p2 = (A[1][0]+A[1][1])*B[0][0];
    int p3 = A[0][0]*(B[0][1]-B[1][1]);
    int p4 = A[1][1]*(B[1][0]-B[0][0]);
    int p5 = (A[0][0]+A[0][1])*B[1][1];
    int p6 = (A[1][0]-A[0][0])*(B[0][0]+B[0][1]);
    int p7 = (A[0][1]-A[1][1])*(B[1][0]+B[1][1]);

    C[0][0] = p1+p4-p5+p7;
    C[0][1] = p3+p5;
    C[1][0] = p2+p4;
    C[1][1] = p1-p2+p3+p6;

    printf("Strassen Result:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    return 0;
}