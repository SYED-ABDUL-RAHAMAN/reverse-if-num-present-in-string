#include<stdio.h>  // Including the standard input/output library
#include<string.h> // Including the string handling library

void main() {
    char s[30], t;  // Declaring a string 's' of size 30 and a temporary character 't'
    int i, j, l, k, flag, start, end;  // Declaring integers for loop control and other purposes

    printf("enter the string\n");  // Prompting the user to enter a string
    scanf("%[^\n]", s);  // Reading the entire line of input, including spaces, into the string 's'

    for(i = 0; s[i]; i++) {  // Outer loop iterating through each character in the string 's'
        
        ///////////////////////////////////////////
        for(j = i, flag = 0; s[j] != ' ' && s[j] != '\0'; j++) {  
            // Inner loop to find the end of the current word, stopping at a space or the end of the string
            if((s[j] >= '0') && (s[j] <= '9')) {  
                // Checking if the current character is a digit
                flag = 1;  // Setting flag to 1 if a digit is found
                start = i;  // Storing the start index of the word containing the digit
            }
        }
        ///////////////////////////////////////////

        if(flag) {  // If a digit was found in the word
            end = j - 1;  // Set 'end' to the last character of the word containing the digit

            for(k = start, l = end; k < l; k++, l--) {  
                // Reversing the characters in the word containing the digit
                t = s[k];  // Swapping characters from the start and end of the word
                s[k] = s[l];  
                s[l] = t;
            }
        }

        i = j;  // Move 'i' to the end of the current word
    }

    printf("%s\n", s);  // Print the modified string after reversing words with digits
}

