## Exercice 01 : print_groups.sh

|Exercice 01|
|:---:|
|print_groups.sh|
|Dossier de rendu(Turn-in directory) : ex01/|
|Fichiers à rendre(Files to turn in) : print_groups.sh|
|Fonctions Autorisée(Allowed functions) : None|

- 환경변수 FT_USER에 포함된 login이 소속되어 있는 그룹의 목록을 표시하는 명령어를 작성하세요. 공백없이 쉼표로 분리되어야 합니다.
- Examples : 
    - FT_USER=nours의 경우, 결과는 "god,root,admin,master,nours,bocal"여야 합니다.(쌍따옴표 제외)
        ```
        $>./print_groups.sh
        god,root,admin,master,nours,bocal$>
        ```
    - FT_USER=daemon의 경우, 결과는 "daemon,bin"여야 합니다.(쌍따옴표 제외)

- man id
