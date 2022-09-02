# C03
## strcmp
### 1. 함수 설명
- 문자열을 비교하는 함수
- 두 개의 문자열을 비교하여 완전히 같다면 0을 반환하고, 다르면 음수 혹은 양수를 반환.
### 2. 헤더 파일
- <string.h>
### 3. 정의
```
    int strcmp(const char *str1, const char *str2);
```
- `str1`: 비교할 문자열1
- `str2`: 비교할 문자열2
- `str1` == `str2`일 경우 0을 반환
- `str1` < `str2`일 경우 양수 반환
- `str1` > `str2`일 경우 음수 반환

## strncmp
### 1. 함수 설명
- n만큼의 문자열 길이를 서로 비교하는 함수.
### 2. 헤더 파일 
- <string.h>
### 3. 정의
```
    int strcmp(const char *str1, const char *str2, size_t n);
```
- `str1`: 비교할 문자열1
- `str2`: 비교할 문자열2
- `n` : 비교할 문자열 길이

## strcat
### 1. 함수 설명
- 문자열을 또 다른 문자열 뒤쪽에 이어 붙이는 함수
### 2. 헤더 파일
- <string.h>
### 3. 함수 원형
```
    char *strcat(char *dest, const char *origin);
```
- dest 뒤쪽에 origin 문자열을 붙임.
- dest 배열의 길이는 origin과 합쳐져도 남을 길이어야함.
- dest 문자열 끝에는 항상 '\0'이 붙어야 한다.

## strncat
### 1. 함수 설명
- 문자열 n개를 또 다른 문자열 뒤쪽에 이어 붙이는 함수.
### 2. 헤더 파일
- <string.h>
### 3. 함수 원형
```
    char *strncat(char *dest, const char *origin, size_t n);
```

## strstr
### 1. 함수 설명
- 문자열 탐색 함수
### 2. 헤더 파일
- <string.h>
### 3. 함수 원형
```
    char *strstr(char *str1, const char *str2);
```
- `str1`에서 `str2`와 일치하는 문자열이 있는지 확인하는 함수.
- 일치하는 문자열이 있으면 해당 위치의 포인터를 반환.
- 일치하는 문자를 찾지 못하면 null pointer 반환.

## strlcat
### 1. 함수 설명
- 두 문자열을 합친 길이를 리턴하는 함수.
### 1. 헤더 파일
- <string.h>
### 3. 함수 원
```
    size_t strlcat(char *dst, const char *src, size_t len);
```
