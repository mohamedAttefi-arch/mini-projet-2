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
    struct contact con[50];
    int choix;
    int n = 0;
    int contact_a_ajouter;
    char contact_a_chercher[50];
    int found = 0;
    do
    {
        int found = 0;
        printf("\n**********LE MENU**********\n");
        printf("1.pour ajouter des contact\n");
        printf("2.pour modifier un contact\n");
        printf("3.pour suprimer un contact\n");
        printf("4.pour afficher tous les contact\n");
        printf("5.pour chercher un contact\n");
        printf("0.pour quitter\n");
        printf("entrez votre choix: \n");
        scanf("%d", &choix);
        getchar();

        switch (choix)
        {
        case 1:
            printf("entrez le nombre des contact a ajouter: ");
            scanf("%d", &contact_a_ajouter);
            getchar();

            for (int i = 0; i < contact_a_ajouter + n ; i++)
            {
                printf("\nentrez le nom de %d contact: ", i +1);
                fgets(con[i].nom, 50, stdin);
                con[i].nom[strcspn(con[i].nom,"\n")] = 0;

                printf("\nentrez l'email de %d contact: ", i +1);
                fgets(con[i].email, 50, stdin);
                con[i].email[strcspn(con[i].email,"\n")] = 0;

                printf("\nentrez le numero de %d contact: ", i +1);
                scanf("%d", con[i].telephone);
                getchar();
            }
            n += contact_a_ajouter;
            break;
        
        case 2:
            
            printf("entrez le nom du contact a modifier: ");
            fgets(contact_a_chercher, 50, stdin);
            contact_a_chercher[strcspn(contact_a_chercher, "\n")] = 0;
            
            for (int i = 0; i < n; i++)
            {
                if (strcmp(con[i].nom, contact_a_chercher) == 0)
                {
                    printf("\nl'email actuel: %s",con[i].email);
                    printf("\nle nouveau email: ");
                    fgets(con[i].email, 50, stdin);
                    con[i].email[strcspn(con[i].email, "\n")] = 0;

                    printf("\nle numero actuel: %s",con[i].telephone);
                    printf("\nle nouveau numero: ");
                    scanf("%d", con[i].telephone);
                    getchar();
                    found = 1;
                    printf("\nle contact mise à jour");
                    break;
                }
                
            }
            if (!found)
                {
                    printf("\ncontact non trouvé");
                }
            break;
        case 3:
            char contact_a_suprimer[50];
            printf("entrez le nom du contact a suprimer");
            fgets(contact_a_suprimer, 50, stdin);
            contact_a_suprimer[strcspn(contact_a_suprimer, "\n")] = 0;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(con[i].nom, contact_a_suprimer) == 0)
                {
                    for (int j = i; i < n - 1; j++)
                    {
                        con[j] = con[j + 1];
                    }
                    n--;
                    found = 1;
                    printf("\nle contact est suprimmer");
                    break;
                }
            }
            if (!found)
                {
                    printf("\ncontact non trouvé");
                }
            break;
        case 4:
            printf("\n*** Liste des contacts ***\n");
                for (int i= 0; i < n; i++) 
                {
                    printf("le contact %d:\n", i + 1);
                    printf("  nom: %s\n", con[i].nom);
                    printf("  email: %s\n", con[i].email);
                    printf("  telephone: %d\n", con[i].telephone);
                }
            break;
        case 5:
            printf("Entrez le nom du contact a chercher: ");
                fgets(contact_a_chercher, 50, stdin);
                contact_a_chercher[strcspn(contact_a_chercher, "\n")] = 0;//remove newline
                
                for (int i = 0; i < n; i++) {
                    if (strcmp(con[i].nom, contact_a_chercher) == 0)
                    {
                        printf("telephone et l'email de ce contact sont: \n");
                        printf("%s\n", con[i].email);
                        printf("%d\n", con[i].telephone);
                        found = 1;
                        
                    }
                }
                    if (!found)
                    {
                        printf("contact introuvable");
                    }
                    break;
        case 0:
            printf("au revoir");
                    
        }
    } while (choix != 0);
    
}
