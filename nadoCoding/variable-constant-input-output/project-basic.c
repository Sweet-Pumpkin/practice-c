#include <stdio.h>
int main(void) {
  
  char name[256];
  printf("이름이 뭐예요? ");
  scanf("%s", name);

  int age;
  printf("몇 살이예요? ");
  scanf("%d", &age);
  
  float weight;
  printf("몸무게가 몇 kg이예요? ");
  scanf("%f", &weight);

  float height;
  printf("키가 몇 cm예요? ");
  scanf("%f", &height);

  char crime[256];
  printf("무슨 범죄를 저질렀어요? ");
  scanf("%s", crime);

  printf("\n\n--- 범죄자 정보 ---\n\n");
  printf(" 이름     : %s\n", name);
  printf(" 나이     : %d\n", age);
  printf(" 몸무게    : %.2f\n", weight);
  printf(" 신장     : %.2f\n", height);
  printf(" 범죄 정보 : %s\n", crime);

  return 0;
}