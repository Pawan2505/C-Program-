#include <stdio.h>

void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
      
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        }
        
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
    }
}

int main() {
    char str[100];
    
    
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    
    
    toggleCase(str);
    
  
    printf("Toggle case string: %s", str);
    
    return 0;
}
