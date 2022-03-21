def tablaMultiplicar(n):
    print(f"Tabla de multiplicar del {n}")
    for i in range(0, 13, 1):
        print(f"{n} x {i} = {i*n}")
    
    return "Fin del programa"

n=int(input("Digite un  numero: "))
print(tablaMultiplicar(n))