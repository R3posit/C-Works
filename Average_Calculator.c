#include <stdio.h>
#include <stdlib.h>

// Chapter 4 - Its so hard!!
int main() {
    int array_length;
    printf("Could you say to me how many numbers you will use?\n");
    scanf("%d", &array_length);

    // Dynamically allocate memory for the array THAT' S IMPORTANT
    int *array_picker = (int*)malloc(array_length * sizeof(int));

    int a;
    //Add numbers to into array
    for (a = 0; a < array_length; a++) {
        printf("%d. Enter the number: ", a + 1);
        scanf("%d", &array_picker[a]);
    }

    int sum = 0; 
    int b;
    for (b = 0; b < array_length; b++) {
        sum += array_picker[b];
    }
   
    printf("Sum: %d\n", sum); 
    printf("Average: %.2f\n", (float)sum / array_length);

    // Free the allocated memory
    free(array_picker);

    return 0;
}
