//Write a C program to print your name, date of birth, and mobile number.
// // solution 
#include <stdio.h>

int main() {
    int a,b,c;
    
    printf( "Input the size of the square: \n" );
    scanf( "%d", &c );

    // if(c < 1 || c > 10) {
    //     printf("Size should be in the range 1 to 10\n"); // Print error message
    //     return 0; // Exit the program
    // }

    for (a = 0; a < c; a++) {
        // printf(" ");
       
        for(b = 0; b < c; b++) 
        {
            printf(" #");
        }
        printf("\n");
    }
     printf(" c^2 = %d",a*a+b*b);

    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int size, i, j; // Declare variables for size and loop counters
    
//     // Prompt user for the size of the square
//     printf( "Input the size of the square: \n" );
//     scanf( "%d", &size );
    
//     // Check if the size is within the valid range
//     if(size < 1 || size > 10) {
//         printf("Size should be in the range 1 to 10\n"); // Print error message
//         return 0; // Exit the program
//     }
    
//     // Loop for rows
//     for(i=0; i<size; i++) {
//         // Loop for columns
//         for(j=0; j<size; j++) {
//             printf(" %d",j); // Print a space and a #
//         }
//         printf("\n"); // Move to the next line after completing a row
//     }

//     return 0; // Indicate successful program execution
// }

