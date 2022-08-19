 /*

 ------ 1157번 단어 공부 (브론즈I) ------

 ****** 문제 ******
 
 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

 *****************

 ****** 입력 ******

 첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

 *****************

 ****** 출력 ******

 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.

 ******************

 ****** 예제 입력1 ******

 Mississipi

 ************************

 ****** 예제 출력1 ******

 ?

 ************************

 */

 /****** 답안 제출 ******/
#include <stdio.h>
#include <string.h>

int main(void) {
    int i, j;
    char input[1000000];
    int arr[26] = { 0 };
    int res = 0, num = 0;
    
    scanf("%s", input);
    int len = strlen(input);
    
    for(i = 'a'; i <= 'z'; i++) {
        for(j = 0; j < len; j++) {
           if(i == input[j])
               arr[i-'a']++;
        }
    }
    
    for(i = 'A'; i <= 'Z'; i++) {
        for(j = 0; j < len; j++) {
           if(i == input[j])
               arr[i-'A']++;
        }
    }
    
    int max = arr[0];
    
    for(i = 1; i < 26; i++) {
        if(max < arr[i]) {
            max = arr[i];
            res = i;
        }
    }
    
    for(i = 0; i < 26; i++) {
        if(max == arr[i])
            num++;
    }
    
    if(num > 1)
        printf("?");
    else
        printf("%c", res + 'A');
    
    return 0;
}