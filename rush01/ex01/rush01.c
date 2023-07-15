#include <stdio.h>

// external function
void    ft_putchar(char c);

// Prototypes
void    display_column(int x_axis);
void    display_row(int y_axis);
void    display_matrix(int x_axis, int y_axis);

// rush
void    rush(int x_axis, int y_axis)
{
    if (x_axis == 0 || y_axis == 0)
    {
        ft_putchar('\n');
        return;
    }
    if (x_axis == 1 && y_axis == 1)
    {
        ft_putchar('/');
        ft_putchar('\n');
        return;
    }
    if (x_axis == 1)
    {
        display_column(y_axis);
        return;
    }
    if (y_axis == 1)
    {
        display_row(x_axis);
        return;
    }
    display_matrix(x_axis, y_axis);
}

void    display_column(int x_axis)
{
    int i;

    i = -1;
    ft_putchar('/');
    ft_putchar('\n');
    while (++i < x_axis - 2)
    {
        ft_putchar('*');
        ft_putchar('\n');
    }
    ft_putchar('\\');
    ft_putchar('\n');
}

void    display_row(int y_axis)
{
    int i;

    i = -1;
    ft_putchar('/');
    while (++i < y_axis - 2)
        ft_putchar('*');
    ft_putchar('\\');
    ft_putchar('\n');
}

void    display_footer(int width)
{
    int i;

    i = -1;
    ft_putchar('\\');
    while (++i < width - 2)
    {
        ft_putchar('*');
    }
    ft_putchar('/');
    ft_putchar('\n');
}

void    display_body(int width, int height)
{
    int i;
    int j;

    i = -1;
    while (++i < height - 2)
    {
        j = -1;
        while (++j < width)
        {
            if (j == 0 || j == width - 1)
                ft_putchar('*');
            else
                ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}

void    display_matrix(int x_axis, int y_axis)
{
    display_row(x_axis);
    display_body(x_axis, y_axis);
    display_footer(x_axis);
}

