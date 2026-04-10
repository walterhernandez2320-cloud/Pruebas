#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Definimos las funciones:
void iniciar_tablero(char matriz[8][8]);
void colocar_barcos(char matriz [8][8]);
int posicion(char matriz[8][8]);
void mostrar_tablero(char matriz [8][8]);

//PRINCIPAL
int main(){
srand(time(NULL));
char tablero[8][8];
int barcos_hundidos = 0;

iniciar_tablero(tablero);
colocar_barcos(tablero);
do{mostrar_tablero(tablero);
   barcos_hundidos += posicion(tablero);
   printf("\n Llevas %d barcos hundidos de 10 \n", barcos_hundidos);
} while (barcos_hundidos <10);
printf("\n GANASTE!! \n");
return 0;
}

//DESCRIPCION DE LAS FUNCIONES.

                        //FUNCION INICIAR TABLERO

void iniciar_tablero(char matriz[8][8]){ //Crea el tablero solo con agua
    //printf("   1 2 3 4 5 6 7 8\n");
    //printf("   ------------------\n");
for (int i = 0 ; i <8 ; i++){
    //printf(" %c |", 'A' + i );
    for (int j =0 ; j<8; j++){
        matriz [i][j] = '~';
        //printf(" %c ", matriz[i][j]);
    } //printf("\n");
}                   
}

                        // FUNCION COLOCAR BARCOS (Creamos una matriz con los barcos colocados).

void colocar_barcos(char matriz [8][8]){
int barcos = 0;
int fila;
int columna;
while (barcos <10){
    fila = rand()%8;
    columna = rand()%8; 
    if (matriz[fila][columna] == '~'){
        matriz[fila][columna]= 'B';
        barcos ++;
    }
}

/*
//Si quisiera mostar que los barcos se colocaron. 
printf("\n     ACA ESTAN LOS BARCOS \n");

    printf("    1  2  3  4  5  6  7  8\n");
    printf("   ------------------------\n");
for (int x = 0 ; x <8 ; x++){
    printf("%c |", 'A' + x );
    for (int y =0 ; y<8; y++){
        printf(" %c ", matriz[x][y]);
    } printf("\n");
} */
 printf(" \n Tablero iniciado y barcos escondidos. \n");
}

                                    //FUNCION POSICION.

int posicion(char matriz[8][8]){
    char filauser;
    int columnauser;
    int fila_a_numero;
    int columna_correcta;

                                        // Pedimos fila
    printf("Ingrese la fila (Entre A y H) \n");
    scanf(" %c",&filauser);
    fila_a_numero = filauser - 'A'; //65
    while (fila_a_numero < 0 || fila_a_numero > 7){
        printf ("Fila fuera del rango, ingrese nuevamente\n");
        scanf(" %c",&filauser);
        fila_a_numero = filauser - 'A';
    }

                                        //Pedimos columna
    printf("Ingrese la columna (Entre 1 y 8) \n");
    scanf("%d", &columnauser);
    while (columnauser<1 || columnauser>8){
        printf("Columna fuera del rango, ingrese nuevamente\n");
        scanf("%d", &columnauser);
    }
    columna_correcta = columnauser -1;

                                        //Verificacion
    if (matriz[fila_a_numero][columna_correcta] == 'B') {
        printf("Hundiste mi acorazado \n");
        matriz[fila_a_numero][columna_correcta] = 'x';
        return 1;}
        else if (matriz[fila_a_numero][columna_correcta] == 'x' || matriz[fila_a_numero][columna_correcta] =='o'){
            printf("Ya disparaste aca!");
            return 0;
        } 
    else{
        printf("JAJAJAJAJ MALA PUNTERIA \n");
        matriz[fila_a_numero][columna_correcta] = 'o';
        return 0;
    }
    }

                                // FUNCION MOSTRAR TABLERO. 

void mostrar_tablero(char matriz [8][8]){
    printf("\n     1  2  3  4  5  6  7  8\n");
    printf("    ------------------------\n");
for (int i = 0 ; i <8 ; i++){
    printf(" %c |", 'A' + i ); //Imprime el marco del tablero
    for (int j =0 ; j<8; j++){
        if (matriz[i][j] == 'B') {
            printf(" ~ "); // Muestra agua aunque haya un barco
            }else {
            printf(" %c ", matriz[i][j]); // Mostramos ~, X u O
            }
        }printf("\n");
    } 
}  


