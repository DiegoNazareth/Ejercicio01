//Calcular las elecciones en tiempo real de tres candidatos, las elecciones terminan cuando el electorado ingresa un ID de 0.

Cada voto se ingresa con el ID del candidato ejemplo:

Candidato1: 6060
Candidato2: 4545
Candidato3: 2020
Mostrar los resultados por candidato y total numero de votantes. Leer los nombres de los candidatos y sus ID.

#include<stdio.h>

int main(){
	int id1,id2,id3, voto=1, contador=0,contador1=0, contador2=0, suma=0;
	char Candidato1[100],Candidato2[100],Candidato3[100];
	printf("Nombre del Candidato 1\n");
	scanf("%s", &Candidato1);
	printf("Id ");
	scanf("%d", &id1);
	printf("Nombre del Candidato 2\n");
	scanf("%s", &Candidato2);
	printf("Id ");
	scanf("%d",&id2 );
	printf("Nombre del Candidato 3\n");
	scanf("%s", &Candidato3);
	printf("Id ");
	scanf("%d", &id3);
    
	
	printf("Candidatos y sus id\n");
	printf("Candidato 1 %s ", Candidato1);
	printf("Id %d\n", id1);
	printf("Candidato 2 %s ", Candidato2);
	printf("Id %d\n", id2);
	printf("Candidato 3 %s ", Candidato3);
	printf("Id %d\n", id3);
	
	printf("VOTACIONES\n");

	
	do{
		printf("ingresa el voto\n");
	scanf("%d", &voto);
		if(voto==id1){
			printf("candidato %s ", Candidato1 );
			contador=contador+1;
			printf("votos: %d\n", contador);
		}else{
			if(voto==id2){
				printf("candidato  %s ", Candidato2);
				contador1=contador1+1;
					printf("votos: %d\n", contador1);
			}else{
				if(voto==id3){
					printf("candidato %s ", Candidato3);
					contador2=contador2+1;
						printf("votos: %d\n", contador2);
				}
			}
		}
	}while(voto!=0);
	printf("%s ", Candidato1);
	printf("votos%d\n",contador );
	printf("%s ", Candidato2);
	printf("votos%d\n",contador1 );
	printf("%s ", Candidato3);
	printf("votos%d\n",contador2 );
	suma=contador+contador1+contador2;
	printf("Votantes totales de las elecciones\n %d", suma);
	return(0);
}
