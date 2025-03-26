#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração das funções
void separador(); 
void entrar_no_jogo(); 
void exibir_menu(); 
void voltar_ao_menu(); 
int perguntas_respostas(); 
int Cobra_na_caixa();
void gousma_war();
void sair();

int main() {
    int options;

    system("cls"); // Limpa a tela
    
    entrar_no_jogo(); // Chama a função para exibir a tela inicial do jogo
    
    exibir_menu(); // Exibe o menu de opções

    scanf(" %i", &options); // Lê a opção escolhida pelo jogador

    // Se o jogador escolher a opção 1, chama a função perguntas_respostas
    if (options == 1) {
        perguntas_respostas();
    }
    // Se o jogador escolher a opção 2, chama a função Cobra_na_caixa
    else if (options == 2) {
        Cobra_na_caixa();
    }

    else if (options == 3){
        gousma_war();
    }
    
    else if (options == 4){
        sair();
    }

    else{
        printf("digite algo valido");
        getchar();
        getchar();
        main();
    }
    return 0; 
}

// Função para imprimir um separador visual no console
void separador() {
    printf("-------------------------------------------------------------------------------\n");
}

// Função que exibe a tela de boas-vindas
void entrar_no_jogo() {
    separador();
    printf("Bem vindo ao arcade mania!!!\n");
    printf("Aluno: Gabriel Augusto\n");
    separador();
    printf("Pressione \"enter\" para continuar...\n");
    getchar(); // Espera o usuário pressionar enter
    system("cls"); // Limpa a tela
}

// Função que exibe o menu de opções do jogo
void exibir_menu() {
    separador();
    printf("Arcade Mania!!!\n");
    printf("Escolha o jogo que voce jogar!!!\n");
    printf("1 - Perguntas e respostas\n");
    printf("2 - Cobra na caixa\n");
    printf("3 - Gousmas war\n");
    printf("4 - Sair\n");
    separador();
}

// Função que volta ao menu principal
void voltar_ao_menu() {
    system("cls");
    getchar();
    printf("Pressione \"enter\" para voltar ao menu...\n");
    getchar(); // Espera o usuário pressionar enter
    main(); // Chama a função principal novamente
}

// Função para sair do jogo
void sair(){
    printf("desligando...");
    exit;
}


// Função do jogo de Perguntas e Respostas
int perguntas_respostas() {
    char resposta, inicio;
    int contador = 0; 
    
    system("cls");

    separador();
    printf("Seja bem vindo ao Perguntas e respostas\n");
    printf("Podemos iniciar? y/n?\n");
    separador();

    scanf(" %c", &inicio);

    // Enquanto o jogador responder 'y' ou 'Y', o jogo de perguntas continua
    while (inicio == 'y' || inicio == 'Y') {
        system("cls");

        separador();
        printf("1 - Qual a materia do professor Pedro Giroto?\n");
        printf("a) Logica Digital\n");
        printf("b) Algebra linear\n");
        printf("c) Algoritimos\n");
        separador();
        
        scanf(" %c", &resposta);

        // Verifica se a resposta está correta e atualiza a pontuação
        if (resposta == 'c' || resposta == 'C') {
            system("cls");
            contador++;
            printf("parabens!! sua pontuacao e de %d\n", contador);
        } else {
            system("cls");
            printf("resposta errada!!\n");
            printf("A resposta correta e 'C'\n");
        }
        
        getchar();
        printf("Pressione \"enter\" para continuar...\n");
        getchar();
        system("cls");

        // Outras perguntas seguem o mesmo padrão
        separador();
        printf("2 - Como se chama o estilo de jogo aonde voce interpreta um papel e tradicionalmente sobe de nivel para ficar mais forte?\n");
        printf("a) Fps\n");
        printf("b) Indie\n");
        printf("c) Rpg\n");
        separador();

        scanf(" %c", &resposta);

        if (resposta == 'c' || resposta == 'C') {
            system("cls");
            contador++;
            printf("parabens!! sua pontuacao e de %d\n", contador);
        } else {
            system("cls");
            printf("resposta errada!!\n");
            printf("A resposta correta e 'C'\n");
        }

        getchar();
        printf("Pressione \"enter\" para continuar...\n");
        getchar();
        system("cls");

        separador();
        printf("3 - Em que ano foi lancado GTA 5?\n");
        printf("a) 2010\n");
        printf("b) 2013\n");
        printf("c) 2015\n");
        separador();

        scanf(" %c", &resposta);

        if (resposta == 'b' || resposta == 'B') {
            system("cls");
            contador++;
            printf("parabens!! sua pontuacao e de %d\n", contador);
        } else {
            system("cls");
            printf("resposta errada!!\n");
            printf("A resposta correta e 'B'\n");
        }

        getchar();
        printf("Pressione \"enter\" para continuar...\n");
        getchar();
        system("cls");

        separador();
        printf("4 - Qual o app mais usado pra reproducao de musica?\n");
        printf("a) spotify\n");
        printf("b) youtube music\n");
        printf("c) apple music\n");
        separador();

        scanf(" %c", &resposta);

        if (resposta == 'a' || resposta == 'A') {
            system("cls");
            contador++;
            printf("parabens!! sua pontuacao e de %d\n", contador);
        } else {
            system("cls");
            printf("resposta errada!!\n");
            printf("A resposta correta e 'A'\n");
        }

        getchar();
        printf("Pressione \"enter\" para continuar...\n");
        getchar();
        system("cls");

        separador();
        printf("5 - Qual a capital dos EUA?\n");
        printf("a) Washington, D.C.\n");
        printf("b) Miami, Florida\n");
        printf("c) Toroto, Canada\n");
        separador();

        scanf(" %c", &resposta);

        if (resposta == 'a' || resposta == 'A') {
            system("cls");
            contador++;
            printf("parabens!! sua pontuacao e de %d\n", contador);
        } else {
            system("cls");
            printf("resposta errada!!\n");
            printf("A resposta correta e 'A'\n");
        }

        getchar();
        printf("Pressione \"enter\" para continuar...\n");
        getchar();
        system("cls");

        separador();
        printf("Parabens sua pontuacao foi de %i\n", contador);
        printf("Deseja continuar jogando? y/n\n");
        separador();
        
        scanf(" %c", &resposta);

        if (resposta == 'n' || resposta == 'N') {
            voltar_ao_menu();
        }

    }
    // Se o jogador escolher 'n' ou 'N', volta ao menu
    if (inicio == 'n' || inicio == 'N') {
        voltar_ao_menu();        
    } else {
        getchar();
        printf("Digite uma opcao valida!!\npressione enter...");
        getchar();
        perguntas_respostas(); // Chama a função novamente se a resposta for inválida
    }
    return 0;
}

// Função do jogo "Cobra na caixa"
int Cobra_na_caixa() {
    system("cls");

    char inicio2;
    
    // Array com todos os nomes dos jogadores
    char nomes[7][30] = {
        "1 - Gabriel",
        "2 - Joao",
        "3 - Felipe",
        "4 - Pedro",
        "5 - Kadu",
        "6 - Giovanni",
        "7 - Eleres"
    };
    
    int nomeselecionado; // Armazena a escolha do jogador
    int escolhacaixa;    // Armazena a escolha da caixa
    int botEscolha;      // Armazena a escolha do bot
    int Botao = 0;
    int cobra = 0;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    separador();
    printf("Seja bem-vindo ao Cobra na Caixa\n");
    printf("Podemos iniciar? y/n?\n");
    separador();

    scanf(" %c", &inicio2);

    // Enquanto o jogador escolher 'y' ou 'Y', o jogo continua
    while (inicio2 == 'y' || inicio2 == 'Y') {
        system("cls");

        separador();
        printf("Bem-vindo ao Egito!!\nOs 7 aventureiros desse jogo se encontram presos numa tumba antiga!!\n");
        printf("Agora para escapar eles precisam testar a sorte para sobreviver...\n");
        separador();
        printf("Pressione \"enter\" para continuar...\n");
        getchar();
        getchar(); // Duas chamadas para limpar o buffer
        system("cls");    

        separador();
        printf("Escolha um nome para jogar!!\n");
        for (int i = 0; i < 7; i++) {
            printf("%s\n", nomes[i]);
        }
        separador();
        
        scanf(" %i", &nomeselecionado);
        
        // Valida a escolha do nome
        if (nomeselecionado < 1 || nomeselecionado > 7) {
            system("cls");
            printf("Escolha invalida. Tente novamente.\n");
            printf("Pressione \"enter\" para continuar...\n");
            getchar();
            getchar();
            continue;
        }

        system("cls");
        printf("Seja bem-vindo %s!! Vamos iniciar o jogo!\n", nomes[nomeselecionado - 1] + 4);
        printf("Pressione \"enter\" para continuar...\n");
        getchar();
        getchar();
        system("cls");

        // Gerar números aleatórios para as caixas da cobra e do botão
        cobra = (rand() % 5) + 1; 
        do {
            Botao = (rand() % 5) + 1;
        } while (Botao == cobra); // O botão não pode estar na mesma caixa que a cobra

        int turnoJogador = 1; // 1 para jogador, 0 para bot
        int ganhou = 0;       // Variável para verificar se alguém venceu

        // O jogo continua até alguém encontrar o botão correto ou perder
        do {
            if (turnoJogador) {
                // Turno do jogador
                separador();
                printf("%s, Selecione uma caixa!! (1-5)\n", nomes[nomeselecionado - 1] + 4);
                printf("[1] [2] [3] [4] [5]\n"); // Representação do tabuleiro
                separador();
                scanf(" %d", &escolhacaixa);

                if (escolhacaixa < 1 || escolhacaixa > 5) {
                    printf("Escolha invalida! Tente novamente.\n");
                    continue;
                }

                // Verifica se o jogador escolheu a caixa com a cobra
                if (escolhacaixa == cobra) {
                    system("cls");
                    separador();
                    printf("A cobra estava na caixa %d! Voce perdeu!!\n", cobra);
                    separador();
                    printf("Pressione \"enter\" para continuar...\n");
                    getchar();
                    getchar();
                    system("cls");
                    break;
                }
                // Se o jogador encontrou o botão, ele vence
                else if (escolhacaixa == Botao) {
                    system("cls");
                    separador();
                    printf("Parabens! Voce encontrou o botao e escapou!!\n");
                    separador();
                    printf("Pressione \"enter\" para continuar...\n");
                    getchar();
                    getchar();
                    system("cls");
                    ganhou = 1;  // Jogador venceu
                    break;
                } 
                else {
                    system("cls");
                    separador();
                    printf("O botao nao estava na caixa %d, agora e o turno do bot!\n", escolhacaixa);
                    separador();
                    printf("Pressione \"enter\" para continuar...\n");
                    getchar();
                    getchar();
                    system("cls");
                }
            } else {
                // Turno do bot
                printf("Turno do bot...\n");
                
                // O bot escolhe aleatoriamente uma caixa que não foi escolhida antes
                do {
                    botEscolha = (rand() % 5) + 1;
                } while (botEscolha == escolhacaixa); // Evita repetir a última escolha do jogador
                
                printf("O bot escolheu a caixa %d\n", botEscolha);
                
                if (botEscolha == cobra) {
                    system("cls");
                    separador();
                    printf("A cobra estava na caixa %d! O bot perdeu!! Voce venceu!\n", cobra);
                    separador();
                    printf("Pressione \"enter\" para continuar...\n");
                    getchar();
                    getchar();
                    system("cls");
                    ganhou = 1;  // Jogador vence porque o bot perdeu
                    break;
                } 
                
                else if (botEscolha == Botao) {
                    system("cls");
                    separador();
                    printf("O bot encontrou o botao na caixa %d! Voce perdeu!\n", Botao);
                    separador();
                    printf("Pressione \"enter\" para continuar...\n");
                    getchar();
                    getchar();
                    system("cls");
                    break;
                } 
                
                else {
                    system("cls");
                    separador();
                    printf("O bot errou! Agora e seu turno novamente!\n");
                    separador();
                    printf("Pressione \"enter\" para continuar...\n");
                    getchar();
                    getchar();
                    system("cls");
                }
            }
            
            // Alterna os turnos
            turnoJogador = !turnoJogador;

        } while (!ganhou); // Continua até alguém vencer ou perder

        // Pergunta se o jogador deseja continuar
        separador();
        printf("Deseja jogar novamente? y/n\n");
        separador();
        scanf(" %c", &inicio2);

        if (inicio2 == 'n' || inicio2 == 'N') {
            voltar_ao_menu();
            break;
        } else if (inicio2 != 'y' && inicio2 != 'Y') {
            system("cls");
            printf("Opcao invalida!\n");
            printf("Pressione \"enter\" para continuar...\n");
            getchar();
            Cobra_na_caixa();
            getchar();
        }
    }

    if (inicio2 == 'n' || inicio2 == 'N') {
        voltar_ao_menu();
    }
    else {
        getchar();
        printf("Digite uma opcao valida!!\n");
        printf("Pressione \"enter\" para continuar...\n");
        getchar();
        Cobra_na_caixa();
    }
    
    return 0;
}

void gousma_war(){
    
    system("cls");
    
    int handp1 = 1, handp2 = 1;  // Seus gousmas (mao 1 e mao 2)
    int handb1 = 1, handb2 = 1;  // Gousmas do bot
    char inicio3;
    
    srand(time(NULL));

    separador();
    printf("Seja bem-vindo ao Gousmas War\n");
    printf("Podemos iniciar? (y/n)\n");
    separador();
    scanf(" %c", &inicio3);

    while (inicio3 == 'y' || inicio3 == 'Y') {
        // Reset do jogo
        handp1 = handp2 = handb1 = handb2 = 1;
        
        while (1) {
            system("cls");
            separador();
            printf("SUAS MAOS: [Mao 1: %d] [Mao 2: %d]\n", handp1, handp2);
            printf("MAOS DO BOT: [%d] [%d]\n", handb1, handb2);
            separador();
            
            // Turno do jogador
            int escolha_mao, escolha_alvo;
            separador();
            printf("Escolha qual MAO usar para atacar:\n");
            printf("1 - Mao 1 (%d)\n", handp1);
            printf("2 - Mao 2 (%d)\n", handp2);
            printf("3 - Dividir valores entre suas maos\n");
            printf("Escolha: ");
            separador();
            scanf("%d", &escolha_mao);
            
            if (escolha_mao == 1 || escolha_mao == 2) {
                separador();
                printf("Escolha qual MAO do BOT atacar:\n");
                printf("1 - Mao 1 do bot (%d)\n", handb1);
                printf("2 - Mao 2 do bot (%d)\n", handb2);
                printf("Escolha: ");
                separador();
                scanf("%d", &escolha_alvo);
                
                if (escolha_mao == 1) {
                    if (escolha_alvo == 1) handb1 += handp1;
                    else handb2 += handp1;
                    printf("Voce atacou com a Mao 1 (%d)!\n", handp1);
                } else {
                    if (escolha_alvo == 1) handb1 += handp2;
                    else handb2 += handp2;
                    printf("Voce atacou com a Mao 2 (%d)!\n", handp2);
                }
            }
            else if (escolha_mao == 3) {
                // Divide igualmente entre suas maos
                int total = handp1 + handp2;
                handp1 = total / 2;
                handp2 = total - handp1;
                printf("Voce dividiu suas maos igualmente!\n");
            }
            
            printf("Pressione ENTER para continuar...");
            getchar(); getchar();
            
            // Verifica vitoria
            if (handb1 >= 5 || handb2 >= 5) {
                system("cls");
                printf("VOCE VENCEU! As maos do bot explodiram!\n");
                break;
            }
            
            // Turno do bot (logica simples)
            printf("\nVEZ DO BOT (pressione ENTER)...");
            getchar();
            system("cls");
            
            if (rand() % 2 == 0 && (handb1 + handb2) > 3) {
                // Bot escolhe dividir
                int total = handb1 + handb2;
                handb1 = total / 2;
                handb2 = total - handb1;
                printf("O bot dividiu as maos dele!\n");
            } else {
                // Bot escolhe atacar
                int mao_ataque = (handb1 > handb2) ? handb1 : handb2;
                if (rand() % 2 == 0) {
                    handp1 += mao_ataque;
                    printf("O bot atacou sua Mao 1 com forca %d!\n", mao_ataque);
                } else {
                    handp2 += mao_ataque;
                    printf("O bot atacou sua Mao 2 com forca %d!\n", mao_ataque);
                }
            }
            
            printf("Pressione ENTER para continuar...");
            getchar();
            
            // Verifica derrota
            if (handp1 >= 5 || handp2 >= 5) {
                system("cls");
                printf("VOCE PERDEU! Suas maos explodiram!\n");
                break;
            }
        }
        
        // Jogar novamente?
        separador();
        printf("Jogar novamente? (y/n): ");
        scanf(" %c", &inicio3);
    }
    // Voltar ao menu
    printf("Pressione ENTER para voltar ao menu...");
    getchar(); getchar();
}
    





