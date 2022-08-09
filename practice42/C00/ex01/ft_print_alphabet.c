/* 

****** Exercise 01 ******
ft_print_alphabet
Turn-in directory : ex01/
Files to turn in : ft_print_alphabet.c
Allowed functions: write

- 알파벳을 소문자로 'a'부터 순서대로 한 줄로 표시하는 함수를 작성하세요.
- 프로토타입은 다음과 같이 선언합니다. : 

  void ft_print_alphabet(void);

*/

/* 제출답안 */
#include <unistd.h>

void ft_print_alphabet(void) {
	char alphabet;
	alphabet = 'a';
	while (alphabet <= 'z') {
		write(1, &alphabet, 1);
		alphabet++;
	}
}

/* 답안확인 */
int main(void) {
	ft_print_alphabet();
	return 0;
}
