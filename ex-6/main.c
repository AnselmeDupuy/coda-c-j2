#include <stdlib.h>
#include <stdio.h>

int main () {
	
	char name[10];
	int age;
	int annee;


	printf("Bonjour quel est votre prénom?\n");
	scanf("%s", name);

	printf("Bonjour %s, quel est vôtre age?\n", name);
	scanf("%d", &age);

	annee = (2024 - age);

	printf("%s vous êtes né en %d\n", name, annee);

}