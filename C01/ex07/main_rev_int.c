#include <unistd.h>
#include <stdio.h>
void    ft_rev_int_tab(int *tab, int size);

int main() {
    // Définir un tableau d'entiers
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    // Afficher le tableau avant l'inversion
    printf("Tableau avant inversion :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Appeler la fonction pour inverser le tableau
    ft_rev_int_tab(tab, size);

    // Afficher le tableau après l'inversion
    printf("Tableau après inversion :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
