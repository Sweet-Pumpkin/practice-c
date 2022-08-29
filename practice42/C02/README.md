# C02

## strcpy
### 1. 함수 설명
- 문자열을 복사하는 함수.
### 2. 헤더 파일
- <string.h>
### 3. 함수 원형
```
    char *strcpy(char *dest, const char *origin);
```
- `origin`에 있는 문자열 전체를 `dest`로 복사하는 함수.

## strncpy
### 1. 함수 설명
- 문자열을 n번만큼 복사하는 함수.
### 2. 헤더 파일
- <string.h>
### 3. 함수 원형
```
    char *strncpy(char *dest, const char *origin, size_t n);
```
- `origin`에 있는 문자열을 `n`만큼 `dest`로 복사.
