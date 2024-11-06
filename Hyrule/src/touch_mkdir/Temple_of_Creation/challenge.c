#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

int main() {
    
    printf("Welcome to the Temple of Creation!\n\n");
    printf("In this temple challenge, you will face an important task. To prove your courage and wisdom, you must create a file named 'box' in the directory of this temple.\n");
    printf("1. Navigate to the temple's directory.\n");
    printf("2. Create a file named 'box'.\n");
    printf("3. Place a key inside the box file.\n");
    printf("4. Once completed, re-run this challenge to check your results.\n");
    printf("Only by completing these steps can you pass this challenge and receive the blessings of the temple.\n");
    printf("Brave hero, begin your challenge now!\n\n");

    const char *dir_name = "box";     
    const char *file_name = "key";    

    
    DIR *dir = opendir(dir_name);
    if (dir) {
        closedir(dir);  
    } else {
        printf("Directory '%s' does not exist.\n", dir_name);
        return 0;  
    }

   
    struct stat buffer;
    if (stat("box/key", &buffer) == 0) {

		printf("\033[33m+---------------+\n");
		printf("| FLAG{%s_%s} |\n", dir_name, file_name);
		printf("\033[33m+---------------+\n");

		printf("\033[32m= A DEEP VOICE =================================================================================================\n");
		printf("Congratulations on passing the Temple of Creation challenge!\n\n");
		printf("However, this is just a part of your journey; it is far from enough. ");
		printf("To gain true power, you must head to the next temple to upgrade yourself.\n\n");
		printf("Not far away, there is a mysterious Temple of Ascendance quietly waiting for your arrival. ");
		printf("This temple holds more trials and challenges, and only there can you acquire greater abilities and wisdom.\n\n");
		printf("Do not delay, brave hero; quickly explore the Temple of Ascendance and pave the way for your adventure!\n");

		printf("\033[32m=================================================================================================================\n");
	} else {
        printf("Directory '%s' does not contain the file '%s'.\n", dir_name, file_name);
    }

    return 0;
}
