#include <stdio.h>

#define ROWS 3
#define COLS 4

// function prototype
int smallest_frequency(int row[], int size);

int main(void)
{
    // initialize a 2D array with sample values
    int matrix[ROWS][COLS] = {{1, 2, 3, 4}, 
                              {5, 6, 7, 8}, 
                              {9, 10, 11, 12}};

    // loop through each row in the matrix
    for (int i = 0; i < ROWS; i++)
    {
        // print the frequency of the smallest number in the row
        printf("Frequency of smallest number in row %d: %d\n", i + 1, smallest_frequency(matrix[i], COLS));
    }

    return 0;
}

// function to check the frequency of the smallest number in a row
int smallest_frequency(int row[], int size)
{
    int min = row[0];
    int frequency = 0;

    // find the smallest number in the row
    for (int i = 1; i < size; i++)
    {
        if (row[i] < min)
        {
            min = row[i];
        }
    }

    // count the frequency of the smallest number
    for (int i = 0; i < size; i++)
    {
        if (row[i] == min)
        {
            frequency++;
        }
    }

    return frequency;
}
