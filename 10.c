#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, *numbers;

    // 사용자로부터 배열 크기 입력받기
    printf("Enter array size: ");
    scanf("%d", &size);

    // 동적 메모리 할당
    numbers = (int*) malloc(size * sizeof(int));

    // 배열 초기화: 인덱스로 채우기
    for (int i = 0; i < size; i++) {
        numbers[i] = i;
    }

    // 배열 출력
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // 메모리 해제
    free(numbers);

    return 0;
}
