#include <stdio.h>

// Функция для нахождения индекса слова в строке
int indexOf(char text[], char word[]) {
    int textLength = 0;
    int wordLength = 0;

    // Считаем длину text
    while (text[textLength] != '\0') {
        textLength++;
    }

    // Считаем длину word
    while (word[wordLength] != '\0') {
        wordLength++;
    }

    // Ищем word в text
    for (int i = 0; i <= textLength - wordLength; i++) {
        int match = 1;
        for (int j = 0; j < wordLength; j++) {
            if (text[i + j] != word[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            return i; // Возвращаем индекс, если нашли
        }
    }

    return -1; // Если не нашли, возвращаем -1
}

int main() {
    char text[] = "the cat sat on the mat";
    char target[] = "cat";

    // Используем функцию indexOf
    int foundIndex = indexOf(text, target);

    if (foundIndex != -1) {
        printf("Слово \"%s\" найдено на позиции %d\n", target, foundIndex);
    } else {
        printf("Слово \"%s\" не найдено\n", target);
    }

    return 0;
}
