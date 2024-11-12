
#include <stdio.h>
#include <string.h>

int main() {
    char dest[100] = "i love ";
    char src[100] = "coding";

    
    strcat(dest, src);

    printf("Concatenated String: %s\n", dest);
    return 0;
}
