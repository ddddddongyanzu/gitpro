#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 100 // maximum number of entries
#define MAX_WORD_LENGTH 20 // maximum length of a word
#define MAX_BUFFER_SIZE 50 // maximum number of matches to store in buffer

int main() {
    int n, t, i, match, buffer_count;
    char keyword[MAX_WORD_LENGTH], word[MAX_WORD_LENGTH], buffer[MAX_BUFFER_SIZE][MAX_WORD_LENGTH];

    // input N, T, and keyword(s) for topic
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter T: ");
    scanf("%d", &t);
    printf("Enter keyword(s) for topic: ");
    scanf("%s", keyword);

    // initialize variables
    i = 0;
    match = 0;
    buffer_count = 0;

    // search for first N references to topic in information retrieval system
    while (i <= t && match < n) {
        printf("Enter word: ");
        scanf("%s", word);

        // check if word matches keyword
        if (strcmp(word, keyword) == 0) {
            match++;

            // store match in buffer if buffer is not full
            if (buffer_count < MAX_BUFFER_SIZE) {
                strcpy(buffer[buffer_count], word);
                buffer_count++;
            }
        }

        i++;
    }

    // print results
    if (match == n) {
        printf("Found %d matches:\n", match);
        for (int j = 0; j < buffer_count; j++) {
            printf("%s\n", buffer[j]);
        }
    } else if (match == 0) {
        printf("No match\n");
    }

    return 0;
}
