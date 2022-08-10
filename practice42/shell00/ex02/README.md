## Exercise 02
> Oh yeah, mooore...<br />
> Turn-in directory in : ex02/<br />
> Files to turn in : exo2.tar<br />
> Allowed functions : None

### Description
- en
- Create the following files and directories. 
- Do what’s necessary so that when you use the ls -l command in your directory, the output will looks like this 

---

- kr
- 다음의 파일과 디렉토리들을 만들어주세요. 
- 뭐든 해서 ls -l 명령어를 실행시켰을때의 결과가 아래와 같이 보이면 됩니다.

```
%> ls -l
total XX
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxr-xr-x 1 XX XX 5 Jun 1 22:20 test6 -> test0
%>
```

- en
- Once you’ve done that, run `tar -cf exo2.tar *` to create the file to be submitted.
- ! Don’t worry about what you’ve got instead of "XX".
- A year will be accepted instead of the time, on the timestamp of the
files.

---

- kr
- 위의 작업을 다 하셨으면 `tar -cf exo2.tar *`를 실행하여 제출할 파일을 생성하세요.
- ! "XX" 대신 다른 값이 있다고 너무 걱정하지 마세요.
- 파일의 타임스탬프에 시간 대신 연도가 나옵니다.