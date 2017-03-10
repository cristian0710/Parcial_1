#include <stdio.h>
#include <stdlib.h>

void datos();
void multiplicar();

int numf, numc, **pma, **pma2, **pma3;

int main()
{
    datos();
    multiplicar();
    free(pma);
    free(pma2);
}

void datos()
{
    printf("Ingrese numero de filas matris A: ");
    scanf("%d",&numf);
    printf("Ingrese numero de columnas A: ");
    scanf("%d",&numc);

    pma=(int **)malloc(numf * sizeof(int*));

    for(int i=0;i<numc;i++)
    {
        pma[i]=(int *)malloc(numc * sizeof(int));
    }

    printf("\nDATOS MATRIS 1\n");

    for(int a=0;a<numf;a++)
    {
        for(int b=0;b<numc;b++)
        {
            printf("Ingrese dato [%d , %d]: ",a,b);
            scanf("%d",&(*(*(pma+a)+b)));
        }
    }

    pma2=(int**)malloc(numf * sizeof(int *));
    for(int i=0;i<numc;i++)
    {
        pma2[i]=(int *)malloc(numc * sizeof(int));
    }

    printf("\nDATOS MATRIS 2\n");

    for(int c=0;c<numf;c++)
    {
        for(int d=0;d<numc;d++)
        {
            printf("Ingrese dato [%d , %d]: ",c,d);
            scanf("%d",&(*(*(pma2+c)+d)));
        }
    }

    //printf("%d   %d   %d   %d",*(*(pma+0)+0),*(*(pma+0)+1),*(*(pma2+0)+0),*(*(pma2+0)+1));




}

void multiplicar()
{
    int j, k;
    pma3=(int**)malloc(numf*sizeof(int*));
    for(int i=0;i<numc;i++)
    {
        pma3[i]=(int*)malloc(numc*sizeof(int));
    }

    for (int i=0;i<=numf;i++)
    {for (int j=0;j<=numc;j++)
       {
           *(*(pma3+j)+i)=0;
           for (int k=0;k<=numc;k++)
           {
              *(*(pma3+j)+i)=*(*(pma3+j)+i)+*(*(pma+i)+k)**(*(pma2+k)+j);
           }
       }
    }
}
