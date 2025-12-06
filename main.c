#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

#define MAXCHAR 100

void encrypt(char * _word)
{
    char * w;
    w = _word;
    int i=0;
    while(w[i]!= '\0')
    {
        w[i] = w[i] + 10;
        i++;
    }
    printf(" \nEncription is: %s\n\n", w);
    return;
}

void decrypt(char * _word)
{
    char * w;
    w = _word;
    int i=0;
    while(w[i]!= '\0')
    {
        w[i] = w[i] - 10;
        i++;
    }
    printf(" Decription is: %s\n\n", w);
    return;
}

int main()
{
    int s;
    char word[MAXCHAR];
    int i = 0;
    char ch;
    do
    {
        printf("Select one of these two modes: \n 1) Encrypt \n 2) Dectript \n 0) Exit\n > ");
        scanf("%d",&s);
        switch(s)
        {
            case 1:
            printf(" Write password down: ");
            while((ch = _getch())!= '\r' && i < sizeof(word)- 1)
            {
                word[i++] = ch;
            }
            word[i] = '\0';
            encrypt(word);
            break;
            case 2:
            printf(" Write decripted word down: ");
            scanf("%s", word);
            decrypt(word);
            break;
            case 0:
            printf("Exiting Program\n");
            break;

        }

    } while (s != 0);

    return 0;
}