#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main (void)
{
    char domain[] = "knking.com";
    char result[60];
    printf("The domain by itself is: %s \n", domain);
    build_index_url(domain, result);
    printf("The Built Domain: %s\n\n", result);
    return 0;
}

void build_index_url(const char *domain, char *index_url)
{
    char suffix[] = "/index.html";
    char prefix[] = "http://www.";
    strcpy(index_url, prefix);
    strcat(index_url, domain);
    strcat(index_url, suffix);
}