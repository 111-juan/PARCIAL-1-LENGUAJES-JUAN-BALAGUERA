import time

suma = 0
inicio = time.time()

for i in range(1, 100000001):
    suma += i

fin = time.time()
tiempo = fin - inicio

print(f"Resultado: {suma}")
print(f"Tiempo de ejecucion en Python: {tiempo:.6f} segundos")

