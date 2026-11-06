# TP : Surcharge des opérateurs en C++

## Objectif
Ce TP a pour objectif de comprendre et de pratiquer la surcharge des opérateurs en C++ à travers quatre exercices.

## Exercices réalisés

### Exercice 1 : Classe Vecteur2D
- Création d'une classe `Vecteur2D`.
- Définition des attributs privés `x` et `y`.
- Création d'un constructeur.
- Surcharge de l'opérateur `+` pour additionner deux vecteurs.
- Ajout d'une méthode `afficher()`.
<img width="1920" height="1080" alt="12 1" src="https://github.com/user-attachments/assets/77bc5741-2c26-4fe0-8498-c2fe8219f999" />

### Exercice 2 : Classe Date
- Création d'une classe `Date`.
- Définition des attributs `jour`, `mois` et `annee`.
- Création d'un constructeur.
- Surcharge de l'opérateur `==` pour comparer deux dates.
- Surcharge de l'opérateur `!=` pour vérifier si deux dates sont différentes.
<img width="1920" height="1080" alt="12 2" src="https://github.com/user-attachments/assets/bfefa12a-be27-4e22-a58f-640cb7237583" />

### Exercice 3 : Classe Tableau
- Création d'une classe `Tableau`.
- Utilisation d'un pointeur dynamique `int* data`.
- Allocation dynamique avec `new[]`.
- Surcharge de l'opérateur `[]` pour accéder aux éléments.
- Gestion des indices invalides avec les exceptions.
- Libération de la mémoire avec le destructeur `delete[]`.
<img width="1920" height="1080" alt="12 3" src="https://github.com/user-attachments/assets/568e2157-67a7-4a2d-b1ce-8810bbada6a4" />

### Exercice 4 : Classe Produit
- Création d'une classe `Produit`.
- Définition des attributs `nom`, `prix` et `quantite`.
- Création d'un constructeur.
- Surcharge de l'opérateur `<<` comme fonction amie (`friend`).
- Affichage direct d'un objet avec `cout`.
<img width="1920" height="1080" alt="12 4" src="https://github.com/user-attachments/assets/780a1868-0e19-4c92-93a0-043672c76d56" />
