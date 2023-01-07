/*mine: .py*/

/*following is false*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct item
{
    char country[1000];
    int counter;
};

int main()
{
    int n;
    cin >> n;
    item items[n];
    int items_next_idx = 0;

    for (int i = 0; i < n; ++i)
    {
        char input_country[1000];
        scanf("%s", input_country);
        char input_name[1000];
        scanf("%[^\n]", input_name);
        if (strcmp(input_name, "0") == 0)
        {
            break;
        }
        int where = -1;

        for (int j = 0; j < items_next_idx; ++j)
        {
            if (strcmp(input_country, items[j].country) == 0)
            {
                where = j;
                break;
            }
        }

        if (where == -1)
        {
            // not inner
            strcpy(items[items_next_idx].country, input_country);
            items[items_next_idx].counter = 1;
            ++items_next_idx;
        }
        else
        {
            ++items[where].counter;
        }
    }
    /*
    for (int i = 0; i < items_next_idx; ++i)
    {
        printf("%s %d\n", items[i].country, items[i].counter);
    }
    */
    for (int i = 0; i < 26; ++i)
    {
        for (int j = 0; j < items_next_idx; ++j)
        {
            if (items[j].country[0] == ('A' + i) || items[j].country[0] == ('a' + i))
                printf("%s %d\n", items[j].country, items[j].counter);
        }
    }
    return 0;
}