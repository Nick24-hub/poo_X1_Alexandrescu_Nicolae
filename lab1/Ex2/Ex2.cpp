// Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int strtoint(char s[100])
{
    int i = 0,nr=0;
    while (s[i])
    {
        nr = nr * 10 + (s[i] - '0');
        i++;
    }
    return nr;
}

int main()
{
    FILE* fp = fopen("in.txt", "r");
    char s[100];
    if (!fp)
    {
        printf("%s", "Nu s-a putut deschide fisierul.");
        return 0;
    }
    int sum = 0;
    int val=fscanf(fp, "%s", s);
    while (val != EOF)
    {
        printf("Val: %d ; Sir: %s \n", val, s);
        sum += strtoint(s);
        val = fscanf(fp, "%s", s);
    }
    printf("Suma este: %d\n", sum);
    fclose(fp);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
