#include<stdio.h>
#include<conio.h>
#include<string.h>
void AgregarTarea(char nt[10]);
void Completada(char nt[10]);
void Pendientes(char nt[10]);
void Tareas(char nt[10]);
void Buscar(char nt[10]);
void Salir();
int main()
{
    char nt[10];
	int op;
	printf("\t\t Sistema de Gestion de Tareas\n\n");
	while(op!=3)
    {
        printf(" 1= Agregar una nueva tarea.\n 2= Marcar una tarea completada.\n 3= Listar todas las tareas pendientes.\n 4= Listar todas las tareas.\n 5= Buscar.\n 6= Salir del programa.\n");
        printf("Seleccione una opcion: ");
        scanf("%i",&op);
        switch(op)
        {
            case 1: AgregarTarea(nt);
            break;
            case 2: Completada(nt);
            break;
            case 3: Pendientes(nt);
            break;
            case 4: Tareas(nt);
            break;
            case 5: Buscar(nt);
            break;
            case 6: Salir();
            return 0;
            break;
        }
    }
}
void AgregarTarea(char nt[10])
{
    int i,f;
    printf("Cuantas tareas quieres agregar: ");
    scanf("%i",&f);
    for(i=0;i<f;i++)
    {
        printf("Ingrese el titulo de la tarea: ");
        scanf("%s",&nt[i]);
    }
}
void Completada(char nt[10])
{
    int i;
    printf("Ingrese el numero de la tarea que desea marcar como completada: ");
    scanf("%d",i);
    printf("%c esta completada\n",nt[i]);
}
void Pendientes(char nt[10])
{
    int i;
    printf("Las tareas pendientes\n");
    for(i=0;i<10;i++)
    {
        printf("%i= %c\n",i,nt[i]);
    }

}
void Tareas(char nt[10])
{
    int i;
    printf("Todas las tareas\n");
    for(i=0;i<10;i++)
    {
        printf("%i= %c\n",i,nt[i]);
    }

}
void Buscar(char nt[10])
{
    int f;
    char nom[41];
    int existe=0;
    printf("Ingrese un nombre para buscarlo:");
    scanf("%s",&nom);
    for(f=0;f<5;f++)
    {
        if (strcmp(nom,nt[f])==0)
        {
            existe=1;
        }
    }
    if (existe==1)
    {
        printf("El nombre se encuentra en la lista\n");
    }
    else
    {
        printf("El nombre no se encuentra en la lista\n");
    }
}
void Salir()
{
    printf("Gracias por usar el Sistema de Gestion de Tareas\n");
}
