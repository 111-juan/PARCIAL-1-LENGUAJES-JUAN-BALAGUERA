#include <stdio.h>
#include <time.h>

int main() {
    long long suma = 0;
    clock_t inicio = clock();

    for (long long i = 1; i <= 100000000; i++) {
        suma += i;
    }

    clock_t fin = clock();
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("Resultado: %lld\n", suma);
    printf("Tiempo de ejecucion en C: %f segundos\n", tiempo);

    return 0;
}

