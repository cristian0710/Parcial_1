#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct productos
{
    char producto[30];
    int cantdidad, precio, importe;

};

struct provedores
{
    char nom[30], direccion[30], empresa[30];
    int tel;
    productos prodt[100];
}prov[100];

int main()
{
    int n, aux, c;
    printf("Ingrese cantidad de registros: ");
    scanf("%d",&n);
    prov[n];
    char v_pro[n][100];

    for(int i=0;i<n;i++)
    {
        printf("Ingrese proveedor %d nombre: ",i+1);
        scanf("%s",prov[i].nom);
        printf("Ingrese direccion: ");
        scanf("%s",prov[i].direccion);
        printf("Ingrese empresa: ");
        scanf("%s",prov[i].empresa);
        printf("Ingrese teleono: ");
        scanf("%d",&prov[i].tel);

        printf("Ingrese producto: ");
        scanf("%s",prov[i].prodt[i].producto);
        strcpy(v_pro[i],prov[i].prodt[i].producto);
        printf("Ingrese cantidad: ");
        scanf("%d",&prov[i].prodt[i].cantdidad);
        printf("Ingrese valor unitario: ");
        scanf("%d",&prov[i].prodt[i].precio);
        prov[i].prodt[i].importe=prov[i].prodt[i].cantdidad * prov[i].prodt[i].precio;
    }

    printf("\nDATOS DE PROVEEDORES\n");
    for(int i=0;i<n;i++)
    {
        printf("Nombre: %s\n",prov[i].nom);
        printf("Importe total: %d\n",prov[i].prodt[i].importe);
    }

    printf("\nEL PROVEDOR MAS CARO\n");
    aux=prov[0].prodt[0].precio;
    for(int i=0;i<n;i++)
    {
        if(aux<=prov[i].prodt[i].precio)
        {
            aux=prov[i].prodt[i].precio;
            c=i;
        }
    }
    printf("%s",prov[c].nom);
    printf("%s",prov[c].prodt[c].producto);
    printf("%d",prov[c].prodt[c].precio);

    printf("\nEL PROVEDOR MAS BARATO\n");
    aux=prov[0].prodt[0].precio;
    for(int i=0;i<n;i++)
    {
        if(aux>=prov[i].prodt[i].precio)
        {
            aux=prov[i].prodt[i].precio;
            c=i;
        }
    }
    printf("%s\n",prov[c].nom);
    printf("%s\n",prov[c].prodt[c].producto);
    printf("%d\n",prov[c].prodt[c].precio);

    printf("El vector de productos es: ");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",v_pro[i]);
    }

    return 0;

}
