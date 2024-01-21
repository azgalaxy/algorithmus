#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct InfoNote {
    char matiere[10];
    float valeur;
    int coeff;
};

typedef struct InfoNote Note;

struct Etudiant {
    char nom_prenom[20];
    int code;
    Note tabNotes[3];
};

typedef struct Etudiant Etudiant;

Note saisirNote() {
    Note nouvelleNote;

    printf("Entrez la matiere : ");
    scanf("%s", nouvelleNote.matiere);

    printf("Entrez la valeur : ");
    scanf("%f", &nouvelleNote.valeur);

    printf("Entrez le coefficient : ");
    scanf("%d", &nouvelleNote.coeff);

    return nouvelleNote;
}

void afficherNote(Note n) {
    printf("Matiere: %s\n", n.matiere);
    printf("Valeur: %.2f\n", n.valeur);
    printf("Coefficient: %d\n", n.coeff);
}

void remplirTabNotes(Note tabNotes[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Saisir la note %d :\n", i + 1);
        tabNotes[i] = saisirNote();
    }
}

void afficherTabNotes(Note tabNotes[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Note %d :\n", i + 1);
        afficherNote(tabNotes[i]);
        printf("\n");
    }
}

float calculerMoyenne(Note tabNotes[3]) {
    float sommeNotes = 0;
    int sommeCoeffs = 0;

    for (int i = 0; i < 3; i++) {
        sommeNotes += tabNotes[i].valeur * tabNotes[i].coeff;
        sommeCoeffs += tabNotes[i].coeff;
    }

    if (sommeCoeffs != 0) {
        return sommeNotes / sommeCoeffs;
    } else {
        return 0;
    }
}

Etudiant saisirEtudiant() {
    Etudiant nouvelEtudiant;

    printf("Entrez le nom et prenom de l'etudiant : ");
    scanf("%s", nouvelEtudiant.nom_prenom);

    printf("Entrez le code de l'etudiant : ");
    scanf("%d", &nouvelEtudiant.code);

    printf("Saisir les notes de l'etudiant :\n");
    remplirTabNotes(nouvelEtudiant.tabNotes);

    return nouvelEtudiant;
}

void afficherEtudiant(Etudiant e) {
    printf("Nom et prenom de l'etudiant : %s\n", e.nom_prenom);
    printf("Code de l'etudiant : %d\n", e.code);
    printf("Notes de l'etudiant :\n");
    afficherTabNotes(e.tabNotes);
}

void remplirTabEtudiant(Etudiant* T, int n) {
    for (int i = 0; i < n; i++) {
        printf("Saisir les informations de l'etudiant %d :\n", i + 1);
        T[i] = saisirEtudiant();
    }
}

void afficherTabEtudiant(Etudiant* T, int n) {
    for (int i = 0; i < n; i++) {
        printf("Etudiant %d :\n", i + 1);
        afficherEtudiant(T[i]);
        printf("\n");
    }
}

void chercherEtudiant(Etudiant* T, int n, char* np) {
    int etudiantTrouve = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(T[i].nom_prenom, np) == 0) {
            printf("Informations de l'etudiant :\n");
            afficherEtudiant(T[i]);
            etudiantTrouve = 1;
            break;
        }
    }

    if (!etudiantTrouve) {
        printf("Etudiant Non existant\n");
    }
}

void afficherNotes(Etudiant* T, int n, int c) {
    int etudiantTrouve = 0;

    for (int i = 0; i < n; i++) {
        if (T[i].code == c) {
            printf("Notes de l'etudiant avec le code %d :\n", c);
            afficherTabNotes(T[i].tabNotes);
            etudiantTrouve = 1;
            break;
        }
    }

    if (!etudiantTrouve) {
        printf("Etudiant Non existant\n");
    }
}

float calculerMoyenneEtudiant(Etudiant* T, int n, int c) {
    for (int i = 0; i < n; i++) {
        if (T[i].code == c) {
            return calculerMoyenne(T[i].tabNotes);
        }
    }

    return -1;
}

void modifierCode(Etudiant* e, int c) {
    e->code = c;
}

int main() {
    int n;
    printf("Entrez le nombre d'etudiants : ");
    scanf("%d", &n);

    Etudiant* T = (Etudiant*)malloc(n * sizeof(Etudiant));

    remplirTabEtudiant(T, n);

    char nom_prenom[20];
    printf("Entrez le nom et prenom de l'etudiant a rechercher : ");
    scanf("%s", nom_prenom);

    chercherEtudiant(T, n, nom_prenom);

    int code;
    printf("Entrez le code de l'etudiant pour afficher ses notes : ");
    scanf("%d", &code);

    afficherNotes(T, n, code);

    float moyenne = calculerMoyenneEtudiant(T, n, code);
    if (moyenne != -1) {
        printf("La moyenne de l'etudiant avec le code %d est : %.2f\n", code, moyenne);
    } else {
        printf("Impossible de calculer la moyenne. Etudiant non existant.\n");
    }

    modifierCode(&T[0], 20);

    afficherTabEtudiant(T, n);

    free(T);

    return 0;
}
