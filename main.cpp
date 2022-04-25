#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice = 0;
    printf("======================\n");
    printf("    Vypis zaznamu     \n");
    printf("======================\n");
    printf("Zadejte \"1\"  pro vypis vsech zaznamu\n");
    printf("Zadejte \"2\" pro konec programu\n");
    scanf("%d", &choice);
    int p = 2; //pomocna promena

    switch (choice)
    {
        case 1:
        {
            char str[500];
            FILE *vypis;
            vypis = fopen("vypis", "r");
            fscanf(vypis, "%[^\0]", str);
            printf("%s", str);
            fclose(vypis);

            printf("\n\nZadejte \"1\" pro navrat do hlavniho menu\n");
            scanf("%d", &p);

            if (p == 1)
            {
                printf("Zadal jste navrat do hlavniho menu\n");
                main();
            }
            else
            {
                printf("Spatny vyber\n");
                main();
            }
            break;
        }
        case 2:
            printf("Konec programu.\n");
            exit(0);
        default:
            printf("Spatny vyber\n");
    }

}

