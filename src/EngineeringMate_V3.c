#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* 
-Transport The Logic To C programming
- Beginning Of Backend Development
 */
struct Concept {
    const char *keyword;
    const char *answer;
};

int main(void) {
    struct Concept concepts[] = {
        {"PWM", "Pulse Width Modulation controls average power."},
        {"UART", "UART is a serial communication protocol."},
        {"SPI", "SPI is a synchronous communication protocol."}
    };
    const int nConcepts = sizeof concepts / sizeof concepts[0];// Number of concepts in the array

    char question[256];// Buffer to hold the user's question
    char upperQuestion[256];// Buffer to hold the uppercase version of the question

    printf("Ask a question: ");
    if (!fgets(question, sizeof(question), stdin)) {
        return 1;
    }

    // Convert question to uppercase for case-insensitive search
    for (int i = 0; question[i] != '\0' && i < (int)sizeof(upperQuestion) - 1; i++) {
        upperQuestion[i] = toupper((unsigned char)question[i]);
        upperQuestion[i + 1] = '\0';
    }

    for (int i = 0; i < nConcepts; i++) {
        if (strstr(upperQuestion, concepts[i].keyword) != NULL) {/* Check if the keyword is in the question */
            printf("%s\n", concepts[i].answer);
            return 0;
        }
    }

    printf("Sorry, I don't know that one.\n");
    return 0;
}
