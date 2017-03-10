#include <stdio.h>
#include <stdlib.h>

void pedir_datos();
void llenar_matriz();

int f, c, **pm;

int main()
{
    pedir_datos();
    llenar_matriz();
    for(int i=0;i<f;i++)
    {
        free(pm[i]);
    }

}

void pedir_datos()
{
    printf("Ingrese filas: ");
    scanf("%d",&f);
    printf("Ingrese columnas: ");
    scanf("%d",&c);

    pm=(int **)malloc(f*sizeof(int*));
    for(int i=0;i<c;i++)
    {
        pm[i]=(int *)malloc(c*sizeof(int));
    }

}

void llenar_matriz()
{
    int m=f*c, p, c2=0,x=1, z=0;
    int vec[m];

    printf("Ingrese numero: ");
    scanf("%d",&p);

    for(int i=0;i<m;i++)
    {
        while(x==1)
        {
            for(int n=1;n<=p;n++)
            {
                if(p%n==0)
                {
                    c2++;
                }
            }
            if(c2==2)
            {
                vec[i]=p;
                x=0;
            }
            else
            {
                p=p+1;
                c2=0;
            }
        }
        x=1;
        p=p+1;
    }
/*
    for(int i=0;i<m;i++)
    {
        printf("%d  ",vec[i]);
    }*/

    printf("\nMATRIZ DE NUMEROS PRIMOS\n");

    for(int i=0;i<f;i++)
    {
        printf("\n");
        for(int e=0;e<c;e++)
        {
            *(*(pm+e)+i)=vec[z];
            printf("%d ",*(*(pm+e)+i));
            z++;
        }
    }


}
