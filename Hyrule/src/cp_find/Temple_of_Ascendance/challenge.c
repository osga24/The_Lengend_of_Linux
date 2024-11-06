#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	printf("Welcome to the Temple of Ascendance!\n\n");
    printf("To pass this challenge, you must prove your perseverance and courage. ");
    printf("Your task is simple, yet demanding: find the hidden key and return it here.\n\n");
    printf("The key lies deep within the Misty Forest, concealed and waiting for a brave hero to uncover it. ");
    printf("Only by retrieving this key and bringing it back to the temple can you complete this trial and continue on your journey.\n\n");
    printf("Good luck, and may your determination guide you through the shadows of the forest!\n\n");
	printf("--------------\n");
	FILE *file;
    char buffer[100];
	const char *expected_content = "4Sc3Nd@NcE";

    file = fopen("Ascendance_key", "r");
    if (file == NULL) {
        printf("Key not found.\n");
        return 1;
	}


    if (fgets(buffer, sizeof(buffer), file) == NULL) {
        fclose(file);
        printf("Error reading file content.\n");
        return 1;
    }
    fclose(file);


    buffer[strcspn(buffer, "\n")] = '\0';


    if (strcmp(buffer, expected_content) == 0) {
        printf("FLAG{4Sc3Nd@NcE_cH4ll3nGe}\n");
		printf("--------------\n");
		printf("Congratulations on successfully completing the challenge!\n");
		printf("In the place where you just found the key, there is an ancient spell book hidden away.\n");
		printf("The cover of this book is covered with mysterious runes, emanating a faint glow, as if inviting you to explore.\n");
		printf("As you turn the pages, you will discover that it contains secrets, history, and legends about this world, hiding countless knowledge and wisdom.\n");
		printf("Link is filled with curiosity and a desire to understand this world.\n");
		printf("He knows that understanding the truth of this world is crucial for his adventure.\n");
		printf("This spell book is not only a record of the past but also a guide for the future.\n");
		printf("Every page's content may help him unravel his confusion and guide him to explore the mysteries of this enchanted land.\n");
		printf("So, brave hero, go find this ancient spell book!\n");
		printf("It will help you gain a deeper understanding of the essence of this world, enabling you to make wiser choices in your upcoming adventures.\n");
    } else {
        printf("Key is incorrect.\n");
    }

    return 0;
}
