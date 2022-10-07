//Usuario GitHub: https://github.com/jordanacouto
#include <stdio.h> //biblioteca de entrada e saida de dados
#include <math.h> //biblioteca para executar comandos matematicos
#include <locale.h> //biblioteca para identificar a localização do programa
//bibliotecas para atribuir ao codigo, pesquisei diversos videos no youtube, canal: Programação Pratica
int main()
 {
		setlocale(LC_ALL, "Portuguese"); //comando para configurar o programa para o idioma escolhido 
    printf(" Olá, sou Jordana Couto Garcia cursando Engenharia de produção na  Universidade La Salle de Canoas, nº de matricula 201932915\n");
    int numero; //declaração da variavel de opção para ser usada em todos os comandos do codigo.
    do { //comando de repetição, que ira repetir as opções até o usuario escolher a opção sair 
    
    printf("\n");
    printf("*****************************\n");
    printf("****  1 - Soma           ****\n");
    printf("****  2 - Subtração      ****\n");
    printf("****  3 - Multiplicação  ****\n");
    printf("****  4 - Divisão        ****\n");
    printf("****  5 - Pontencia      ****\n");
    printf("****  6 - Raiz Quadrada  ****\n");
    printf("****  0 - Sair           ****\n");
    printf("*****************************\n");
    printf("Digite o número da opção desejada:");
   
     scanf("%i", &numero); //leitura de dados digitada na variavel numero
    		if( numero > 0 && numero < 6){ //condição para repetição do codigo
        }
        
     	switch(numero)//utilização da condicional para executar as operações
     	{	
        	 //declaração de variaveis
    		float num1, num2, sum, sub, mult;
        	case 1: //caso a opção 1 for escolhida, sera executado essa condição abaixo
	            printf("SOMA\n");
	            printf("Digite o primeiro numero:");
	            scanf("%f", &num1); 
	            printf("\n");
	            printf("Digite o segundo numero: " );
	            scanf("%f", &num2);
	            //Soma
	            sum = num1 + num2; // declaração de operação de soma
	            printf("%.2f + %.2f = A resposta é %.2f\n", num1, num2, sum); // comando para apresentar resultado obtido na soma 
        	break;//evita executar as proximas opçoes se a opção escolhida ja foi mostrada
        
        	case 2: 
	            printf("SUBTRAÇÃO\n");
	            printf("Digite o primeiro numero: ");
	            scanf("%f", &num1); 
	            printf("Digite o segundo numero: " );
	            scanf("%f", &num2);
	            //Subtração
	            sub = num1 - num2; // declaração de operação de subtração
	            printf("%.2f - %.2f = A resposta é %.2f\n", num1, num2, sub); // comando para apresentar resultado obtido na subtração
        	break;
    
        	case 3:
	            printf("MULTIPLICAÇÃO\n");
	            printf("Digite o primeiro numero: " );
	            scanf("%f", &num1);
	            printf("Digite o segundo numero: " );
	            scanf("%f", &num2);
	            //Multiplicaçao
	            mult = num1 * num2; // declaração de operação de multiplicação
	            printf("%.2f * %.2f = A resposta é %.2f\n", num1, num2, mult); // comando para apresentar resultado obtido na multiplicação
        	break;
    
        	case 4: 
	            printf("DIVISÃO\n");
	            printf("Digite o primeiro numero: " );
	            scanf("%f", &num1);
	            printf("Digite o segundo numero: " );
	            scanf("%f", &num2);
	            //Divisão
	            	while(num2 == 0) { //comando de condição para solcitar um 
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
	            printf("A resposta é ""%.f",pow(num1,num2)); // "pow" é o comando de potencia em linguagem c 
        	break;
            
        	case 6:
	            printf("Digite o primeiro numero: " );
	            scanf("%f", &num1);
	            // Potencia 
	            printf("A resposta é ""%f",sqrt(num1)); //"sqrt" é o comando de raiz quadrada em linguagem c 
        	break;    
        
        	case 0: 
	            printf("Saindo " );
	        break;
    
    		default: 
        		printf("Opção inválida\n Digite outra opção!"); //caso a opção digitada não seja valida, retornará esta mensagem e retornara o codigo 
		} 
	}	
    while (numero != 0 && numero != 1 && numero != 2 && numero != 3 && numero != 4 && numero != 5 && numero != 6 ); //comando de condição para evitar o loop infinito 	
}
