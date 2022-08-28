## Examshell Level01 search and replace

|search_and_replace|
|:---:|
|Assignment name : search_and_replace|
|Expected files : search_and_replace.c|
|Allowed functions : write, exit|

- Write a program called search and replace that takes 3 arguments, the first arguments is a string in which th replace a letter(2nd argument) by another one(3rd argument).
- If the number of arguments is not 3, just display a newline.
- If the second arguments is not contained in the first one(the string) then the program simply rewrites the string followed by a newline.

### Example :
```
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
```
