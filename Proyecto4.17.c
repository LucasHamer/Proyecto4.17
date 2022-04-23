#include<stdio.h>
#include<stdlib.h>

int main()
{
    char codigo;
    int importe,historia;
    printf("Importes segun su codigo: \n\n");
    printf("  Codigo Importe \n");
    printf("     A     20 \n");
    printf("     D     40 \n");
    printf("     F     60 \n");
    printf("     M     150 \n");
    printf("     T     150 \n\n");
    printf("Ingrese el numero de historia: ");
    scanf("%d",&historia);
    fflush(stdin);      //Limpia el scanf
    printf("Ingrese el codigo de prestacion: ");
    scanf("%c",&codigo);

    switch(codigo)
    {
        case 'A':
            importe=20;
            printf("Numero de historia: %d\n",historia);
            printf("Codigo de prestacion: %c\n",codigo);
            printf("Importe: %d\n",importe);
            break;
        case 'D':
            importe=40;
            printf("Numero de historia: %d\n",historia);
            printf("Codigo de prestacion: %c\n",codigo);
            printf("Importe: %d\n",importe);
            break;
        case 'F':
            importe=60;
            printf("Numero de historia: %d\n",historia);
            printf("Codigo de prestacion: %c\n",codigo);
            printf("Importe: %d\n",importe);
            break;
        case 'M':
            importe=150;
            printf("Numero de historia: %d\n",historia);
            printf("Codigo de prestacion: %c\n",codigo);
            printf("Importe: %d\n",importe);
            break;
        case 'T':
            importe=150;
            printf("Numero de historia: %d\n",historia);
            printf("Codigo de prestacion: %c\n",codigo);
            printf("Importe: %d\n",importe);
            break;
        default:
            printf("El codigo de prestacion no existe");

    }
    return 0;
}
