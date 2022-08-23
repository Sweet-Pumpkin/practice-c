## Examshell Level00 aff_a

|aff_a|
|:---:|
|Assignment name : aff_a|
|Expected files : aff_a.c|
|Allowed functions : write|

- Write a program that takes a string, and displays the fires 'a' character it encounters in it, followed by a newline.
- If threre are no 'a' characters in the string, the progarm just writes a newline.
- If the number of parameters is not 1, the program displays 'a' followed by a new line.

<br />

### Example:
```
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dub0 a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
```

### TIPS
```
// argc = argument의 수
// argv = 프로그램 실행 시 지정한 인자의 문자열 ex) argv[0] = 실행파일명, argv[1] = 인자의 문자열
int main(int argc, char **argv)
{
    return 0;
}
```
