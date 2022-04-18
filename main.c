#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int dizi1[3][4] = {{1,2,3,4},{7,8,9,10},{3,7,2,9}};
    int dizi2[3][4] = {{7,5,2,9},{3,6,4,8},{2,6,4,8}};
    printf("2 dizinin toplamý:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
            printf("%d ",dizi1[i][j]+dizi2[i][j]);
            printf("\n"); // İcteki döngüde süslü parantez kulanlmadigi için otomatikmen dıstaki için calisiyor bu satir!!!

    }

    return 0;
}
