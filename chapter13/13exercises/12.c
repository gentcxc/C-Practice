#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main (void)
{
    char filename[] = "memo.txt";
    char extension[4];
    get_extension(filename, extension);
    printf("Filename: %s\nExtension: %s\n ",filename,extension);
    return 0;
}
void get_extension(const char *file_name, char *extension)
{
    for(; *file_name != '\0'; file_name++)
        if (*file_name == '.')
            strcpy(extension, file_name);
    
}
//for some reason in the program we lose filename in the process of getting
//extension.