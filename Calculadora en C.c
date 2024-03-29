#include<stdio.h>

void titulo();
void menu(int *);
void opciones(int);

void suma();
void resta();
void mult();
void div();
void cambio_signo();
void raiz_cuadrada();
void potencia();

void fin();

int main(){
	int opc;
	titulo();
	while(opc!=5){
		menu(&opc);
		opciones(opc);
	}
}

void titulo(){
	printf("\t &&& CALCULADORA &&&");
}

void menu(int * opc){
	printf("\n\n  Selecciona que hacer:\n");
    printf("  1. Sumar\n");
    printf("  2. Restar\n");
    printf("  3. Multiplicar\n");
    printf("  4. Dividir\n");
    printf("  5. Cambiar signo\n");
    printf("  6. Raiz cuadrada \n");
    printf("  7. Potencia\n");
    printf("  8. Salir del programa\n  ");
    scanf("%d", opc);    
}

void opciones(int opc){
	switch(opc){
	    case 1:
	        suma();
	        break;
	    case 2:
	        resta();
	        break;
	    case 3:
	        mult();
	        break;
	    case 4:
	        div();
	        break;
            case 5:
	    	cambio_signo();
	    	break;
	    case 6:
	    	raiz_cuadrada();
	    	break;
	    case 7:
	    	potencia();
	    	break;
	    case 8:
	    	fin();
	    	break;
	    default:
	        printf("Opcion no valida\n");
	}	
}

void suma(){
	printf("\t SUMA");
	int s1, s2, t;
	printf("\n Ingresa el primer valor:");
	scanf("%d", &s1);
	printf("\n Ingresa el segundo valor:");
	scanf("%d", &s2);
	t = s1 + s2;
	printf("\n El resultado es %d", t);
}

void resta(){
	printf("\t RESTA");
	int r1, r2, t;
	printf("\n Ingresa el primer valor:");
	scanf("%d", &r1);
	printf("\n Ingresa el segundo valor:");
	scanf("%d", &r2);
	t = r1 - r2;
	printf("\n El resultado es %d", t);
}

void mult(){
	printf("\t MULTIPLICACION");
	int s1, s2, r;
	printf("\n Ingresa el primer valor:");
	scanf("%d", &s1);
	printf("\n Ingresa el segundo valor:");
	scanf("%d", &s2);
	r = s1 * s2;
	printf("\n El resultado es %d", r);
}

void div(){
	int n1, n2, t;
	printf("\n Ingresa el primer valor:");
	scanf("%d", &n1);
	printf("\n Ingresa el segundo valor:");
	scanf("%d", &n2);
	t = n1 / n2;
	printf("\n El resultado es %d", t);
}

void cambio_signo(){
	float num;
	printf("\n Ingresa el número:");
	scanf("%f", &num);
	printf("\n El cambio de signo de %f es %f", num, -num);
}

void raiz_cuadrada(){
	printf("\t RAIZ CUADRADA");
	float num;
	printf("\n Ingresa el número:");
	scanf("%f", &num);
	printf("\n El resultado es %f", sqrt(num));
}

void potencia(){
	printf("\t POTENCIA");
	int base, exponente;
	printf("\n Ingresa la base:");
	scanf("%d", &base);
	printf("\n Ingresa el exponente:");
	scanf("%d", &exponente);
	printf("\n El resultado es %f", pow(base, exponente));
}

void fin(){
	printf("\n  Fin del programa.");
}
