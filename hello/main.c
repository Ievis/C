#include <stdio.h>

int main() {

    int length;
    do{
        printf("Enter the length of integers array\n");
        scanf("%i", &length);
    }while(length < 1);

    int numbers[length];
    for(int i = 0; i < length; i++) {
        int array_element;
        printf("The %i element is:", i + 1);
        scanf("%i", &array_element);

        numbers[i] = array_element;
    }

    int sorted_numbers[length];

    for(int i = 0; i < length; i++) {
        int n = 0;
        for(int j = 0; j < length; j++) {
            if(numbers[i] > numbers[j])
                n++;
        }
        sorted_numbers[n] = numbers[i];
    }

    for(int i = 0; i < length; i++)
        printf("%i\n", sorted_numbers[i]);

    return 0;
}
