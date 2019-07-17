#include <stdio.h>
#include <stdlib.h>

main()
{
	int arr[50],i,j,k,l, pos[50];
	printf("Input jumlah bilangan random (maks. 50) : ");
	scanf("%d",&l);
	printf("Generate %d bilangan random\n",l);
	
	for( i = 0 ; i < l ; i++ ) {
		arr[i] = rand() % 99;
	    printf("%d ", arr[i]);
	}
	   
	printf("\nInput bilangan yang ingin dicari : ");
	scanf("%d",&k);
	j = 0;
	pos[0] = '\0';
	
	for(i=0;i<l;i++)
	{
		if(arr[i]==k)
		{
			pos[j] = i + 1;
			j++;
		}
	}
	
	if(pos[0] != '\0')
	{
		printf("Bilangan %d ditemukan di posisi ",k);
		for (i = 0; i < j; i++) {
			printf("%d  ", pos[i]);
		}
	 
	} else {
		printf("Bilangan %d tidak ada\n",k);
	}
}




