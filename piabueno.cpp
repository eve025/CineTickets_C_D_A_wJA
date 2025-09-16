#include<stdio.h>
#include<windows.h>
int main ()
{
    int oprecibo,bole,total=0,peli,ppalo=0,cpalo,opalo,palo,soda,csoda,psoda=0,dogo,
    cdogo,pdogo=0,nachos,pnachos=0,cnachos,funcion,pbole,snack,psnack,op;
    system("cls");
    printf("                 BIENVENIDO A CINEPARK         \n");
    printf("============================================================\n");
    printf("PELICULA                  FUNCIONES              DURACION\n");
    printf("1.CREED III          1)14:00     2)16:30           2:43h \n");
    printf("2.DEMON SLAYER       1)15:00     2)17:30           1:50h \n");
    printf("3.ANT-MAN            1)12:15     2)18:20           2:05h \n");
    printf("4.SCREAM 6           1)21:15     2)23:20           2:06h \n");
    printf("           *El costo por boleto es de $27*\n");
    printf("============================================================\n");
    printf("\nQUE PELICULA DESEA ELEGIR: \n");
    scanf("%i",&peli);
    printf("\nHORA DE LA FUNCION: \n");
    scanf("%i",&funcion);
    printf("\nCANTIDAD DE BOLETOS A COMPRAR: \n");
    scanf("%i",&bole);
    pbole=bole*27;
    if (peli>=1 && peli<=4)
    {
        switch (peli)
        {
        case 1:
            printf("\n--------------------------\n");
			printf("PELICULA: CREED III\n");
            if (funcion==1)
            {
                printf("\nHORA FUNCION: 14:00hrs\n");
            } 
            else if (funcion==2)
            {
                printf("HORA FUNCION: 16:30hrs\n");
            }
            printf("--------------------------\n");
            break;
        case 2: 
            printf("\n--------------------------\n");
			printf("PELICULA: DEMON SLAYER\n");
            if (funcion==1)
            {
                printf("\nHORA FUNCION: 15:00hrs\n");
            } 
            else if (funcion==2)
            {
                printf("HORA FUNCION: 17:30hrs\n");
            }
            printf("--------------------------\n");
            break;
        case 3: 
            printf("\n--------------------------\n");
			printf("PELICULA: ANT-MAN\n");
            if (funcion==1)
            {
                printf("HORA FUNCION: 12:15hrs\n");
            } 
            else if (funcion==2)
            {
                printf("HORA FUNCION: 18:20hrs\n");
            }
            printf("--------------------------\n");
            break;
        case 4: 
            printf("\n--------------------------\n");
			printf("PELICULA: SCREAM 6\n");
            if (funcion==1)
            {
                printf("HORA FUNCION: 21:15hrs\n");
            } 
            else if (funcion==2)
            {
                printf("HORA FUNCION: 23:20hrs\n");
			}
			printf("--------------------------\n");
            break;
        }
    }
    else
    {
        printf("NO EXISTE TAL PELICULA\n");
    }
printf("\nDESEA COMPRAR EN EL SNACK:     1.SI      2.NO\n");
    scanf("%i",&snack);
    if (snack==1)
    {
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
        if(op==1)
        {
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
            switch (opalo)
            {
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
            else if(op==2)
            {
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
            switch (soda)
            {
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
        	else if(op==3)
        	{
                printf("....................................\n");
                printf("HOT DOGS             PRECIO\n");
                printf("1.TRADICIONAL          $45 \n");
                printf("2.JUMBO                $55 \n");
                printf("....................................\n");
                printf("HOT DOG A ELEGIR:\n");
                scanf("%i",&dogo);
                printf("CANTIDAD DE HOT DOGS:\n");
                scanf("%i",&cdogo);
                switch (dogo)
                {
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
            else if(op==4)
            {
                printf("............................\n");
                printf("NACHOS             PRECIO\n");
                printf("1.GRANDES            $75 \n");
                printf("2.CHICOS             $65 \n");
                printf("............................\n");
                printf("NACHOS A ELEGIR:\n");
                scanf("%i",&nachos);
                printf("CANTIDAD DE NACHOS:\n");
                scanf("%i",&cnachos);
                switch (nachos)
                {
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
    return 0;
}
}
