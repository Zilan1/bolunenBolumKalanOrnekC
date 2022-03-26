#include <stdio.h>
#include <stdlib.h>
    
int main(){
	
	int bolunen,bolen,bolum,kalan;
	
	printf("Bolunen Sayiyi Giriniz:");
	scanf("%d",&bolunen);
	
	printf("Bolen Sayiyi Giriniz: ");
	scanf("%d",&bolen);
	
	bolum=bolunen/bolen;
	kalan=bolunen%bolen;
    
    printf("Bolum: %d\n",bolum);
    printf("Kalan: %d",kalan);
    
    return 0;
    
    
}
	

	
	
//************************************************************************************************************************** 

	
	
	//int asalSayi(int, int);
 
//int main() {
   // int sayi = 29;
    //int sonuc = asalSayi(sayi, sayi / 2);
    //if (sonuc == 0)
        //printf("%d asal sayi degildir\n", sayi);
    //else
        //printf("%d asal sayidir\n", sayi);
    //return 0;
//}
 
//int asalSayi(int x, int i) {
    //if (x < 2)
       // return 0;
    //if (i == 1)
       // return 1;
    //if (x % i == 0)
       // return 0;
    //return asalSayi(x, i - 1);
//}
    
    
//************************************************************************************************************************** 
    
    
    
//int main(){
	
	//int sayi,i;
	//int x=0;
	
	//printf("Sayi Giriniz: ");
	//scanf("%d",&sayi);
	
	//if(sayi==2)
	//{
		//printf("%d Sayisi Asaldir\n",sayi);
	//}
	//if(sayi<2)
	//{
		//printf("%d Sayisi Asal Degildir.\n",sayi);
		//printf("Lutfen Asal Bir Sayi Giriniz!!!");
	//}
	//for(i=2;i<sayi/2;i++)
	//{
		//if(sayi%i==0)
		//{
			//printf("%d Sayisi Asal Degildir.\n",sayi);
			//x=1;
			//break;
		//}
	//}
	//if(x==0)
	//{
		//printf("%d Sayisi Asaldir.\n",sayi);
	//}
//}
	
	
//************************************************************************************************************************** 


	
	//int obeb(int ,int );
    
//int main(){
	
	//int s1=180;
	//int s2=48;
	
	//int sonuc=obeb(s1,s2);
	//printf("Sonuc: obeb(%d,%d)=%d\n",s1,s2,sonuc);
//}    
    //int obeb(int x, int y)
    //{
    	//if(y==0)
    	//return x;
    	
    	//return obeb(y, x % y);
	//}
    
    //int okek(int x, int y)
    //{
    	//return x*y / obeb(x,y);
	
	//return 0;
	
	//}
	

	
//************************************************************************************************************************** 
	
	
	//int obeb(int ,int );
    //int okek(int ,int );
    
//int main(){
	
	//int s1=180;
	//int s2=48;
	
	//int sonuc=okek(s1,s2);
	//printf("Sonuc: okek(%d,%d)=%d\n",s1,s2,sonuc);
//}    
    //int obeb(int x, int y)
    //{
    	//if(y==0)
    	//return x;
    	
    	//return obeb(y, x % y);
	//}
    
    //int okek(int x, int y)
    //{
    	//return x*y / obeb(x,y);
	
	//return 0;
	
	//}
    
    
    
//************************************************************************************************************************** 
	
	
	//typedef int tamsayi;
	
//int main(){
	
	//tamsayi ts,ts1,ts2;
	//ts=10;
	//ts1=11;
	//ts2=12;
	//printf("%d %d %d",ts,ts1,ts2);	
	

	
	
	
//*******************************************************************
	
	//struct kayit
	//{
		//char isim[50];
		//int sira;
		//int numara;
	//};
	
	//struct kayit ogr;

//int main() {
	
	//int i;
	
	//printf("Ogrenci Bilgilerinizi Giriniz\n");
	
	   //for(i=0;i<10;i++)
	//{
		//ogr.sira = i+1;
		
		//printf("\nSira Numarasi %d,\n",ogr.sira);
		
		//printf("Lutfen Isminizi Giriniz: ");
		//scanf("%s",ogr.isim);
		
		//printf("Numaranizi Girin: ");
		//scanf("%f",ogr.numara);
		
		//printf("\n");
	//}
	
	//printf("Ogrenci Bilgileri--Ç\n\n");
	 
	   //for(i=0;i<10;i++)
	   //{
	   	//printf("\nSira Numarasi: %d\n",i+1);
	   	//printf("Isim: ");
	   	//puts(ogr.isim);
	   	
		//printf("Numara: %.1f",ogr.numara);
	   	//printf("\n");
		//} 
	
