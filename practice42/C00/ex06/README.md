## Exercice 05 : ft_print_comb

|Exercice 06|
|:---:|
|ft_print_comb2|
|Dossier de rendu(Turn-in directory) : ex06/|
|Fichiers à rendre(Files to turn in) : ft_print_comb2.c|
|Fonctions Autorisée(Allowed functions) : write|

- Écrire une fonction qui affiche toutes les différentes combinaisons de deux nombres entre 0 et 99, dans l'ordre croissant.
- 00과 99 사이의 두 자릿수 숫자를 오름차순으로 출력하는 함수를 작성하세요.
- Cela donne quelque chose comme ça : 
- 다음과 같이 출력되어야 합니다. : 

```
$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98, 99$>
```

- Elle devra être prototypée de la façon suivante :
- 프로토타입은 다음과 같이 선언합니다. : 

```
void ft_print_comb2(void);
```