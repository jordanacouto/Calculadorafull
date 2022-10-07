//Usuario GitHub: https://github.com/jordanacouto
#include <stdio.h> //biblioteca de entrada e saida de dados
#include <math.h> //biblioteca para executar comandos matematicos
#include <locale.h> //biblioteca para identificar a localiza��o do programa
//bibliotecas para atribuir ao codigo, pesquisei diversos videos no youtube, canal: Programa��o Pratica
int main()
 {
		setlocale(LC_ALL, "Portuguese"); //comando para configurar o programa para o idioma escolhido 
    printf(" Ol�, sou Jordana Couto Garcia cursando Engenharia de produ��o na  Universidade La Salle de Canoas, n� de matricula 201932915\n");
    int numero; //declara��o da variavel de op��o para ser usada em todos os comandos do codigo.
    do { //comando de repeti��o, que ira repetir as op��es at� o usuario escolher a op��o sair 
    
    printf("\n");
    printf("*****************************\n");
    printf("****  1 - Soma           ****\n");
    printf("****  2 - Subtra��o      ****\n");
    printf("****  3 - Multiplica��o  ****\n");
    printf("****  4 - Divis�o        ****\n");
    printf("****  5 - Pontencia      ****\n");
    printf("****  6 - Raiz Quadrada  ****\n");
    printf("****  0 - Sair           ****\n");
    printf("*****************************\n");
    printf("Digite o n�mero da op��o desejada:");
   
     scanf("%i", &numero); //leitura de dados digitada na variavel numero
    		if( numero > 0 && numero < 6){ //condi��o para repeti��o do codigo
        }
        
     	switch(numero)//utiliza��o da condicional para executar as opera��es
     	{	
        	 //declara��o de variaveis
    		float num1, num2, sum, sub, mult;
        	case 1: //caso a op��o 1 for escolhida, sera executado essa condi��o abaixo
	            printf("SOMA\n");
	            printf("Digite o primeiro numero:");
	            scanf("%f", &num1); 
	            printf("\n");
	            printf("Digite o segundo numero: " );
	            scanf("%f", &num2);
	            //Soma
	            sum = num1 + num2; // declara��o de opera��o de soma
	            printf("%.2f + %.2f = A resposta � %.2f\n", num1, num2, sum); // comando para apresentar resultado obtido na soma 
        	break;//evita executar as proximas op�oes se a op��o escolhida ja foi mostrada
        
        	case 2: 
	            printf("SUBTRA��O\n");
	            printf("Digite o primeiro numero: ");
	            scanf("%f", &num1); 
	            printf("Digite o segundo numero: " );
	            scanf("%f", &num2);
	            //Subtra��o
	            sub = num1 - num2; // declara��o de opera��o de subtra��o
	            printf("%.2f - %.2f = A resposta � %.2f\n", num1, num2, sub); // comando para apresentar resultado obtido na subtra��o
        	break;
    
        	case 3:
	            printf("MULTIPLICA��O\n");
	            printf("Digite o primeiro numero: " );
	            scanf("%f", &num1);
	            printf("Digite o segundo numero: " );
	            scanf("%f", &num2);
	            //Multiplica�ao
	            mult = num1 * num2; // declara��o de opera��o de multiplica��o
	            printf("%.2f * %.2f = A resposta � %.2f\n", num1, num2, mult); // comando para apresentar resultado obtido na multiplica��o
        	break;
    
        	case 4: 
	            printf("DIVIS�O\n");
	            printf("Digite o primeiro numero: " );
	            scanf("%f", &num1);
	            printf("Digite o segundo numero: " );
	            scanf("%f", &num2);
	            //Divis�o
	            	while(num2 == 0) { //comando de condi��o para solcitar um 
	                	printf("Nao existe divisao por zero!\nDigite outro valor: ");
	                	scanf("%2f", &num2);
	           		 }
	            printf("Divisao: %2f\n", num1 / num2);
            break;
    
        	case 5:
	            printf("PONTENCIA\n");
	            printf("Digite o primeiro numero: " );
	            scanf("%f", &num1);
	            printf("Digite o segundo numero: " );
	            scanf("%f", &num2);
	            // Potencia 
	            printf("A resposta � ""%.f",pow(num1,num2)); // "pow" � o comando de potencia em linguagem c 
        	break;
            
        	case 6:
	            printf("Digite o primeiro numero: " );
	            scanf("%f", &num1);
	            // Potencia 
	            printf("A resposta � ""%f",sqrt(num1)); //"sqrt" � o comando de raiz quadrada em linguagem c 
        	break;    
        
        	case 0: 
	            printf("Saindo " );
	        break;
    
    		default: 
        		printf("Op��o inv�lida\n Digite outra op��o!"); //caso a op��o digitada n�o seja valida, retornar� esta mensagem e retornara o codigo 
		} 
	}	
    while (numero != 0 && numero != 1 && numero != 2 && numero != 3 && numero != 4 && numero != 5 && numero != 6 ); //comando de condi��o para evitar o loop infinito 	
}
