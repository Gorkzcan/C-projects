#include <stdlib.h>
#include <stdio.h>


int main()
{
    char cumlem[100];
    int kontrol;
    char *p1,*p2;

    printf("Max 100 karakterli bir cumle giriniz : \n ");
    gets(cumlem);

   for(p2=cumlem;*p2;p2++);
   p2--;

    kontrol=1;

    for(p1=cumlem;kontrol && p1<p2;p1++,p2--)
    {
        if(*p1 != *p2 )
        {
            kontrol = 0;    //kontrol 0 olursa işlemden çıkacak ancak 1 olduğunda geri dönecek
        }
    }
    if(kontrol == 1)
    {
        printf("Girilen %s bir palendromdur.\n",cumlem);
    }
    else
    {
        printf("Girilen %s bir palendrom degildir. \n ",cumlem);
    }



    return 0;
}