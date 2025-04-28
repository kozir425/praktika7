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
