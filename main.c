#include <stdio.h>

    int main()
    {
        float valorTelefone, valorParcelas, valorTaxa, valorfinal;
        int numeroParcelas;
        char opcao;
        do{
            printf("\n>>> TAXA DA MAQUININHA <<<\n");
            
            printf("Digite o valor do telefone: ");
            scanf("%f", &valorTelefone);
            
            
            printf("Digite o quantidade de parcelas no cartão de CRÉDITO \n"
                   "(caso seja no DÉBITO digite 0)");
            scanf("%i", &numeroParcelas);
            
            
                if(numeroParcelas == 0)
                {
                   valorfinal = valorTelefone * 2/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   printf("PAGAMENTO A VISTA NO DÉBITO\n");
                   printf("O valor a vista fica a R$ %.2f com a taxa da maquininha", valorfinal);
                }
                else if(numeroParcelas == 1)
                {
                   valorfinal = valorTelefone * 5/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   printf("PAGAMENTO A VISTA NO CRÉDITO\n");
                   printf("O valor a vista fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 2)
                {
                   valorfinal = valorTelefone * 5/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 2 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas);
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 3)
                {
                   valorfinal = valorTelefone * 6/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 3 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 4)
                {
                   valorfinal = valorTelefone * 6.5/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 4 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 5)
                {
                   valorfinal = valorTelefone * 7.5/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 5 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 6)
                {
                   valorfinal = valorTelefone * 8.5/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 6 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 7)
                {
                   valorfinal = valorTelefone * 9/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 7 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 8)
                {
                   valorfinal = valorTelefone * 10/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 8 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 9)
                {
                   valorfinal = valorTelefone * 11/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 9 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 10)
                {
                   valorfinal = valorTelefone * 12/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 10 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 11)
                {
                   valorfinal = valorTelefone * 13/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 11 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 12)
                {
                   valorfinal = valorTelefone * 14/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 12 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 13)
                {
                   valorfinal = valorTelefone * 14.5/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 13 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 14)
                {
                   valorfinal = valorTelefone * 15/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 14 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 15)
                {
                   valorfinal = valorTelefone * 15.5/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 15 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 16)
                {
                   valorfinal = valorTelefone * 16.5/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 16 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else if(numeroParcelas == 17)
                {
                   valorfinal = valorTelefone * 17/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 17 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
                else
                {
                   valorfinal = valorTelefone * 18/100 + valorTelefone;
                   valorTaxa = valorfinal - valorTelefone;
                   valorParcelas = valorfinal/numeroParcelas;
                   printf("PAGAMENTO EM 18 PARCELAS NO CRÉDITO\n");
                   printf("O valor total fica a R$ %.2f com a taxa da maquininha\n", valorfinal);
                   printf("O valor de cada parcela será: R$ %.2f\n", valorParcelas); 
                   printf("O valor da taxa da maquininha é R$ %.2f\n", valorTaxa);
                }
        printf("IPHONE SALINAS");
        scanf("%c", &opcao);
        }while(opcao!= 's');
    }
    
