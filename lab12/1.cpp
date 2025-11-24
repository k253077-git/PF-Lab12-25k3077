#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p;
    int i, j, k;

    printf("Enter rows of A (m): ");
    scanf("%d", &m);
    printf("Enter columns of A / rows of B (n): ");
    scanf("%d", &n);
    printf("Enter columns of B (p): ");
    scanf("%d", &p);

    int **A = (int **)malloc(m * sizeof(int *));
    int **B = (int **)malloc(n * sizeof(int *));
    int **C = (int **)malloc(m * sizeof(int *));
    
    for (i = 0; i < m; i++) A[i] = (int*)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++) B[i] =(int*) malloc(p * sizeof(int*));
    for (i = 0; i < m; i++) C[i] = (int*)malloc(p * sizeof(int*));

    printf("Enter elements of A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of B:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Product matrix C:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    for (i = 0; i < m; i++) free(A[i]);
    for (i = 0; i < n; i++) free(B[i]);
    for (i = 0; i < m; i++) free(C[i]);

    free(A);
    free(B);
    free(C);

    return 0;
}

