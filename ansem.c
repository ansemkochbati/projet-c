#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int compte_id;
    char nom_proprietaire[100];
    double solde;
} CompteBancaire;

typedef struct {
    int pret_id;
    int compte_id;
    double montant;
    double taux_interet;
    int duree;
} Pret;

void creerNouveauCompte() {
    CompteBancaire nouveauCompte;
    printf("Entrer l'ID du compte: ");
    scanf("%d", &nouveauCompte.compte_id);
    printf("Entrer le nom du proprietaire: ");
    scanf("%s", nouveauCompte.nom_proprietaire);
    nouveauCompte.solde = 0;
    printf("Nouveau compte cree avec succes.\n");
}

void miseAJourCompte() {
    int compte_id;
    printf("Entrer l'ID du compte à mettre à jour: ");
    scanf("%d", &compte_id);
    printf("Mise à jour du compte ID %d.\n", compte_id);
}

void afficherTransactions() {
    int compte_id;
    printf("Entrer l'ID du compte pour voir les transactions: ");
    scanf("%d", &compte_id);
    printf("Transactions pour le compte ID %d.\n", compte_id);
}

void supprimerCompte() {
    int compte_id;
    printf("Entrer l'ID du compte à supprimer: ");
    scanf("%d", &compte_id);
    printf("Compte ID %d supprimé.\n", compte_id);
}

void afficherDetailsCompte() {
    int compte_id;
    printf("Entrer l'ID du compte à afficher: ");
    scanf("%d", &compte_id);
    printf("Détails du compte ID %d.\n", compte_id);
}

void afficherListeClients() {
    printf("Liste de tous les clients.\n");
}

void gestionPrets() {
    printf("Gestion des prêts bancaires.\n");
}

int main() {
    int choix;
    do {
        printf("\nMenu E-Bank\n");
        printf("1. Creer un nouveau compte\n");
        printf("2. Mise à jour des informations d'un compte\n");
        printf("3. Afficher les transactions bancaires\n");
        printf("4. Supprimer un compte existant\n");
        printf("5. Afficher les détails d'un compte\n");
        printf("6. Afficher la liste des clients\n");
        printf("7. Gestion des prets\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: creerNouveauCompte(); break;
            case 2: miseAJourCompte(); break;
            case 3: afficherTransactions(); break;
            case 4: supprimerCompte(); break;
            case 5: afficherDetailsCompte(); break;
            case 6: afficherListeClients(); break;
            case 7: gestionPrets(); break;
            case 0: printf("Au revoir!\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while(choix != 0);

    return 0;
} 


