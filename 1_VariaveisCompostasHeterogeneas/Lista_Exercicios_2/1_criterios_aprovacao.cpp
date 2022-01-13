# include <cstdio>


int main(){

    // Declarar variaveis.
    int estudantes, n, i;
    float nota1, nota2;
    float pratica1, pratica2, pratica3;
    // Ler N estudantes;
    scanf("%d",&estudantes);
    n = estudantes;
    // Ler 3 notas de N estudantes
    float P1[n], P2[n], P3[n];
    for(i=0; i<estudantes; i++){
        // Ler praticas
        scanf("%f %f %f", &pratica1, &pratica2, &pratica3);
        P1[i] = pratica1;
        P2[i] = pratica2;
        P3[i] = pratica3;
    }

    printf("Notas PRATICAS lidas\n");
    float T1[n], T2[n];
    for(i=0;i<estudantes;i++){
        // Ler as entradas nota1, nota2.
        scanf("%f %f", &nota1, &nota2);
        T1[i] = nota1;
        T2[i] = nota2;
    }
    printf("Notas TEORICAS lidas\n");
    // Processamento media de P e da media T
    float P_media[n], T_media[n];
    for(i=0;i<n;i++){
        P_media[i] = (P1[i]+P2[i]+P3[i])/3.0;

        T_media[i] = (T1[i] + T2[i])/2.0;
    }
    // Até aqui computamos as medias de cada estudante sem as alteraçoes.
    // Alteraçoes 1 - Adicionar 10% de bonus a media P.
    for(i=0;i<n;i++) {
        P_media[i] = P_media[i]+ (0.1 * P_media[i]);
    }
    // Alteraçoes 2 - Faz a nota T original vezes 10 e dividida pela maior nota T entre os
    // Estudantes da turma.
    // Computar a maior media T entre os estudantes.
    float maiorT;
    maiorT = T_media[0];
    for(i=1; i<n; i++) {
        if(maiorT < T_media[i]){
            maiorT = T_media[i];
        }
    }
    // Computar a T_media final.
    for(i=0; i<n; i++) {
        T_media[i] = (T_media[i] * 10) / maiorT;
    }
    // Computar a MEDIA FINAL.
    float final[n];
    for(i = 0;i < n; i++){
        final[i] = (P_media[i] + T_media[i])/2.0;
    }

    // Computar dentre todas as mediasP, a maior de todas, com as alteraçoes.
    float maiorP;
    maiorP = P_media[0];
    for(i=1; i<n; i++) {
        if(maiorP < P_media[i]){
            maiorP = P_media[i];
        }
    }

    // Imprimir P_media com todas as alteraçoes
    float m_P_media = 0;
    for(i=0; i<n; i++) {
        m_P_media = m_P_media + P_media[i];
    }
     m_P_media = m_P_media/n;
    // Imprimir T_media com todas as alteraçoes
     float m_T_media = 0;
    for(i=0; i<n; i++) {
        m_T_media = m_T_media + T_media[i];
    }
     m_T_media = m_T_media/n;


    // Saida de dados.
    printf("\n");
    for(i=0;i<n;i++){
        printf("%.1f\n", final[i]);
    }

    printf("Max P: %.1f\n", maiorP);
    printf("Max T: %.1f\n", maiorT);
    printf("Media P: %.1f\n", m_P_media);
    printf("Media T: %.1f\n", m_T_media);

    return 0;
}