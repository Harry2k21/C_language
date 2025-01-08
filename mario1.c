#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Prompt the user for a valid height between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Build the pyramid
    for (int i = 1; i <= height; i++)
    {
        // Print spaces for alignment
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // Print hashes for the left side
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

          for (int q = 0; q > height + i; q++)
        {
            printf("..");
        }

        for (int n = 0; n < i; n++)
        {
            printf("#");
        }


        // Print a newline after each row
        printf("\n");
    }
}
