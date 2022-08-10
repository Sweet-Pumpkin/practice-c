## Exercise 05
> GiT commit<br />
> Turn-in directory in : ex05/<br />
> Files to turn in : git_commit.sh<br />
> Allowed functions : None

### Description
- en
- Create a shell script that displays the ids of the last 5 commits of your git repository.

---

- kr
- 자신의 git 저장소의 커밋 중 마지막 5개의 ID를 표시하는 쉘 스크립트를 작성하세요.

```
%> bash git_commit.sh | cat -e
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
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
- `git log --pretty`
- [Git의 기초 커밋 히스토리 조회하기](https://git-scm.com/book/ko/v2/Git%EC%9D%98-%EA%B8%B0%EC%B4%88-%EC%BB%A4%EB%B0%8B-%ED%9E%88%EC%8A%A4%ED%86%A0%EB%A6%AC-%EC%A1%B0%ED%9A%8C%ED%95%98%EA%B8%B0)
