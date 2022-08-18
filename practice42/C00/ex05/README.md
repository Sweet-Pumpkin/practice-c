## Exercice 05 : ft_print_comb

|Exercice 05|
|:---:|
|ft_print_comb|
|Dossier de rendu(Turn-in directory) : ex05/|
|Fichiers à rendre(Files to turn in) : ft_print_comb.c|
|Fonctions Autorisée(Allowed functions) : write|

- Écrire une fonction qui affiche, dans l'ordre croissant, toutes les différentes com-binaisons de trois chiffres différents dans l'ordre croissant - oui, la répétition est volontaire.
- 세 개의 서로 다른 숫자를 오름차순의 순서로 여러 가지 조합한 세 자릿수 숫자를 오름차순으로 표시하는 함수를 작성하세요.
- Cela donne quelque chose comme ça : 
- 다음과 같이 출력되어야 합니다. : 

```
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
```
- 987 n'est pas là car 789 est déjà présent.
- 789가 이미 있기 때문에 987은 나오지 않습니다.
- 999 n'est pas là car ce nombre ne comporte pas exclusivement des chiffres différents les uns des autres. 
- 999는 9가 두 번 이상 반복되기 때문에 나오지 않습니다.
- Elle devra être prototypée de la façon suivante :
- 프로토타입은 다음과 같이 선언합니다. : 

```
void ft_print_comb(void);
```