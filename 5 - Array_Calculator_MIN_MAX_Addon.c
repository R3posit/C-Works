#include <stdio.h>
#include <limits.h> 

void find_max_min(int *array, int length, int *max, int *min) {
    *max = INT_MIN;
    *min = INT_MAX;
    
    for (int i = 0; i < length; i++) {
        if (array[i] > *max) {
            *max = array[i];
        }
        if (array[i] < *min) {
            *min = array[i];
        }
    }
}

int main() {
    int array_length;
    
    printf("Kaç sayı girmek istersiniz? ");
    scanf("%d", &array_length);


    int array_picker[array_length];

    for (int i = 0; i < array_length; i++) {
        printf("%d. sayıyı yaz: ", i + 1);
        scanf("%d", &array_picker[i]);
    }

    int max, min;

    find_max_min(array_picker, array_length, &max, &min);
    
    printf("En yüksek değer: %d\n", max);
    printf("En düşük değer: %d\n", min);

    return 0;
}
