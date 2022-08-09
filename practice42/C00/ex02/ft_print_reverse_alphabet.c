/* 

****** Exercise 02 ******
ft_print_reverse_alphabet
Turn-in directory : ex02/
Files to turn in : ft_print_reverse_alphabet.c
Allowed functions: write

- 'z'부터 시작하여 알파벳을 역순으로 한 줄로 출력하는 함수를 작성하세요.
- 프로토타입은 다음과 같이 선언합니다. : 

  void ft_print_reverse_alphabet(void);

*/

/* 제출답안 */
#include <unistd.h>

void ft_print_reverse_alphabet(void) {
	char alphabet;
	alphabet = 'z';
	while (alphabet >= 'a') {
		write(1, &alphabet, 1);
		alphabet--;
	}
}

/* 답안확인 */
int main(void) {
	ft_print_reverse_alphabet();
	return 0;
}
