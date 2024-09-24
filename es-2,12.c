#include <stdio.h>

int main()
{
    int giorno1, giorno2;
    int mese1, mese2;
    int anno1, anno2;
    int differenza;

    printf("Calcola la differenza tra 2 date in gg/mm/aa\n");
    printf("Inserisci i dati della prima data:\n");
    printf("Giorno:");
    scanf("%d", &giorno1);
    printf("Mese:");
    scanf("%d", &mese1);
    printf("Anno:");
    scanf("%d", &anno1);

    printf("Inserisci i dati della seconda data:\n");
    printf("Giorno:");
    scanf("%d", &giorno2);
    printf("Mese:");
    scanf("%d", &mese2);
    printf("Anno:");
    scanf("%d", &anno2);

    // 1 Mese = 30 giorni; 1 Anno = 365 giorni
    differenza = (giorno1-giorno2)+((mese1-mese2)*30)+((anno1-anno2)*365);
    giorno1 = differenza%30;
    mese1 = (differenza/30)%12;
    anno1 = differenza/360;

    printf("Tra le due date sono passati %d giorni %d mesi e %d anni", giorno1, mese1, anno1);
}