#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*void imprimir (int t, int x[][5]){
int i, j;

printf("Elementos da matriz\n");

         for(i=0;i<t;i++){
            for(j=0;j<t;j++){
                printf("%d ", x[i][j]);
            }
        putchar('\n');
        }

} */
 

int compara (int t, int linha, int v[linha][t] ){ //funcao  retorna a posicao do maior elemento da linha

    
    int i; 
    int maior =  v[0][linha];
    int posicao=0;

    for (i=0; i < t; i++){ //percorre o vetor
        if(v[linha][i] > maior){ // compara se o atual é maior 
            maior = v[linha][i]; //troca
            posicao = i;
        }
    }
    	//printf("---  %d ---",maior);
    return posicao; //[linha][posicao]

}

int soma(int t, int linha, int coluna, int piramide[t][t]){

	
	
	int soma = piramide[linha][coluna];
	//printf("%d", soma);
	
	

			for (int k = linha -1; k>0;k--){ //soma valores
			
				for(int l = linha;l>=0;l--){				
					
					soma+=piramide[k][l];
					//printf("  *%d*  ",soma);					
				}
			
			}

			printf("----%d--", soma);

	return soma;
}


int main (void){

	char nome[10];
	

	printf ("Digite o nome do arquivo de entrada: ");
	scanf("%s", nome); // pede nome do arquivo

	FILE *arquivo;
	arquivo = fopen (nome, "r");


	if(arquivo == NULL){  //verificar se consegue ler o arquivo
		printf ("Esse arquivo não pôde ser lido. \n");
		exit(0);
	}

	char tamanho[1];

	fscanf(arquivo,"%s",tamanho);

	int t = tamanho[0] -'0';	//converte o tamanho da piramide em int	

	int piramide[t][t];

	int j=0;

	
	for(int i=0; i<=t;i++){		//colando valor 0 em todos os espacos da matriz
		
		 if(i>=j){
		 	for(j=0; j<=t;j++)
		 		piramide[i][j]=0;
		 			
		 	}
		 		j=0; 	 
			
		}
	
	

	for(int i=0; i<t;i++){		//coleta dos dados do arquivo e organiza em forma de piramide
		
		 if(i>=j){
		 	for(j=0; j<=i;j++)
		 		fscanf(arquivo,"%d",&piramide[i][j]);
		 			
		 	}
		 		j=0;	 	 
			
		}



	fclose(arquivo);

	//imprimir (t,piramide);

	//imprimir (t, piramide);

	int v[20];

	for(int i = 0;i<t;i++){

	 v [i]= compara (t, i, piramide);
	//printf(" COMPARA  %d  COMPARA  ",v[i]);
	}
	int linha, coluna;
	int aux =0;
	int resultado=0;
	for(int i=0;i<t;i++){
		
		aux = soma (t, i, v[i], piramide);
		if(resultado<aux){
		
		resultado = aux;
     	linha = i;
     	coluna =v[i];
     }
     	//printf ("Valor soma %d ....", resultado);
			}
			printf("Resposta: fileira %d, caixa %d.", linha+1, coluna+1);
			
    

return (0);




}