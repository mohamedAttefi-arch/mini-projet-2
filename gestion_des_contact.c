#include<stdio.h>
#include<string.h>

struct contact
{
    char nom[50];
    char email[50];
    int telephone[20];
};

int main()
{
    int choix;
    int n = 0;
    int contact_a_ajouter;
    do
    {
        printf("**********LE MENU**********");
        printf("1.pour ajouter des contact");
        printf("2.pour modifier un contact");
        printf("3.pour suprimer un contact");
        printf("4.pour afficher tous les contact");
        printf("1.pour chercher un contact");
        printf("0.pour quitter");

        switch (choix)
        {
        case 1:
            printf("entrez le nombre des contact a ajouter: ");
            scanf("%d", &contact_a_ajouter);
            getchar();

    for (int i = 0; i < contact_a_ajouter ; i++)
            {
                /* code */
            }
            
            break;
        
        default:
            break;
        }
    } while (choix != 0);
    
    

}
