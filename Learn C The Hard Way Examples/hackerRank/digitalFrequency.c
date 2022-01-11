#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count[10] = {0};
    char *input_str;

    input_str = (char *)malloc(1000 * sizeof(char));
    if (input_str == NULL)
    {
        exit(2);
    }
    scanf("%s", input_str);
    for (int i = 0; *(input_str + i) != '\0'; i++)
    {
        switch ((int)*(input_str + i))
        {
        case '0':
            count[0]++;
            break;
        case '1':
            count[1]++;
            break;
        case '2':
            count[2]++;
            break;
        case '3':
            count[3]++;
            break;
        case '4':
            count[4]++;
            break;
        case '5':
            count[5]++;
            break;
        case '6':
            count[6]++;
            break;
        case '7':
            count[7]++;
            break;
        case '8':
            count[8]++;
            break;
        case '9':
            count[9]++;
            break;
            default:
                continue;
        }
    }
    for(int i = 0; i<10;i++){
        printf("%d ", count[i]);
    }
    // printf("%s", input_str);
    return 0;
}
