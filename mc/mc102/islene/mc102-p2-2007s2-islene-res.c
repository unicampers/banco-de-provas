#include <stdio.h>

#define MAX 100

float modulo(float number)
{
	if(number < 0) return -number;
	return number;
}

int main()
{
	int lin, col, i, j, k;
	int matriz[MAX][MAX];
	float proportion;
	int found = 0;
	
	printf("Digite as dimensões (m e n) da matriz: ");
	scanf(" %d %d", &lin, &col);
	printf("Digite a matriz:\n");
	
	for(i=0; i<lin; i++)
		for(j=0; j<col; j++)
			scanf(" %d", &(matriz[i][j]));

	for(i=0; i<lin; i++)
		for(j=i+1; j<lin; j++)
		{
			proportion = 1.0*matriz[i][0]/matriz[j][0];
			k=1;
			while(k < col && (modulo((1.0*matriz[i][k]/matriz[j][k]) - proportion) < 0.000001))
				k++; /* While acaba quando encontrar uma proporção diferente */
			if(k == col)
			{
				found = 1; /* Identifica que encontrou alguma linha linearmente dependente */
				printf("Linhas %d e %d são dependentes com razão %.3f\n", i+1, j+1, proportion);
			}
		}
	
	if(!found)
		printf("Nenhuma linha é dependente de outra linha\n");
	
	return 0;
}
