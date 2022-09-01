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

## strlcpy
### 1. 함수 설명
- `strncpy`처럼 데이터를 복사하는 함수. 보안 목적으로 `strncpy`를 대신할 함수로 만들어졌다.
- 반환 값은 `src`의 길이의 값.
### 2. 헤더 파일
- <string.h>
### 3. 함수 원형
```
    int *strlcpy(char *dest, const char *src, size_t size);
```
- `dest` : 붙여넣을 문자열
- `src` : 복사할 문자열
- `size` : size만큼 복사. size는 문자열 끝의 NULL까지 포함한 길이를 넣어줘야 한다.

## void pointer(범용포인터)
### 1. 설명
- 자료형이 정해지지 않은 특성을 가짐. 
- 함수에서 다양한 자료형을 받을 때, 함수의 반환 포인터를 다양한 자료형으로 된 포인터에 저장할때, 자료형을 숨기고 싶을때 사용.
