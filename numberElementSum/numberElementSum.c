#include <stdio.h>
//Burak Önce
//Bu program girilen sayının rakamlarını toplar 
//(recursive olarak)


int ftopla(int n) //fonksiyon
{
int a=0;
if(n==0)  //çıkış yolu
return 0;

else


a+=n%10;

return a+ftopla(n/10); //recursive kısım

}


int main() {
  
int n;

printf("bir sayi giriniz : ");
scanf("%d",&n);

printf("%d",ftopla(n));

  return 0;
}