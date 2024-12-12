#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    
    printf("Moi ban nhap vao chuoi ky tu: \n");
    fgets(word, sizeof(word), stdin);

    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        printf("%c", word[i]);
    }
    printf("do dai chuoi la : %d",length-1);

    return 0;
}
