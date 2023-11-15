#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

main()

{
	setlocale(LC_ALL,"portuguese");
	int num, i;
	i = 0;
	printf("Qual tabuada você deseja saber ? \n");
	scanf("%d",&num);
	printf("-----------------------------------------------------\n");
	printf("\t TABUADA DO %d \n",num);
	printf("-----------------------------------------------------\n");
	
	while(i<=10)
	{
		printf("%2d * %2d = %2d \n",num,i,num*i);
		i++;
	}
}
