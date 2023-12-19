#include <stdio.h>
#include <unistd.h>


void fill_col_four(int i, char** annex, int dir)
{
    int count;

    if (dir > 0) count = 0;
    else if (dir < 0) count = 3;

    while (0 < count && count < 4) {
        annex[count][i % 4] = '1' + count;
        count += dir;
    }
}

void fill_row_four(int i, char** annex, int dir)
{
    int count;

    if (dir > 0) count = 0;
    else if (dir < 0) count = 3;

    while (0 < count && count < 4) {
        annex[i % 4][count] = '1' + count;
        count += dir;
    }
}

void    search_four(char *input, char** annex) {
    int i = 0;

    while (i < 16) {
        if (input[i] == 4) {
            if (0 <= i && i <= 3) fill_col_four(i, annex, 1);
            if (4 <= i && i <= 7) fill_col_four(i, annex, -1);
            if (8 <= i && i <= 11) fill_row_four(i, annex, 1);
            if (12 <= i && i <= 15) fill_row_four(i, annex, -1);
        }
        i++;
    }
    
}

void    annex(char *input) {
    char annex[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

    search_four(input, annex);
    search_three(input, annex);
}