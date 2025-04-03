//Martin Sambon

/*operaciones con mayuscula y minuscula*/

#include <stdio.h>
#include <string.h>

void convertir_mayusculas(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

void convertir_minusculas(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

void alternar_mayus_minus(char *str) {
    int flag = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            if (flag) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - ('a' - 'A');
                }
            } else {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] = str[i] + ('a' - 'A');
                }
            }
            flag = !flag;
        }
    }
}

void capitalizar_palabras(char *str) {
    int nuevo_palabra = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            if (nuevo_palabra && str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - ('a' - 'A');
            } else if (!nuevo_palabra && str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + ('a' - 'A');
            }
            nuevo_palabra = 0;
        } else {
            nuevo_palabra = 1;
        }
    }
}

int menu() {
    int opcion;
    printf("Seleccione una opcion:\n");
    printf("1) Mostrar la oracion en mayusculas\n");
    printf("2) Mostrar la oracion en minusculas\n");
    printf("3) Mostrar la oracion alternando mayuscula y minuscula\n");
    printf("4) Mostrar la oracion con cada palabra iniciando en mayuscula\n");
    printf("Opcion: ");
    scanf("%d", &opcion);
    getchar();
    return opcion;
}

int main() {
    char oracion[256];
    
    printf("Ingrese una oracion: ");
    fgets(oracion, sizeof(oracion), stdin);
    oracion[strcspn(oracion, "\n")] = 0;
    
    int opcion = menu();
    
    switch(opcion) {
        case 1:
            convertir_mayusculas(oracion);
            break;
        case 2:
            convertir_minusculas(oracion);
            break;
        case 3:
            alternar_mayus_minus(oracion);
            break;
        case 4:
            capitalizar_palabras(oracion);
            break;
        default:
            printf("Opcion invalida.\n");
            return 1;
    }
    
    printf("Resultado: %s\n", oracion);
    return 0;
}
