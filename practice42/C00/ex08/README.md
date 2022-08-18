## Exercice 08 : ft_putnbr

|Exercice 08|
|:---:|
|ft_print_combn|
|Dossier de rendu(Turn-in directory) : ex00/|
|Fichiers à rendre(Files to turn in) : ft_print_combn.c|
|Fonctions Autorisée(Allowed functions) : write|

- Écrire une fonction qui affiche toutes les différentes combinaisons de n chiffres dans l'ordre croissant.
- n개의 숫자의 모든 조합을 작은 수부터 오름차순으로 출력하는 함수를 작성하세요.
- n sera tel que: ***0 < n < 10***
- n의 범위는 ***0 < n < 10***입니다.
- Si n = 2, cela donne quelque chose comme ça :
- n = 2인 경우 예상되는 결과는 다음과 같습니다. :

```
$>./a.out | cat -e
01, 02, 03, ..., 09, 12, ..., 79, 89$>
```

- Elle devra être prototypée de la façon suivante :
- 프로토타입은 다음과 같이 선언합니다.

```
void ft_print_combn(int n);
```