#include<stdio.h>
#include<string.h>

int main()
{
	//Declaración de variables universales
	char ae=130;
	char aa=160;
	char ai=161;
	char ao=162;
	char au=163;
	char si=168;
	char sf=63;
	char n=164;
	int op,op1,op2;
 
	//Mensaje de bienvenida 
	printf("\n\n\t\t\tHola,soy una enciclopedia ambiental.\n\n");
	
	//Nombre del usuario
	    //Declaramos su variable
	    char nombre[10];
	printf("\t%cC%cmo te llamas%c ",168,162,63); 
	scanf("%s",&nombre);
	
	//Instrucciones para el usuario
	printf("\n%s, en este programa podras recibir recomendaciones he informaci%cn relacionada al cuidado ambiental.\n",&nombre,ao);
	printf("Podr%cs elegir la planta que deseas cuidar dependiendo de tus opciones,",aa);
	printf("aprender de la importancia ambiental y las acciones que podemos hacer para apoyar al ambiente.\n");
	
	//Mostrar menú
	printf("\t\nMen%c\n",au);
	printf("1)Planta que deseas cuidar.\n2)Importancia del cuidado ambiental.\n3)Productos reciclables y donde llevarlos.\n4)%cC%cmo hacer composta%c\n",168,162,63);

	//Solicitar la opción y los números
	printf("\nElige la opci%cn a realizar: ",ao);
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
		//Elige la planta que deseas cuidar.
		printf("\n\n\t\tPlanta ideal para ti.\n\n");  //subtitulo
		//Empezamos con los indicaciones para este caso.
		printf("Seleccionaste la opci%cn 1, contamos con 24 diferentes especies que podemos recomendarte,por lo que a continuacion te realizaremos una serie de preguntas, para que las plantas recomendadas se adecuen a tu experiencia y tus cuidados.\n",ao);
		//Cuestionario para que la persona decida.
		printf("Los tama%cos que puedas elegir son:\n1)Peque%ca\n2)Mediana\n3)Grande\n",n,n);
		printf("%cQu%c tama%co deseas%c",168,ae,n,63);
		scanf("%d",&op1);
		
        printf("Tenemos 3 dificultades diferentes de cuidados, son:\n");
		printf("1)F%ccil\n2)Intermedio\n3)Avanzado\n",aa);
	    printf("%cQu%c dificultad de cuidados desea%c",168,ae,63);
		scanf("%d",&op2);
		
		if(op1==1 && op2==1) //PRIMERA PARTE DE ELECCION DE PLANTA
		{
			FILE *archivo; //Pequeñas faciles
			char caracteres[1000];
			archivo = fopen("11.txt","r");
			if (archivo != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo) == 0)
                {
                    fgets (caracteres,1000, archivo);
                    printf("%s", caracteres);
                }
                 fclose(archivo);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");
       }        
        
		 
		else if(op1==1 && op2==2)
		{
			FILE *archivo1; //Pequeñas intermedio
			char caracteres[2000];
			archivo1 = fopen("12.txt","r");
			if (archivo1 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo1) == 0)
                {
                    fgets (caracteres,2000, archivo1);
                    printf("%s", caracteres);
                }
                 fclose(archivo1);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");
		}
		
		else if(op1==1 && op2==3)
		{
			FILE *archivo2; //pequeñas avanzado
			char caracteres[2000];
			archivo2 = fopen("13.txt","r");
			if (archivo2 != NULL)
                {                  
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo2) == 0)
                {
                    fgets (caracteres,2000, archivo2);
                    printf("%s", caracteres);
                }
                 fclose(archivo2);
                }		
                printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");				
		}
		else if(op1==2 && op2==1)
		{
			FILE *archivo3; //Medianas facil
			char caracteres[2000];
			archivo3 = fopen("21.txt","r");
			if (archivo3 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo3) == 0)
                {
                    fgets (caracteres,2000, archivo3);
                    printf("%s", caracteres);
                }
                 fclose(archivo3);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");
        }
		
		else if(op1==2 && op2==2)
		{
			FILE *archivo4; //Medianas Intermedio 
			char caracteres[2000];
			archivo4 = fopen("22.txt","r");
			if (archivo4 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo4) == 0)
                {
                    fgets (caracteres,2000, archivo4);
                    printf("%s", caracteres);
                }
                 fclose(archivo4);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");
        }
		
		else if(op1==2 && op2==3)
		{
			FILE *archivo5; //Medianas avanzado
			char caracteres[2000];
			archivo5 = fopen("23.txt","r");
			if (archivo5 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo5) == 0)
                {
                    fgets (caracteres,2000, archivo5);
                    printf("%s", caracteres);
                }
                 fclose(archivo5);
                }
				printf("Gracias por  usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");
        }
		
		else if(op1==3 && op2==1)
		{
			FILE *archivo6; //Grandes faciles
			char caracteres[2000];
			archivo6 = fopen("31.txt","r");
			if (archivo6 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo6) == 0)
                {
                    fgets (caracteres,2000, archivo6);
                    printf("%s", caracteres);
                }
                 fclose(archivo6);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");
        }
		
		else if(op1==3 && op2==2)
		{
			FILE *archivo7; //Grandes intermedio
			char caracteres[2000];
			archivo7 = fopen("32.txt","r");
			if (archivo7 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo7) == 0)
                {
                    fgets (caracteres,2000, archivo7);
                    printf("%s", caracteres);
                }
                 fclose(archivo7);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");
        }
		else if(op1==3 && op2==3)
		{
			FILE *archivo8; //Grandes avanzado
			char caracteres[2000];
			archivo8 = fopen("33.txt","r");
			if (archivo8 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo8) == 0)
                {
                    fgets (caracteres,2000, archivo8);
                    printf("%s", caracteres);
                }
                 fclose(archivo8);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");
        }
		
		break;
		
		case 2: //IMPORTANCIA AMBIENTAL
		{	FILE *archivo9;
			char caracteres[2000];
			archivo9 = fopen("2.txt","r");
			if (archivo9 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo9) == 0)
                {
                    fgets (caracteres,2000, archivo9);
                    printf("%s", caracteres);
                }
                 fclose(archivo9);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");
		}
		break;
		
		case 3://RECICLAJE
		{
			FILE *archivo10;
			char caracteres[2000];
			archivo10 = fopen("3.txt","r");
			if (archivo10 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo10) == 0)
                {
                    fgets (caracteres,2000, archivo10);
                    printf("%s", caracteres);
                }
                 fclose(archivo10);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");		
		}
		break;
		
		case 4://COMPOSTA
		{
			FILE *archivo11;
			char caracteres[1000];
			archivo11 = fopen("4.txt","r");
			if (archivo11 != NULL)
                {
					printf("\nContenido del archivo:\n");
 
                while (feof(archivo11) == 0)
                {
                    fgets (caracteres,2000, archivo11);
                    printf("%s", caracteres);
                }
                 fclose(archivo11);
                }
				printf("Gracias por usar el programa, si deseas comenzar nuevamente,vuelve a ejecutar.");		
		}
		break;
		
		default:
		    printf("Opci%cn no v%clida\n",ao,aa);
		    break;
		    break;
	}
	return 0;
}