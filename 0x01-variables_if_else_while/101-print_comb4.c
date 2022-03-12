#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int c = 0;
    int f_d;
    int m_d;
    int l_d;

    while (c <= 999)
    {
        f_d = (c / 100 + '0');
        m_d = (c / 10 % 10 + '0');
        l_d = (c % 10 + '0');

        if ((f_d < m_d) && (m_d < l_d))
        {
            putchar(f_d);
            putchar(m_d);
            putchar(l_d);

            if (c != 789)
            {
                putchar(',');
                putchar(' ');
            }
        }
        c++;
    }
    putchar('\n');
    return (0);
}