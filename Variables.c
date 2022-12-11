#include <stdio.h>

/*https://www.tutorialspoint.com/convert-an-int-to-ascii-character-in-c-cplusplus
Senza questa piccola guida non avrei saputo come combinare i tre tipi di variabili in un unico programma perché non trovavo un problema da risolvere, ed essendo un programma la soluzione ad un problema....*/
int num2char(int num){
	return 0 + num;
}
int main(){
	printf("Inserire un numero con la virgola: ");
	int A;
	scanf("%d",&A);
	float B;
	scanf("%f.2",&B);
	printf("La parte intera corrsiponde a %d\n",A);
	printf("La parte decimale corrisponde a %f.2\n",B);
	printf("Il numero che hai inserito nella codifica ASCII corrisponde al carattere %c\n",num2char(A));
	return 0;
}
