## Exercise 06
> GiT<br />
> Turn-in directory in : ex06/<br />
> Files to turn in : git_ignore.sh<br />
> Allowed functions : None

### Description
- en
- In this exercice, you will write a short shell script that lists all the existing files
ignored by your GiT repository.

---

- kr
- 이번에는 존재하는 파일들 중에서 여러분의 git 저장소가 무시하는 파일들을 나열하는 간단한 쉘 스크립트를 작성할 겁니다.

```
%> bash git_ignore.sh | cat -e
.DS_Store$
mywork.c~$
%>
```

- en
- To test your script, we will use our own environment.
- ! RTFM!

---

- kr
- 스크립트를 테스트하기 위해 저희는 저희 자체 환경을 사용할 것입니다.
- ! RTFM!

---

- 참고사항
- [git ls-files](https://runebook.dev/ko/docs/git/git-ls-files)
