## Exercice 00 : ft_putchar

|Exercice 00|
|:---:|
|ft_putchar|
|Turn-in directory : ex00/|
|Files to turn in : ft_putchar.c|
|Allowed functions : write|

- Écrire une fonciton qui affiche le caractère passé en paramètre.
- 매개변수로 전달되는 문자를 표시하는 문자를 작성하세요.
- Elle devra être prototypée de la façon suivante. :
- 프로토타입은 다음과 같이 선언합니다. :

```
void fi_putchar(char c);
```

- Pour afficher le caractère, vous devez utiliser la fonction write de la manière suivante.
- 문자를 표시하려면 다음과 같이 write 함수를 사용해야 합니다.

```
write(1, &c, 1);
```
