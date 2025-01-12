{\rtf1\ansi\ansicpg1252\cocoartf2820
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
\
int main() \{\
    int opcion, i, n, x, dia, mes, anio, edad, suma, num, contador, esPrimo;\
    float a, b, c, d, resultado;\
    int numero, factorial, fib1, fib2, fibActual;\
\
    do \{\
        // Mostrar el men\'fa\
        printf("\\n--- MENU DE OPCIONES ---\\n");\
        printf("1. Perimetro de un pentagono\\n");\
        printf("2. Area de un trapecio\\n");\
        printf("3. Volumen de una esfera\\n");\
        printf("4. Convertir de F a K\\n");\
        printf("5. Calificaciones Quimica II\\n");\
        printf("6. Mayor o menor de edad\\n");\
        printf("7. Numero mayor o igual\\n");\
        printf("8. Edad segun fecha de nacimiento\\n");\
        printf("9. Producto defectuoso\\n");\
        printf("10. Vocal o consonante\\n");\
        printf("11. Dias de un mes\\n");\
        printf("12. Numeros en orden\\n");\
        printf("13. Promedio de 30 numeros\\n");\
        printf("14. Primeros 30 multiplos\\n");\
        printf("15. Factorial de un numero\\n");\
        printf("16. Sumatoria de multiplos\\n");\
        printf("17. Serie Fibonacci\\n");\
        printf("18. Numero primo o no\\n");\
        printf("19. Divisores de un numero\\n");\
        printf("20. Salir\\n");\
\
        // Leer la opci\'f3n seleccionada\
        printf("Seleccione una opcion: ");\
        scanf("%d", &opcion);\
\
        switch (opcion) \{\
            case 1:\
                // Perimetro de un pentagono\
                printf("Ingrese la longitud de un lado: ");\
                scanf("%f", &a);\
                resultado = 5 * a;\
                printf("El perimetro del pentagono es: %.2f\\n", resultado);\
                break;\
\
            case 2:\
                // Area de un trapecio\
                printf("Ingrese la base mayor: ");\
                scanf("%f", &a);\
                printf("Ingrese la base menor: ");\
                scanf("%f", &b);\
                printf("Ingrese la altura: ");\
                scanf("%f", &c);\
                resultado = ((a + b) * c) / 2;\
                printf("El area del trapecio es: %.2f\\n", resultado);\
                break;\
\
            case 3:\
                // Volumen de una esfera\
                printf("Ingrese el radio de la esfera: ");\
                scanf("%f", &a);\
                resultado = (4.0 / 3.0) * 3.1416 * a * a * a;\
                printf("El volumen de la esfera es: %.2f\\n", resultado);\
                break;\
\
            case 4:\
                // Convertir de F a K\
                printf("Ingrese la temperatura en Fahrenheit: ");\
                scanf("%f", &a);\
                resultado = (a - 32) * 5 / 9 + 273.15;\
                printf("La temperatura en Kelvin es: %.2f\\n", resultado);\
                break;\
\
            case 5:\
                // Calificaciones Quimica II\
                printf("Ingrese las 3 calificaciones: ");\
                scanf("%f %f %f", &a, &b, &c);\
                resultado = (a + b + c) / 3;\
                if (resultado >= 60) \{\
                    printf("No necesita hacer ordinario.\\n");\
                \} else \{\
                    printf("Necesita hacer ordinario.\\n");\
                \}\
                break;\
\
            case 6:\
                // Mayor o menor de edad\
                printf("Ingrese la edad: ");\
                scanf("%d", &n);\
                if (n >= 18) \{\
                    printf("Es mayor de edad.\\n");\
                \} else \{\
                    printf("Es menor de edad.\\n");\
                \}\
                break;\
\
            case 7:\
                // Numero mayor o igual\
                printf("Ingrese dos numeros: ");\
                scanf("%d %d", &x, &n);\
                if (x > n) \{\
                    printf("El mayor es: %d\\n", x);\
                \} else if (n > x) \{\
                    printf("El mayor es: %d\\n", n);\
                \} else \{\
                    printf("Ambos son iguales.\\n");\
                \}\
                break;\
\
            case 8:\
                // Edad segun fecha de nacimiento\
                printf("Ingrese el dia, mes y anio de nacimiento: ");\
                scanf("%d %d %d", &dia, &mes, &anio);\
                printf("Ingrese el anio actual: ");\
                scanf("%d", &n);\
                edad = n - anio;\
                printf("Tiene %d anios.\\n", edad);\
                break;\
\
            case 9:\
                // Producto defectuoso\
                printf("Ingrese el numero de serie: ");\
                scanf("%d", &n);\
                if (n >= 5300 && n <= 6800) \{\
                    printf("El producto esta defectuoso.\\n");\
                \} else \{\
                    printf("El producto NO esta defectuoso.\\n");\
                \}\
                break;\
\
            case 10:\
                // Vocal o consonante\
                printf("Ingrese una letra: ");\
                scanf(" %c", &numero);\
                if (numero == 'a' || numero == 'e' || numero == 'i' || numero == 'o' || numero == 'u' ||\
                    numero == 'A' || numero == 'E' || numero == 'I' || numero == 'O' || numero == 'U') \{\
                    printf("Es una vocal.\\n");\
                \} else \{\
                    printf("Es una consonante.\\n");\
                \}\
                break;\
\
            case 11:\
                // Dias de un mes\
                printf("Ingrese el numero de mes (1-12): ");\
                scanf("%d", &n);\
                if (n == 2) \{\
                    printf("Tiene 28 o 29 dias.\\n");\
                \} else if (n == 4 || n == 6 || n == 9 || n == 11) \{\
                    printf("Tiene 30 dias.\\n");\
                \} else \{\
                    printf("Tiene 31 dias.\\n");\
                \}\
                break;\
\
            case 12:\
                // Numeros en orden\
                printf("Ingrese tres numeros: ");\
                scanf("%d %d %d", &a, &b, &c);\
                if (a > b) \{ int temp = a; a = b; b = temp; \}\
                if (a > c) \{ int temp = a; a = c; c = temp; \}\
                if (b > c) \{ int temp = b; b = c; c = temp; \}\
                printf("Los numeros ordenados son: %d %d %d\\n", a, b, c);\
                break;\
\
            case 13:\
                // Promedio de 30 numeros\
                suma = 0;\
                for (i = 0; i < 30; i++) \{\
                    printf("Ingrese un numero: ");\
                    scanf("%d", &num);\
                    suma += num;\
                \}\
                printf("El promedio es: %f\\n", (float)suma / 30);\
                break;\
\
            case 14:\
                // Primeros 30 multiplos\
                printf("Ingrese un numero: ");\
                scanf("%d", &num);\
                for (i = 1; i <= 30; i++) \{\
                    printf("%d\\n", i * num);\
                \}\
                break;\
\
            case 15:\
                // Factorial de un numero\
                printf("Ingrese un numero: ");\
                scanf("%d", &num);\
                factorial = 1;\
                for (i = 1; i <= num; i++) \{\
                    factorial *= i;\
                \}\
                printf("El factorial es: %d\\n", factorial);\
                break;\
\
            case 16:\
                // Sumatoria de multiplos\
                printf("Ingrese un numero: ");\
                scanf("%d", &num);\
                suma = 0;\
                for (i = 1; i <= 580; i++) \{\
                    suma += i * num;\
                \}\
                printf("La sumatoria es: %d\\n", suma);\
                break;\
\
            case 17:\
                // Serie Fibonacci\
                printf("Ingrese el numero de elementos: ");\
                scanf("%d", &n);\
                fib1 = 0; fib2 = 1;\
                printf("%d %d ", fib1, fib2);\
                for (i = 3; i <= n; i++) \{\
                    fibActual = fib1 + fib2;\
                    printf("%d ", fibActual);\
                    fib1 = fib2;\
                    fib2 = fibActual;\
                \}\
                printf("\\n");\
                break;\
\
            case 18:\
                // Numero primo o no\
                printf("Ingrese un numero: ");\
                scanf("%d", &num);\
                esPrimo = 1;\
                for (i = 2; i <= num / 2; i++) \{\
                    if (num % i == 0) \{\
                        esPrimo = 0;\
                        break;\
                    \}\
                \}\
                if (esPrimo && num > 1) \{\
                    printf("Es primo.\\n");\
                \} else \{\
                    printf("No es primo.\\n");\
                \}\
                break;\
\
            case 19:\
                // Divisores de un numero\
                printf("Ingrese un numero: ");\
                scanf("%d", &num);\
                printf("Los divisores son: ");\
                for (i = 1; i <= num; i++) \{\
                    if (num % i == 0) \{\
                        printf("%d ", i);\
                    \}\
                \}\
                printf("\\n");\
                break;\
\
            case 20:\
                // Salir\
                printf("Saliendo del programa...\\n");\
                break;\
\
            default:\
                printf("Opcion no valida.\\n");\
                break;\
        \}\
\
    \} while (opcion != 20);\
\
    return 0;\
\}\
}