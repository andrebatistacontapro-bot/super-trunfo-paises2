#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // =============================================================
    // DECLARAÇÃO DAS VARIÁVEIS - CARTA 1
    // =============================================================
    char estado1[50] = "SP";
    char codigo1[10] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    
    // =============================================================
    // DECLARAÇÃO DAS VARIÁVEIS - CARTA 2
    // =============================================================
    char estado2[50] = "RJ";
    char codigo2[10] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.27;
    float pib2 = 343.18;
    int pontosTuristicos2 = 40;
    
    // =============================================================
    // CÁLCULOS AUXILIARES
    // =============================================================
    // Densidade Populacional = População / Área
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    
    // PIB per capita = PIB / População
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;
    
    // =============================================================
    // VARIÁVEIS PARA O NÍVEL MESTRE (COMPARAÇÃO COM 2 ATRIBUTOS)
    // =============================================================
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma1, soma2;
    int atributo1_valido, atributo2_valido;
    
    // =============================================================
    // MENU PRINCIPAL - ESCOLHA DO NÍVEL
    // =============================================================
    int nivel;
    
    printf("\n==========================================\n");
    printf("         SUPER TRUNFO - VERSÃO FINAL      \n");
    printf("==========================================\n\n");
    
    printf("Escolha o nível do jogo:\n");
    printf("1 - Nível Novato (Comparação simples - 1 atributo fixo)\n");
    printf("2 - Nível Aventureiro (Menu interativo - 1 atributo)\n");
    printf("3 - Nível Mestre (Comparação com 2 atributos)\n");
    printf("Opção: ");
    scanf("%d", &nivel);
    
    printf("\n==========================================\n\n");
    
    // =============================================================
    // NÍVEL 1 - NOVATO (Comparação com 1 atributo fixo)
    // =============================================================
    if (nivel == 1) {
        printf("=== NÍVEL NOVATO ===\n\n");
        
        // Exibindo os dados das cartas
        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões\n", pib1);
        printf("Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f bilhões/hab\n\n", pibPerCapita1);
        
        printf("Carta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões\n", pib2);
        printf("Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f bilhões/hab\n\n", pibPerCapita2);
        
        // ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO (FIXO: POPULAÇÃO)
        printf("=== COMPARAÇÃO DE CARTAS ===\n");
        printf("Atributo escolhido: POPULAÇÃO\n\n");
        
        printf("%s (%s): %d habitantes\n", cidade1, estado1, populacao1);
        printf("%s (%s): %d habitantes\n\n", cidade2, estado2, populacao2);
        
        if (populacao1 > populacao2) {
            printf("RESULTADO: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("RESULTADO: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("RESULTADO: Empate!\n");
        }
    }
    
    // =============================================================
    // NÍVEL 2 - AVENTUREIRO (Menu interativo com switch)
    // =============================================================
    else if (nivel == 2) {
        int opcao;
        
        printf("=== NÍVEL AVENTUREIRO ===\n\n");
        
        // Exibindo resumo das cartas
        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Carta 2: %s (%s)\n\n", cidade2, estado2);
        
        // MENU INTERATIVO COM SWITCH
        printf("=== MENU DE ATRIBUTOS ===\n");
        printf("Escolha o atributo para comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica (MENOR valor vence)\n");
        printf("6 - PIB per Capita\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        printf("\n==========================================\n\n");
        
        // ESTRUTURA SWITCH PARA ESCOLHA DO ATRIBUTO
        switch(opcao) {
            case 1: // POPULAÇÃO
                printf("Atributo escolhido: POPULAÇÃO\n\n");
                printf("%s: %d habitantes\n", cidade1, populacao1);
                printf("%s: %d habitantes\n\n", cidade2, populacao2);
                
                if (populacao1 > populacao2) {
                    printf("RESULTADO: %s venceu!\n", cidade1);
                } else if (populacao2 > populacao1) {
                    printf("RESULTADO: %s venceu!\n", cidade2);
                } else {
                    printf("RESULTADO: Empate!\n");
                }
                break;
                
            case 2: // ÁREA
                printf("Atributo escolhido: ÁREA\n\n");
                printf("%s: %.2f km²\n", cidade1, area1);
                printf("%s: %.2f km²\n\n", cidade2, area2);
                
                if (area1 > area2) {
                    printf("RESULTADO: %s venceu!\n", cidade1);
                } else if (area2 > area1) {
                    printf("RESULTADO: %s venceu!\n", cidade2);
                } else {
                    printf("RESULTADO: Empate!\n");
                }
                break;
                
            case 3: // PIB
                printf("Atributo escolhido: PIB\n\n");
                printf("%s: %.2f bilhões\n", cidade1, pib1);
                printf("%s: %.2f bilhões\n\n", cidade2, pib2);
                
                if (pib1 > pib2) {
                    printf("RESULTADO: %s venceu!\n", cidade1);
                } else if (pib2 > pib1) {
                    printf("RESULTADO: %s venceu!\n", cidade2);
                } else {
                    printf("RESULTADO: Empate!\n");
                }
                break;
                
            case 4: // PONTOS TURÍSTICOS
                printf("Atributo escolhido: PONTOS TURÍSTICOS\n\n");
                printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
                printf("%s: %d pontos\n\n", cidade2, pontosTuristicos2);
                
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("RESULTADO: %s venceu!\n", cidade1);
                } else if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("RESULTADO: %s venceu!\n", cidade2);
                } else {
                    printf("RESULTADO: Empate!\n");
                }
                break;
                
            case 5: // DENSIDADE DEMOGRÁFICA (MENOR VENCE)
                printf("Atributo escolhido: DENSIDADE DEMOGRÁFICA\n\n");
                printf("%s: %.2f hab/km²\n", cidade1, densidade1);
                printf("%s: %.2f hab/km²\n\n", cidade2, densidade2);
                printf("REGRRA: MENOR densidade vence!\n\n");
                
                if (densidade1 < densidade2) {
                    printf("RESULTADO: %s venceu (menor densidade)!\n", cidade1);
                } else if (densidade2 < densidade1) {
                    printf("RESULTADO: %s venceu (menor densidade)!\n", cidade2);
                } else {
                    printf("RESULTADO: Empate!\n");
                }
                break;
                
            case 6: // PIB PER CAPITA
                printf("Atributo escolhido: PIB PER CAPITA\n\n");
                printf("%s: %.2f bilhões/hab\n", cidade1, pibPerCapita1);
                printf("%s: %.2f bilhões/hab\n\n", cidade2, pibPerCapita2);
                
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("RESULTADO: %s venceu!\n", cidade1);
                } else if (pibPerCapita2 > pibPerCapita1) {
                    printf("RESULTADO: %s venceu!\n", cidade2);
                } else {
                    printf("RESULTADO: Empate!\n");
                }
                break;
                
            default: // OPCÃO INVÁLIDA
                printf("OPÇÃO INVÁLIDA! Execute o programa novamente.\n");
        }
    }
    
    // =============================================================
    // NÍVEL 3 - MESTRE (Comparação com 2 atributos)
    // =============================================================
    else if (nivel == 3) {
        printf("=== NÍVEL MESTRE ===\n\n");
        printf("Você vai escolher DOIS atributos para comparar!\n");
        printf("Os valores dos atributos serão SOMADOS para cada carta.\n\n");
        
        // Exibindo resumo das cartas
        printf("Carta 1: %s (%s)\n", cidade1, estado1);
        printf("Carta 2: %s (%s)\n\n", cidade2, estado2);
        
        // =========================================================
        // ESCOLHA DO PRIMEIRO ATRIBUTO
        // =========================================================
        printf("=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica (MENOR valor vence)\n");
        printf("6 - PIB per Capita\n");
        printf("Opção: ");
        scanf("%d", &atributo1);
        
        // Validando primeiro atributo
        atributo1_valido = (atributo1 >= 1 && atributo1 <= 6) ? 1 : 0;
        
        if (!atributo1_valido) {
            printf("\nATRIBUTO INVÁLIDO! Execute o programa novamente.\n");
        } else {
            // =====================================================
            // ESCOLHA DO SEGUNDO ATRIBUTO (DIFERENTE DO PRIMEIRO)
            // =====================================================
            printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");
            printf("ATENÇÃO: Deve ser diferente do primeiro!\n\n");
            
            // Menu dinâmico: mostra apenas opções diferentes do primeiro atributo
            if (atributo1 != 1) printf("1 - População\n");
            if (atributo1 != 2) printf("2 - Área\n");
            if (atributo1 != 3) printf("3 - PIB\n");
            if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
            if (atributo1 != 5) printf("5 - Densidade Demográfica (MENOR valor vence)\n");
            if (atributo1 != 6) printf("6 - PIB per Capita\n");
            
            printf("Opção: ");
            scanf("%d", &atributo2);
            
            // Validando segundo atributo (deve ser diferente do primeiro)
            atributo2_valido = (atributo2 >= 1 && atributo2 <= 6 && atributo2 != atributo1) ? 1 : 0;
            
            if (!atributo2_valido) {
                printf("\nATRIBUTO INVÁLIDO OU REPETIDO! Execute o programa novamente.\n");
            } else {
                printf("\n==========================================\n\n");
                printf("=== COMPARAÇÃO COM DOIS ATRIBUTOS ===\n\n");
                
                // =================================================
                // ATRIBUTO 1 - OBTENDO VALORES
                // =================================================
                // População
                if (atributo1 == 1) {
                    valor1_carta1 = populacao1;
                    valor1_carta2 = populacao2;
                }
                // Área
                else if (atributo1 == 2) {
                    valor1_carta1 = area1;
                    valor1_carta2 = area2;
                }
                // PIB
                else if (atributo1 == 3) {
                    valor1_carta1 = pib1;
                    valor1_carta2 = pib2;
                }
                // Pontos Turísticos
                else if (atributo1 == 4) {
                    valor1_carta1 = pontosTuristicos1;
                    valor1_carta2 = pontosTuristicos2;
                }
                // Densidade Demográfica
                else if (atributo1 == 5) {
                    valor1_carta1 = densidade1;
                    valor1_carta2 = densidade2;
                }
                // PIB per Capita
                else if (atributo1 == 6) {
                    valor1_carta1 = pibPerCapita1;
                    valor1_carta2 = pibPerCapita2;
                }
                
                // =================================================
                // ATRIBUTO 2 - OBTENDO VALORES
                // =================================================
                // População
                if (atributo2 == 1) {
                    valor2_carta1 = populacao1;
                    valor2_carta2 = populacao2;
                }
                // Área
                else if (atributo2 == 2) {
                    valor2_carta1 = area1;
                    valor2_carta2 = area2;
                }
                // PIB
                else if (atributo2 == 3) {
                    valor2_carta1 = pib1;
                    valor2_carta2 = pib2;
                }
                // Pontos Turísticos
                else if (atributo2 == 4) {
                    valor2_carta1 = pontosTuristicos1;
                    valor2_carta2 = pontosTuristicos2;
                }
                // Densidade Demográfica
                else if (atributo2 == 5) {
                    valor2_carta1 = densidade1;
                    valor2_carta2 = densidade2;
                }
                // PIB per Capita
                else if (atributo2 == 6) {
                    valor2_carta1 = pibPerCapita1;
                    valor2_carta2 = pibPerCapita2;
                }
                
                // =================================================
                // EXIBINDO OS VALORES DOS ATRIBUTOS
                // =================================================
                printf("Carta 1 - %s:\n", cidade1);
                
                // Exibe valor do atributo 1
                if (atributo1 == 1) printf("  População: %d habitantes\n", (int)valor1_carta1);
                else if (atributo1 == 2) printf("  Área: %.2f km²\n", valor1_carta1);
                else if (atributo1 == 3) printf("  PIB: %.2f bilhões\n", valor1_carta1);
                else if (atributo1 == 4) printf("  Pontos Turísticos: %d\n", (int)valor1_carta1);
                else if (atributo1 == 5) printf("  Densidade: %.2f hab/km²\n", valor1_carta1);
                else if (atributo1 == 6) printf("  PIB per Capita: %.2f bilhões/hab\n", valor1_carta1);
                
                // Exibe valor do atributo 2
                if (atributo2 == 1) printf("  População: %d habitantes\n", (int)valor2_carta1);
                else if (atributo2 == 2) printf("  Área: %.2f km²\n", valor2_carta1);
                else if (atributo2 == 3) printf("  PIB: %.2f bilhões\n", valor2_carta1);
                else if (atributo2 == 4) printf("  Pontos Turísticos: %d\n", (int)valor2_carta1);
                else if (atributo2 == 5) printf("  Densidade: %.2f hab/km²\n", valor2_carta1);
                else if (atributo2 == 6) printf("  PIB per Capita: %.2f bilhões/hab\n", valor2_carta1);
                
                printf("\nCarta 2 - %s:\n", cidade2);
                
                // Exibe valor do atributo 1
                if (atributo1 == 1) printf("  População: %d habitantes\n", (int)valor1_carta2);
                else if (atributo1 == 2) printf("  Área: %.2f km²\n", valor1_carta2);
                else if (atributo1 == 3) printf("  PIB: %.2f bilhões\n", valor1_carta2);
                else if (atributo1 == 4) printf("  Pontos Turísticos: %d\n", (int)valor1_carta2);
                else if (atributo1 == 5) printf("  Densidade: %.2f hab/km²\n", valor1_carta2);
                else if (atributo1 == 6) printf("  PIB per Capita: %.2f bilhões/hab\n", valor1_carta2);
                
                // Exibe valor do atributo 2
                if (atributo2 == 1) printf("  População: %d habitantes\n", (int)valor2_carta2);
                else if (atributo2 == 2) printf("  Área: %.2f km²\n", valor2_carta2);
                else if (atributo2 == 3) printf("  PIB: %.2f bilhões\n", valor2_carta2);
                else if (atributo2 == 4) printf("  Pontos Turísticos: %d\n", (int)valor2_carta2);
                else if (atributo2 == 5) printf("  Densidade: %.2f hab/km²\n", valor2_carta2);
                else if (atributo2 == 6) printf("  PIB per Capita: %.2f bilhões/hab\n", valor2_carta2);
                
                // =================================================
                // CALCULANDO A SOMA DOS ATRIBUTOS
                // =================================================
                soma1 = valor1_carta1 + valor2_carta1;
                soma2 = valor1_carta2 + valor2_carta2;
                
                printf("\n------------------------------------------\n");
                printf("SOMA DOS ATRIBUTOS:\n");
                printf("%s: %.2f\n", cidade1, soma1);
                printf("%s: %.2f\n", cidade2, soma2);
                printf("------------------------------------------\n\n");
                
                // =================================================
                // COMPARAÇÃO FINAL COM OPERADOR TERNÁRIO
                // =================================================
                printf("=== RESULTADO FINAL ===\n\n");
                
                // USANDO OPERADOR TERNÁRIO PARA RESULTADO SIMPLIFICADO
                (soma1 > soma2) ? printf("VENCEDORA: %s\n", cidade1) :
                (soma2 > soma1) ? printf("VENCEDORA: %s\n", cidade2) :
                printf("RESULTADO: EMPATE!\n");
                
                // Explicação detalhada
                if (soma1 > soma2) {
                    printf("\n%s venceu por ter maior soma dos atributos!\n", cidade1);
                } else if (soma2 > soma1) {
                    printf("\n%s venceu por ter maior soma dos atributos!\n", cidade2);
                } else {
                    printf("\nAs duas cartas tiveram a mesma soma!\n");
                }
            }
        }
    }
    
    // =============================================================
    // NÍVEL INVÁLIDO
    // =============================================================
    else {
        printf("NÍVEL INVÁLIDO! Execute o programa novamente.\n");
    }
    
    printf("\n==========================================\n");
    printf("           FIM DO JOGO                    \n");
    printf("==========================================\n");
    
    return 0;
}