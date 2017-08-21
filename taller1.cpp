/*
*   Programa:
*   Fecha: 19/08/2017
*   Elaborado por: Camila Andrea Borja y Kelin Alejandra Arboleda
*/

//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//variables
#define fil 3
#define col 3

//Estructuras
struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct estudiante{
	char nombre[30];
	float nota1, nota2, nota3;
	float promedio;
	char sexo;
	int edad;
	struct Promedio prom;
}alumn, alumnos[150];

struct Competidor{
	char nombre[20];
	int edad;
	char sexo;
	char club[20];
}C_Competencia;

//Funciones
void menu();
void ciclo_while();
void ciclo_for();
void arreglo();
void ciclo_switch();
void matriz();
void estructura();

//Funciones while
int sumarElTotal();
int sumaPar();
int sumaImpar();

//Funciones for
int tablas_multiplicar();
int factorial();
int fibonacci();

//Funciones arreglos
int numeros_decimales();
int valores();
int dimension();

//Funciones switch
void mes_sistema();
void ascii_vocal();
void ascii_numero();

//Funciones matrices
int suma_matriz();
int matriz_automatica();
int matriz_auto_primos();

//Funciones estructuras 
void j_alumnos();
void datos_Competidor();
void promedio();
void Mejor_Menor();


//Funcion principal
int main(){
	menu();
	return 0;
}
//Menu principal
void menu(){
	int opcion;
	do{
		printf("----------BIENVENIDO---------- \n");
		printf("\n1. While");
		printf("\n2. For");
		printf("\n3. Array");
		printf("\n4. Switch");
		printf("\n5. Matrices");
		printf("\n6. Estructuras");
		printf("\n0. Salir\n");
		printf("\nIngrese Su Opcion: ");
		scanf("%d", &opcion);

	    switch(opcion){
			case 1: ciclo_while();
				break;
			case 2: ciclo_for();
				break;
			case 3: arreglo();
				break;
			case 4: ciclo_switch();
				break;
			case 5: matriz();
				break;
			case 6: estructura();
				break;
			case 0: exit(0);
				break;
			default: printf("Opcion No Valida\n");
        }
		system("pause");
		system("cls");
	}while(opcion != 0);
}

void ciclo_while(){
	int opcion;
    do{
		printf("\t\n CICLO WHILE");
        printf("\n1.Sumar los numeros del 1 al 100");
        printf("\n2.Sumar los numeros del 1 al 50 pares");
        printf("\n3.Sumar los numeros del 1 al 50 impares\n");
        printf("\n0.Salir\n");
        printf("\n.Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1: sumarElTotal();
                break;
            case 2: sumaPar();
                break;
            case 3: sumaImpar();
                break;
            case 0: menu();
                break;
            default: printf("Opcion incorrecta\n");
        }
        system("pause");
		system("cls");
    }while (opcion != 0);
}

int sumarElTotal(){
    int i = 0, suma = 0;

    while (i <= 100){
        suma = suma + i;
        i += 1;
    }
    printf("la suma de los numeros es: %d\n", suma);
    return 0;
}

int sumaPar(){
    int i = 1, suma = 0;

    while(i <= 50){
        if(i % 2 == 0){
        suma = suma + i;
        }
        i += 1;
    }
    printf("\nla suma de los numeros pares es:%d\n", suma);

    return 0;
}

int sumaImpar( ){
    int i = 0, suma = 0;

    while(i <= 50){
        if(i % 2 != 0){
            suma = suma + i;
        }
        i += 1;
    }
    printf("\nla suma de los numeros impares es:%d\n", suma);
    return 0;
}

void ciclo_for(){
	int opcion;
    do{
        printf("\tCICLO FOR\n");
        printf("\n1.Multiplicar numeros del 1 al 20");
        printf("\n2.solucionar factorial");
        printf("\n3.solucionar el numero fibonacci\n");
        printf("\0.Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1: tablas_multiplicar();
                break;
            case 2: factorial();
                break;
            case 3: fibonacci();
                break;
            case 0: menu();
            default: printf("Ingrese una opcion:");
        }
        system("pause");
		system("cls");
    }while(opcion != 0);
}

int tablas_multiplicar(){
	int i;
	int tabla;
	int mult;

	printf(" Ingrese un numero: ");
	scanf("%d", &tabla);

	for(i = 1; i <= 20; i++){
		mult = tabla * i;
		printf("%d x %d = %d\n", tabla, i, mult);
	}
}

int factorial(){
	int numero;
	int i = 1;
	int factorial = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for ( i = 1; i <= numero; i++ ){
        factorial = i * factorial;
    }
    printf("El factorial del numero ingresado es: %d \n ", factorial);
}

int fibonacci(){
	int i;
	int numero;
	int ante1 = 1, ante2 = 1, fibo = 1;

	printf("Indique hasta que serie quiere ver la serie de fibonacci \n");
	scanf ("%d", &numero);
	printf("%d  ", ante1);

	for ( i = 2; i <= numero; i++){
		printf("%d  ", fibo);
		fibo = ante1 + ante2;
		ante1 = ante2;
		ante2 = fibo;
	}
	printf("\n");
}

void arreglo(){
	int opcion;
	do{
		printf("\nARREGLOS");
		printf("\n1.Ingrese los 4 numeros decimales");
		printf("\n2.Ingrese 2 valores");
		printf("\n3.Ingrese 4 numeros\n");
		printf("\n0. exit");
		printf("\nIngrese una opcion: ");
		 scanf("%d", &opcion);

        switch(opcion){
            case 1: numeros_decimales();
                break;
            case 2: valores();
                break;
            case 3: dimension();
                break;
            case 0: menu();
                break;
            default: printf("Ingrese una opcion:");
        }
        system("pause");
		system("cls");
		}while(opcion != 0);
}

int numeros_decimales(){
    int i;
	float Ndecimales[4];
	Ndecimales[0] = 32.583;
	Ndecimales[1] = 11.239;
	Ndecimales[2] = 45.781;
	Ndecimales[3] = 27.237;
	printf("precione una tecla para conocer los numeros del arreglo\n");
	for(i = 0; i < 4; i++){
		printf("%f\n", Ndecimales[i]);
	}
}

int valores(){
	int n1;
	int n2;
	int i, j;

	printf("Ingrese numero de filas: ");
	scanf("%d", &n1);
	printf("Ingrese numero de columnas: ");
	scanf("%d", &n2);
	int total[n1][n2];
	for(i = 0; i < n1; i++){
		for(j = 0; j < n2; j++){
			total[i][j] = i;
		}
	}
	for(i = 0; i < n1; i++){
		printf("\n");
		for(j = 0; j < n2; j++){
			printf("%d  ", total[i][j]);
		}
	}
}

int dimension(){
	int arreglo[4][4];
	int i, j;

	for(i = 0; i < 4; i++){
		printf("\nIngrese un numero en la posicion %d: ", i + 1);
		scanf("%d", &arreglo[0][i]);
	}

	for(i = 0; i < 4; i++){
		arreglo[1][i] = arreglo[0][i] * arreglo[0][i];
	}

	for(i = 0; i < 4; i++){
		arreglo[2][i] = arreglo[0][i] * arreglo[0][i] * arreglo[0][i];
	}

	for(i = 0; i < 4; i++){
		arreglo[3][i] = arreglo[0][i] * arreglo[0][i] * arreglo[0][i] * arreglo[0][i];
	}

	for(i = 0; i < 4; i++){
		printf("\n");
		for(j = 0; j < 4; j++){
			printf("%d  ", arreglo[j][i]);
		}
	}
}

void ciclo_switch(){
	int opcion;

	do{
		printf("\nSWITCH");
		printf("\n1. Consultar el Mes del sistema");
		printf("\n2. Codigo ascii de una vocal");
		printf("\n3. Codigo ascii de un numero\n");
		printf("\n0. exit");
		printf("\nIngrese una opcion: ");
		scanf("%d", &opcion);

        switch(opcion){
            case 1: mes_sistema();
                break;
            case 2: ascii_vocal();
                break;
            case 3: ascii_numero();
                break;
            case 0: menu();
                break;
            default: printf("Ingrese una opcion:");
        }
        system("pause");
		system("cls");
		}while(opcion != 0);
}

void mes_sistema(){
    tm * tiempo;
    int mes;

    time_t fecha_sistema;
    time( &fecha_sistema);
    tiempo = localtime( &fecha_sistema);
    mes = tiempo -> tm_mon + 1;

    switch(mes){
        case 1: printf("\nEnero\n");
            break;
        case 2: printf("\nFebrero\n");
            break;
        case 3: printf("\nMarzo\n");
            break;
        case 4: printf("\nAbril\n");
            break;
        case 5: printf("\nMayo\n");
            break;
        case 6: printf("\nJunio\n");
            break;
        case 7: printf("\nJulio\n");
            break;
        case 8: printf("\nAgosto\n");
            break;
        case 9: printf("\nSeptiembre\n");
            break;
        case 10: printf("\nOctubre\n");
            break;
        case 11: printf("\nNoviembre\n");
            break;
        case 12: printf("\nDiciembre\n");
            break;
    }
}

void ascii_vocal(){
	char vocal;

	printf("Ingrese La Vocal: ");
	scanf("%c", &vocal);

	switch(vocal){
		case 'a': printf("El Codigo Ascii Es: 97\n");
			break;
		case 'e': printf("El Codigo Ascii Es: 101\n");
			break;
		case 'i': printf("El Codigo Ascii Es: 105\n");
			break;
		case 'o': printf("El Codigo Ascii Es: 111\n");
			break;
		case 'u': printf("El Codigo Ascii Es: 117\n");
			break;
		case 'A': printf("El Codigo Ascii Es: 95\n");
			break;
		case 'E': printf("El Codigo Ascii Es: 69\n");
			break;
		case 'I': printf("El Codigo Ascii Es: 73\n");
			break;
		case 'O': printf("El Codigo Ascii Es: 79\n");
			break;
		case 'U': printf("El Codigo Ascii Es: 85\n");
			break;
		default: printf("\nNo es una vocal, Intente de nuevo\n");
	}
}

void ascii_numero(){
	int numero;
	printf("Ingrese Un Numero Del O Al 9: ");
	scanf("%d", &numero);

	switch(numero){
		case 0: printf("El Codigo Ascii Es: 48\n");
			break;
		case 1: printf("El Codigo Ascii Es: 49\n");
			break;
		case 2: printf("El Codigo Ascii Es: 50\n");
			break;
		case 3: printf("El Codigo Ascii Es: 51\n");
			break;
		case 4: printf("El Codigo Ascii Es: 52\n");
			break;
		case 5: printf("El Codigo Ascii Es: 53\n");
			break;
		case 6: printf("El Codigo Ascii Es: 54\n");
			break;
		case 7: printf("El Codigo Ascii Es: 55\n");
			break;
		case 8: printf("El Codigo Ascii Es: 56\n");
			break;
		case 9: printf("El Codigo Ascii Es: 57\n");
			break;
		default: printf("No Es Un Numero Valido\n");
	}
}

void matriz(){
	int opcion;
	do{
		printf("\t\nMATRIZ");
		printf("\n1. Ingrese los numeros a sumar\n");
		printf("\n2. Matriz automatica\n");
		printf("\n3. Matriz automatica con numeros primos\n");
		printf("\n0. exit");
		printf("\nIngrese una opcion: ");
		scanf("%d", &opcion);

        switch(opcion){
            case 1: suma_matriz();
                break;
            case 2: matriz_automatica();
                break;
            case 3: matriz_auto_primos();
                break;
            case 0: menu();
                break;
            default: printf("Ingrese una opcion:");
        }
        system("pause");
		system("cls");
		}while(opcion != 0);
}

int suma_matriz(){
	int matriz[fil][col];
	int f, c, matriz_2[fil][col], Suma_matrices[f][c];
    for(f = 0; f < fil; f++) {
        for(c = 0; c < col; c++) {
            printf ("\ningrese el valor en la posicion [%d][%d] ", f, c);
            scanf ("%d ", &matriz_2[f][c]);
        }
    }
      for(f = 0; f < fil; f++) {
        for(c = 0; c < col; c++) {
             printf ("%d ", matriz_2[f][c]);
        }
        printf("\n");
    }
     printf("\n Suma de dos matrices \n");
    for(f = 0; f < fil; f++) {
        for(c = 0; c < col; c++) {
            Suma_matrices[f][c] = matriz[f][c] + matriz_2[f][c];
            printf("%d ", Suma_matrices[f][c]);
        }
        printf("\n");
    }
    return 0;
}
	

int matriz_automatica(){
	int matriz[3][3], i, j;
	srand(time(0));
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			matriz[i][j] = rand() % (50);
            printf("%d  ", matriz[i][j]);
		}
	    printf("\n");
	}
	return 0;
}

int matriz_auto_primos(){
	
	
}

void estructura(){
    int opcion;

    do{
        printf("\n1.promedio por array\n");
        printf("\n2. Datos de un Competidor\n");
        printf("\n3. Promedio Alumno\n");
        printf("\n4. Mejor y menor Promedio estudiantes\n");
        printf("\n0. Salir\n");
        printf(" Ingrese una opcion:  ");
        scanf("%d", &opcion);
		system("cls");

        switch(opcion){
            case 1: j_alumnos();
                break;
            case 2: datos_Competidor();
                break;
            case 3: promedio();
                break;
            case 4: Mejor_Menor();
                break;
            case 0: menu();
                break;
            default: printf("\nIntente de nuevo\n");
        }
        system("pause");
        system("cls");
    }while(opcion != 0);
}

void j_alumnos(){
	int i;
	int j;
	printf("\nCuantos alumnos deseas promediar: ");
	scanf("%d", &j);
	fflush(stdin);
	system("cls");

	for(i = 0; i < j; i++){
		printf("\nIngrese el nombre del estudiante: ");
		fgets(alumnos[i].nombre , 30, stdin);
		fflush(stdin);
		printf("\n Datos Notas\n");
		printf("\nNota 1: ");
		scanf("%f", &alumnos[i].nota1);
		printf("\nNota 2: ");
		scanf("%f", &alumnos[i].nota2);
		printf("\nNota 3: ");
		scanf("%f", &alumnos[i].nota3);
		fflush(stdin);
		alumnos[i].promedio = (alumnos[i].nota1 + alumnos[i].nota2 + alumnos[i].nota3)/3;
		system("cls");
	}
	printf("\nDatos Estudiante\n");

	for(i = 0; i < j; i++){
		printf("\ntNombre: %s", alumnos[i].nombre);
		printf("\ntPromedio: %.2f\n", alumnos[i].promedio);
		printf("\n");
	}
}

void datos_Competidor(){
	fflush(stdin);
	char categoria[20];

	printf("\nIngrese Nombre: ");
	fgets(C_Competencia.nombre, 20, stdin);
	printf("\nIngrese Edad: ");
	scanf("%d", &C_Competencia.edad);
	fflush(stdin);
	printf("\ntIngrese m, si es masculino o f, si es femenino: ");
	scanf("%c", &C_Competencia.sexo);
	fflush(stdin);
	printf("\nIngrese Nombre del Club: ");
	fgets(C_Competencia.club, 20, stdin);
	system("cls");
	fflush(stdin);
	
	printf("\nDatos del Participante\n");
	printf("\nNombre: %s", C_Competencia.nombre);
	printf("\nEdad: %d\n", C_Competencia.edad);
	printf("\nSexo: %c\n", C_Competencia.sexo);
	printf("\nClub: %s", C_Competencia.club);
	printf("\nCategoria: ");

	if(C_Competencia.edad <= 15){
		printf("Infantil");
	}
	else if(C_Competencia.edad <= 40){
		printf("Joven");
	}
	else{
		printf("Mayor");
	}printf("\n");
}

void promedio(){
	int i, promMayor=0;
	float promedio_alumno, mayor=0;

	fflush(stdin);
	printf("\nIngrese Nombre: ");
	fgets(alumn.nombre, 30, stdin);
	printf("\nIngrese m, si es masculino o f, si es femenino: ");
	scanf("%c", &alumn.sexo);
	printf("\nIngrese edad: ");
	scanf("%d", &alumn.edad);
	printf("\nDatos Notas\n");
	printf("\nNota1: ");
	scanf("%f", &alumn.prom.nota1);
	printf("\nNota2: ");
	scanf("%f", &alumn.prom.nota2);
	printf("\nNota3: ");
	scanf("%f", &alumn.prom.nota3);
	promedio_alumno = (alumn.prom.nota1 + alumn.prom.nota2 + alumn.prom.nota3)/3;
	system("cls");
	printf("\nDatos del Estudiante\n");
	printf("\nNombre: %s", alumn.nombre);
	printf("\nSexo: %c\n", alumn.sexo);
	printf("\nEdad: %d\n", alumn.edad);
	printf("\nPromedio: %0.2f\n", promedio_alumno);
}

void Mejor_Menor(){
	int n_alumnos, promMayor=0;
	float promedio_alumno[100], mayor=0;

	printf("\nIngrese Numero de alumnos: ");
	scanf("%d", &n_alumnos);
	system("cls");

	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		printf("\nIngrese Nombre: ");
		fgets(alumnos[i].nombre, 30, stdin);
		printf("\nIngrese m, si es masculino o f, si es femenino: ");
		scanf("%c", &alumnos[i].sexo);
		printf("\nIngrese edad: ");
		scanf("%d", &alumnos[i].edad);
		printf("\nDatos Notas\n");
		printf("\nNota1: ");
		scanf("%f", &alumnos[i].prom.nota1);
		printf("\nNota2: ");
		scanf("%f", &alumnos[i].prom.nota2);
		printf("\nNota3: ");
		scanf("%f", &alumnos[i].prom.nota3);

		promedio_alumno[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3)/3;

		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			promMayor = i;
		}
		system("cls");
	}
	printf("\nEl Mejor Promedio es\n");
	printf("\nNombre: %s", alumnos[promMayor].nombre);
	printf("\nSexo: %c\n", alumnos[promMayor].sexo);
	printf("\nEdad: %d\n", alumnos[promMayor].edad);
	printf("\nPromedio: %0.2f\n", promedio_alumno[promMayor]);
	printf("\n");
}

