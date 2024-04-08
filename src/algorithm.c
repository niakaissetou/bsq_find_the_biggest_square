/*
** EPITECH PROJECT, 2023
** algo_for_bsq
** File description:
** reverse_minesweeper
*/

int algo(int **tabint, int i, int j)
{
    if (tabint[i][j] < 1 || i < 1 || j < 1)
        return 0;
    int top = tabint[i - 1][j];
    int left = tabint[i][j - 1];
    int top_left = tabint[i - 1][j - 1];
    int pos[3] = {top, left, top_left};
    int	value_min = pos[0];

    for (int t = 0; t < 3; t++) {
        if (value_min > pos[t])
            value_min = pos[t];
    }
    tabint[i][j] = value_min + 1;
}
