#include <stdio.h>

int main() {
	// Definir variables para contar los votos de cada opci�n
	int votosPicNic = 0;
	int votosBicicleteada = 0;
	int votosExcursion = 0;
	int votosFiestaBaile = 0;
	int votosDesfile = 0;
	
	// Variables adicionales
	int eleccion;
	int maxVotos = 0;
	int opcionGanadora = 0;
	
	// Mostrar opciones al votante
	printf("\nOpciones:\n");
	printf("1. Pic Nic\n");
	printf("2. Bicicleteada al Parque 2 de Febrero\n");
	printf("3. Viaje de excursi�n a Itat�\n");
	printf("4. Un fiesta-baile\n");
	printf("5. Un desfile de m�scaras por la peatonal\n");
	
	// Bucle para recibir elecciones hasta que el usuario decida finalizar
	do {
		// Leer la elecci�n del usuario
		printf("\nIngrese su elecci�n (0 para finalizar): ");
		scanf("%d", &eleccion);
		
		// Verificar si el usuario quiere finalizar
		if (eleccion == 0) {
			break;
		}
		
		// Incrementar el contador de votos para la opci�n seleccionada
		switch (eleccion) {
		case 1:
			votosPicNic++;
			break;
		case 2:
			votosBicicleteada++;
			break;
		case 3:
			votosExcursion++;
			break;
		case 4:
			votosFiestaBaile++;
			break;
		case 5:
			votosDesfile++;
			break;
		default:
			printf("Opci�n no v�lida\n");
		}
	} while (1);
	
	// Determinar la opci�n ganadora
	if (votosPicNic >= maxVotos) {
		if (votosPicNic > maxVotos) {
			maxVotos = votosPicNic;
			opcionGanadora = 1;
		} else {
			printf("Empate para la opci�n 1\n");
		}
	}
	
	if (votosBicicleteada >= maxVotos) {
		if (votosBicicleteada > maxVotos) {
			maxVotos = votosBicicleteada;
			opcionGanadora = 2;
		} else {
			printf("Empate para la opci�n 2\n");
		}
	}
	
	if (votosExcursion >= maxVotos) {
		if (votosExcursion > maxVotos) {
			maxVotos = votosExcursion;
			opcionGanadora = 3;
		} else {
			printf("Empate para la opci�n 3\n");
		}
	}
	
	if (votosFiestaBaile >= maxVotos) {
		if (votosFiestaBaile > maxVotos) {
			maxVotos = votosFiestaBaile;
			opcionGanadora = 4;
		} else {
			printf("Empate para la opci�n 4\n");
		}
	}
	
	if (votosDesfile >= maxVotos) {
		if (votosDesfile > maxVotos) {
			maxVotos = votosDesfile;
			opcionGanadora = 5;
		} else {
			printf("Empate para la opci�n 5\n");
		}
	}
	
	// Mostrar las opciones ganadoras
	printf("\nLas opciones ganadoras son la/las n�mero(s): ");
	if (votosPicNic == maxVotos) {
		printf("1 ");
	}
	if (votosBicicleteada == maxVotos) {
		printf("2 ");
	}
	if (votosExcursion == maxVotos) {
		printf("3 ");
	}
	if (votosFiestaBaile == maxVotos) {
		printf("4 ");
	}
	if (votosDesfile == maxVotos) {
		printf("5 ");
	}
	
	printf("con %d elecciones\n", maxVotos);
	
	return 0;
}





