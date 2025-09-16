#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#define MAX_STRLEN 256
int op;
void listado(void);
void mostrar(struct nodo *cabeza);
void insertar(struct nodo **cabeza, char nombre[], char pelicula[], char hora[], int asiento);
void mostrarFecha();
	int asientosA[5][6] = {
			{ 30 , 29 , 28 , 27 , 26 , 25 }, 
			{ 19 , 20 , 21 , 22 , 23 , 24 }, 
			{ 18 , 17 , 16 , 15 , 14 , 13 }, 
			{ 7 ,  8 ,  9 ,  10 , 11 , 12 }, 
			{ 6 ,  5 ,  4 ,  03 , 2 ,  1  }
			};
	int asientosA2[5][6] = {
			{ 30 , 29 , 28 , 27 , 26 , 25 }, 
			{ 19 , 20 , 21 , 22 , 23 , 24 }, 
			{ 18 , 17 , 16 , 15 , 14 , 13 }, 
			{ 7 ,  8 ,  9 ,  10 , 11 , 12 }, 
			{ 6 ,  5 ,  4 ,  03 , 2 ,  1  }
			};
		int asientosB[5][6] = {
			{ 30 , 29 , 28 , 27 , 26 , 25 }, 
			{ 19 , 20 , 21 , 22 , 23 , 24 }, 
			{ 18 , 17 , 16 , 15 , 14 , 13 }, 
			{ 7 ,  8 ,  9 ,  10 , 11 , 12 }, 
			{ 6 ,  5 ,  4 ,  03 , 2 ,  1  }
			};
		int asientosB2[5][6] = {
			{ 30 , 29 , 28 , 27 , 26 , 25 }, 
			{ 19 , 20 , 21 , 22 , 23 , 24 }, 
			{ 18 , 17 , 16 , 15 , 14 , 13 }, 
			{ 7 ,  8 ,  9 ,  10 , 11 , 12 }, 
			{ 6 ,  5 ,  4 ,  03 , 2 ,  1  }
			};
int main() {
	char pelicula[MAX_STRLEN];
	char hora[MAX_STRLEN];
	char nombre[100];
	int oprecibo,bole,total=0,peli,ppalo=0,cpalo,opalo,palo,soda,csoda,psoda=0,dogo,
    cdogo,pdogo=0,nachos,pnachos=0,cnachos,funcion,pbole,snack,psnack,op;
	int no = 0, next, opcion, numB, menu,asiento,i,j,lugar,n;
    
    
	struct nodo *cabeza = NULL;
	do{
		
    	// Menú para insertar o mostrar nodos
     	printf("Seleccione una opcion:\n");
    	printf("1. Generar ticket\n");
       	printf("2. Mostrar tickets\n");
        printf("3. Salir\n");
      	scanf("%d", &opcion);
      	switch (opcion) {
		  	no++; 
          	case 1:
         	   	printf("\n Taquilla San Nicolas de los Garza\n");
				printf("\n MONTERREY, NUEVO LEON\n");
				printf("\n\n                 BIENVENIDO A CINEPARK         \n");
    			printf("============================================================\n");
    			printf("PELICULA                  FUNCIONES              DURACION\n");
    			printf("1.CREED III          1)14:00     2)16:30           2:43h \n");
    			printf("2.ANT-MAN            1)12:15     2)18:20           2:05h \n");
    			printf("           El costo por boleto es de $74 pesos\n");
    			printf("============================================================\n");
				no++;
    	
    			/* TICKET PARA PELICULAS*/
    	
				printf("\n Ingrese su nombre, porfavor:\n " );
				scanf (" %[^\n]",&nombre);
    			printf("\n QUE PELICULA DESEA ELEGIR: ");
    			scanf("%s",&pelicula);
    			printf("\n HORA DE LA FUNCION: ");
  				scanf("%s",hora);;
    			printf("\n CANTIDAD DE BOLETOS A COMPRAR: ");
    			scanf("%i",&numB);
    			pbole = 74 * numB;
			 	if (strcmp(pelicula,"Creed")==0 || strcmp(pelicula,"CREED")==0){
 					if(strcmp(hora,"14:00")==0){
 					for (n=1; n<=numB; n+=1){
 						printf("\n ASIENTOS DISPONIBLES EN SALA: \n");
        				printf("*Asientos que tengan 0, está ocupados*\n");
        				printf("*Las filas y columnas empiezan desde el 0*\n\n");
						
						for(i=0; i<5; i++){
							for(j=0; j<6; j++){
								printf("\t%i ",asientosA[i][j]); 
							}
							printf("\n\n");
						}
						printf("Ingresa el número de fila del asiento: ");
    					scanf("%d", &i);
    					printf("Ingresa el número de columna del asiento: ");
    					scanf("%d", &j);
    					asiento = asientosA[i][j];
    					asientosA[i][j] = 0;}
					}
    				else if (strcmp(hora,"16:30")==0){
    					for (n=1; n<=numB; n+=1){
    						printf("\n ASIENTOS DISPONIBLES EN SALA: \n");
        					printf("*Asientos que tengan 0, estan ocupados*\n");
        					printf("*Las filas y columnas empiezan desde el 0*\n\n");
							
							for(i=0; i<5; i++){
								for(j=0; j<6; j++){
									printf("\t%i ",asientosA2[i][j]); 
								}
								printf("\n\n");
							}
							printf("Ingresa el numero de fila del asiento: ");
    						scanf("%d", &i);
    						printf("Ingresa el numero de columna del asiento: ");
    						scanf("%d", &j);
    						asiento = asientosA2[i][j];
    						asientosA2[i][j] = 0;}
					}
					else{
						printf("No existe tal funcion.\n");}     									
    					printf("\n---------------------------------");
						printf("\n \tTicket No. %d", no);
						mostrarFecha();
						printf("\n--------------------------------\n");
    					printf("        CARTELERA CINEPARK          \n");
						printf(" CLIENTE CLUB CINEPARK: %s\n", nombre);
						printf(" PELICULA: CREED III\n");
						printf(" HORA DE LA FUNCION: %s\n",hora);
    					printf(" BUTACA: %d\n", asiento);
					}
      	 			else if(strcmp(pelicula,"Ant_Man")==0){
      	 				if (strcmp(hora,"12:15")==0){
      	 					for (n=1; n<=numB; n+=1){
        						printf("\n ASIENTOS DISPONIBLES EN SALA: \n");
        						printf("*Asientos que tengan 0, estan ocupados*\n");
        						printf("*Las filas y columnas empiezan desde el 0*\n\n");
								for(i=0; i<5; i++){
									for(j=0; j<6; j++){
										printf("\t%i ",asientosB[i][j]); 
									}
								printf("\n\n");
								}
								printf("Ingresa el numero de fila del asiento: ");
    							scanf("%d", &i);
    							printf("Ingresa el numero de columna del asiento: ");
    							scanf("%d", &j);
    	
    							asiento = asientosB[i][j];
    							asientosB[i][j] = 0;}
						}
    					else if (strcmp(hora,"18:20")==0){
    						for (n=1; n<=numB; n+=1){
    							printf("\n ASIENTOS DISPONIBLES EN SALA: \n");
        						printf("*Asientos que tengan 0, estan ocupados*\n");
        						printf("*Las filas y columnas empiezan desde el 0*\n\n");
								for(i=0; i<5; i++){
									for(j=0; j<6; j++){
										printf("\t%i ",asientosB2[i][j]); 
									}
									printf("\n\n");
								}
								printf("Ingresa el numero de fila del asiento: ");
    							scanf("%d", &i);
    							printf("Ingresa el numero de columna del asiento: ");
    							scanf("%d", &j);
    							asiento = asientosB2[i][j];
    							asientosB2[i][j] = 0;}
						} 
						else{
							printf("No existe tal funcion.\n");}   								
 							printf("\n---------------------------------");
							printf("\n \tTicket No. %d", no);
							mostrarFecha();
							printf("\n--------------------------------\n");
    						printf("        CARTELERA CINEPARK          \n");
							printf(" CLIENTE CLUB CINEPARK: %s\n", nombre);
							printf(" PELICULA: ANT MAN 3\n");
							printf(" HORA DE LA FUNCION: %s\n",hora);
    						printf(" BUTACA: %d\n", asiento);
       					}
        		else{
        			printf("No existe tal pelicula\n");
        		}
        		insertar(&cabeza, nombre, pelicula, hora, asiento);
        		printf("\nDESEA COMPRAR EN EL SNACK:     1.SI      2.NO\n");
   				scanf("%i",&snack);
   				/* TICKET PARA EL SNACK*/
       			if (snack==1){
           			do{
           				printf("\nMENU DEL SNACK\n");
           				printf("....................\n");
           				printf("1.PALOMITAS\n");
           				printf("2.REFRESCO\n");
          				printf("3.HOT DOGS\n");
          				printf("4.NACHOS\n");
        				printf("....................\n");
         				printf("\nSELECCIONE UN APARTADO: \n");
           				scanf("%i",&op);
          				if(op==1){
            				printf("..........................................\n");
             				printf("TAMAñO DE LAS PALOMITAS             PRECIO\n");
              				printf("1.GRANDES 206g                        $60 \n");
              				printf("2.MEDIANAS 116g                       $50 \n");
              				printf("3.CHICAS 65g                          $45 \n");
              				printf("..........................................\n");
              				printf("PALOMITAS A ELEGIR:\n");
               				scanf("%i",&opalo);
              				printf("CANTIDAD DE PALOMITAS:\n");
              				scanf("%i",&cpalo);
              				switch (opalo){
               					case 1: 
               						printf("PALOMITAS GRANDES \n");
                  					printf("CANTIDAD DE PALOMITAS GRANDES PEDIDAS: %i\n",cpalo);
                    				ppalo=cpalo*60;
                 					break;
              					case 2:
                  					printf("PALOMITAS MEDIANAS \n");
                  					printf("CANTIDAD DE PALOMITAS MEDIANAS PEDIDAS: %i\n",cpalo);
                 					ppalo=cpalo*50;
                					break;
              					case 3:
                  					printf("PALOMITAS CHICAS \n");
                 					printf("CANTIDAD DE PALOMITAS CHICAS PEDIDAS: %i\n",cpalo);
                  					ppalo=cpalo*45;
              						break;
             					}
         				}
            			else if(op==2){
             				printf("..........................................\n");
            				printf("TAMAÑO DEL REFRESCO             PRECIO\n");
            				printf("1.GRANDE 946ml                    $55 \n");
             				printf("2.MEDIANO 591ml                   $50 \n");
              				printf("3.CHICO 473ml                     $45 \n");
              				printf(".........................................\n");
              				printf("REFRESCO A ELEGIR:\n");
              				scanf("%i",&soda);
              				printf("CANTIDAD DE REFRESCOS:\n");
               				scanf("%i",&csoda);
               				switch (soda){
               					case 1: 
                    				printf("REFRESCO GRANDE \n");
                    				printf("CANTIDAD DE REFRESCOS GRANDES PEDIDOS: %i\n",csoda);
                   					psoda=csoda*55;
                 					break;
              					case 2:
                 					printf("REFRESCO MEDIANO \n");
                  					printf("CANTIDAD DE REFRESCOS MEDIANOS PEDIDOS: %i\n",csoda);
                 					psoda=csoda*50;
                					break;
              					case 3:
                					printf("REFFRESCO CHICO \n");
                 					printf("CANTIDAD DE REFRESCOS CHICO PEDIDOS: %i\n",csoda);
                     				psoda=csoda*45;
               						break;
             				}
           				}
           				else if(op==3){
               				printf("....................................\n");
                			printf("HOT DOGS             PRECIO\n");
                			printf("1.TRADICIONAL          $45 \n");
                 			printf("2.JUMBO                $55 \n");
                 			printf("....................................\n");
                 			printf("HOT DOG A ELEGIR:\n");
                 			scanf("%i",&dogo);
                 			printf("CANTIDAD DE HOT DOGS:\n");
                 			scanf("%i",&cdogo);
                 			switch (dogo){
                  				case 1: 
                    				printf("HOT DOG TRADICIONAL\n");
                    				printf("CANTIDAD DE HOT DOGS TRADICIONALES PEDIDOS: %i\n",cdogo);
                    				pdogo=cdogo*45;
                    				break;
                 				case 2:
                    				printf("HOT DOG JUMBO \n");
                    				printf("CANTIDAD DE HOT DOGS JUMBOS PEDIDOS: %i\n",cdogo);
                     				pdogo=cdogo*55;
                    				break;
                 			}
              			}
              			else if(op==4){
                			printf("............................\n");
                			printf("NACHOS             PRECIO\n");
                			printf("1.GRANDES            $75 \n");
               				printf("2.CHICOS             $65 \n");
               				printf("............................\n");
              				printf("NACHOS A ELEGIR:\n");
               				scanf("%i",&nachos);
                			printf("CANTIDAD DE NACHOS:\n");
                 			scanf("%i",&cnachos);
                 			switch (nachos){
                  				case 1: 
                    				printf("NACHOS GRANDES\n");
                     				printf("CANTIDAD DE NACHOS GRANDES PEDIDOS: %i\n",cnachos);
                     				pnachos=cnachos*75;
                     				break;
                 				case 2:
                  					printf("NACHOS CHICOS \n");
                   					printf("CANTIDAD DE NACHOS CHICOS PEDIDOS: %i\n",cnachos);
                   					pnachos=cnachos*65;
                     				break;
                			}
          				}
           				printf("\nDESEA PEDIR ALGO MAS  1-si   2-no\n");
          				scanf("%i",&oprecibo);
      				}
      				while (oprecibo==1);
      				psnack=pnachos+ppalo+pdogo+psoda;
       				total=psnack+pbole;
       				printf("------------------------------------------------------------\n");
	   				printf("EL PRECIO TOTAL DE LAS PALOMITAS ES DE:    $%i\n",ppalo);
       				printf("PRECIO TOTAL DE LOS REFRESCOS:             $%i\n",psoda);
       				printf("PRECIO TOTAL DE LOS HOT DOGS:              $%i\n",pdogo); 
      				printf("PRECIO TOTAL DE LOS NACHOS:                $%i\n",pnachos); 
      				printf("EL PRECIO DE LOS BOLETOS ES DE:            $%i\n",pbole);
      				printf("EL TOTAL DEL SNACK ES DE:                  $%i\n",psnack);
       				printf("EL TOTAL DE PAGAR ES DE:                   $%i\n",total);
       				printf("------------------------------------------------------------");
       				//METODO BURBUJA
       				int x,j, mayor;
       				int pagos[7] = {pnachos,ppalo,pdogo,psoda,psnack,pbole,total};
       				for(x=0;x<7;x++){
						for(j=0;j<7;j++){
							//array[j] posicion de la izquierda
							//array[j + 1] poscion de la derecha
							if(pagos[j] > pagos[j + 1]){ 
								mayor = pagos[j];
								//cambio de posicion en el arreglo
								pagos[j] = pagos[j + 1];
								pagos[j + 1] = mayor;
							}
						}	
					}
					printf("\n\nPagos mostrados de manera ascendente: \n");
					//imprimiendo de manera ascendente
					for(x=0;x<7;x++){
						printf("%d ", pagos[x]);
					}
					printf("\n\n");
   				}
				break;
          	case 2:
            	// Mostrar todos los nodos de la lista
             	mostrar(cabeza);
          		break;
           	case 3:
            	// Salir del programa
             	printf("Saliendo del programa...\n");
            	break;
         	default:
            	printf("Opción inválida.\n");
           		break;
		}
        printf("\nDesea regresar al menu de opciones: 1.si  2.no\n");
        scanf("%i",&op);
	}
    while(op==1);}
    struct nodo {
    	char nombre[100];
   		char pelicula[MAX_STRLEN];
   		char hora[MAX_STRLEN];
  		int asiento;
  		struct nodo *siguiente;
};

// Función para insertar un nuevo nodo al final de la lista
void insertar(struct nodo **cabeza, char nombre[], char pelicula[], char hora[], int asiento) {
    // Crear un nuevo nodo
    struct nodo *nuevoNodo = (struct nodo*)malloc(sizeof(struct nodo));
    strcpy(nuevoNodo->nombre, nombre);
    strcpy(nuevoNodo->pelicula, pelicula);
    strcpy(nuevoNodo->hora, hora);
    nuevoNodo->asiento = asiento;
    nuevoNodo->siguiente = NULL;
    
    // Si la lista está vacía, el nuevo nodo será la cabeza de la lista
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
        return;
    }
    
    // Encontrar el último nodo de la lista
    struct nodo *ultimoNodo = *cabeza;
    while (ultimoNodo->siguiente != NULL) {
        ultimoNodo = ultimoNodo->siguiente;
    }
    
    // Insertar el nuevo nodo al final de la lista
    ultimoNodo->siguiente = nuevoNodo;
}

// Función para mostrar todos los nodos de la lista
void mostrar(struct nodo *cabeza) {
    printf("\n");
    printf("\tNombre          Pelicula         Hora          Asiento\n");
    printf("---------------------------------------------------------------------\n");
    while (cabeza != NULL) {
    	printf("\t%s \t\t%s \t\t%s \t\t%d\n", cabeza->nombre, cabeza->pelicula, cabeza->hora, cabeza->asiento);
        cabeza = cabeza->siguiente;
    }
    printf("\n");
}

void mostrarFecha(){
	// variables para almacenar los componentes de fecha y hora
    int dia, mes, year;
	//printf("\n Fecha:");
	// `time_t` es un tipo de tiempo aritmético
    time_t now;
    					
    // Obtener la hora actual
	// `time()` devuelve la hora actualdel sistema como un valor `time_t` 
    time(&now);
    					
	// localtime convierte un valor de `time_t` a la hora del calendario y
    // devuelve un puntero a una estructura `tm` con sus miembros
    // rellenado con los valores correspondientes
    struct tm *local = localtime(&now);
						
	dia = local->tm_mday;            // obtener el día del mes (1 a 31)
    mes = local->tm_mon + 1;      // obtener el mes del año (0 a 11)
    year = local->tm_year + 1900;   // obtener el año desde 1900
	printf("\nFecha: %02d/%02d/%d\n", dia, mes, year);
}
