#include<stdio.h>
#include<stdlib.h>


main(){
	int bil[50], r, cari, jml = 0;
	
	printf("Sejumlah bilangan random : \n");
	for(int i=0;i<50;i++){
		bil[i] = rand() % 99; // men-generate bilangan random dari 0 - 99
		printf("%4d", bil[i]);
		if (i % 10 == 9) {
			printf("\n");
		}
	}
	printf("Masukkan bilangan yang ingin dicari : "); scanf("%d", &cari);
	
	// Mulai mencari satu-persatu
	for(int i=0;i<50;i++){		
		if (bil[i] == cari) {
			jml++;		
		}
	}
	
	if (jml>0) {
		printf("Ditemukan %d buah bilangan %d",jml, cari);
	} else {
		printf("Bilangan yang dicari tidak ada");
	}
}
