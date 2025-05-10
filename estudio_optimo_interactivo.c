
#include <stdio.h>

#define MAX_N 100
#define MAX_H 100

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n, H;
    int h[MAX_N], v[MAX_N];
    int dp[MAX_N + 1][MAX_H + 1];

    // Entrada del usuario
    printf("Ingrese el número de materias: ");
    scanf("%d", &n);

    printf("Ingrese el total de horas disponibles para estudiar: ");
    scanf("%d", &H);

    for (int i = 1; i <= n; i++) {
        printf("\nMateria %d:\n", i);
        printf("  Horas mínimas necesarias: ");
        scanf("%d", &h[i]);
        printf("  Valor o importancia (puntos): ");
        scanf("%d", &v[i]);
    }

    // Inicializar dp en 0
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= H; j++)
            dp[i][j] = 0;

    // Llenar la tabla
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= H; j++) {
            if (j >= h[i])
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - h[i]] + v[i]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    // Imprimir la matriz
    printf("\nTabla DP:\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= H; j++) {
            printf("%2d ", dp[i][j]);
        }
        printf("\n");
    }

    printf("\nValor máximo alcanzado: %d\n", dp[n][H]);

    return 0;
}
