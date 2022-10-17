#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

typedef struct pair
{
    int frequency;
    char charASCII;
} pair;

int compare(const void *a, const void *b)
{
    if ((((pair *)a)->frequency) != (((pair *)b)->frequency))
        return (((pair *)a)->frequency) -
               (((pair *)b)->frequency);
    else
        return (((pair *)b)->charASCII) -
               (((pair *)a)->charASCII);
}

void print(pair *myData)
{
    int i;
    for (i = 0; i < 95; i++)
        (myData[i].frequency) == 0 ? printf("") : printf("%d %d\n", myData[i].charASCII, myData[i].frequency);
}

int main()
{
    char c;
    int Frequency[95];
    int char_ASCii[95];
    struct pair *myData = (struct pair *)
        malloc(95 * sizeof(struct pair));
    int i;

    for (i = 0; i < 95; i++)
    {
        (myData + i)->charASCII = i + 33;
        (myData + i)->frequency = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == 10)
        {
            qsort(myData, 95, sizeof(struct pair), compare);
            print(myData);

            if ((c = getchar()) == EOF)
                return 0;
            else
            {
                printf("\n");
                for (i = 0; i < 95; i++)
                {
                    (myData + i)->charASCII = i + 33;
                    (myData + i)->frequency = 0;
                }
                (myData[c - 33].frequency)++;
            }
        }
        else
        {
            (myData[c - 33].frequency)++;
        }
    }
    return 0;
}
