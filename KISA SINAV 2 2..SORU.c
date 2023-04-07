#include <stdio.h>
#include <stdlib.h>

/* 2.SORU :VERÝLEN 3 DÜÐÜMLÜ ÝKÝLÝ AÐAÇTA KÖK DEÐERÝNÝN ALT DÜÐÜMLERÝN 
TOPLAMINA EÞÝT OLUP OLMADIÐINI BULUNUZ.*/

// Ýlk olarak düðümler belirtilir.
struct dugum{
  int sayý;
	struct dugum *sol;
	struct  dugum *sag;
	 
};


// Daha sonra kök ve alt iki düðümü için yer ayýrýlýr.
typedef struct dugum ikiliagac;
	ikiliagac*yeni_dugum(int sayý){
	
	ikiliagac*p=(ikiliagac*)malloc(sizeof(ikiliagac));
	   p->sayý=sayý;
		p->sol=NULL;
		p->sag=NULL;
		return p;
		
	
}

// Kök ve düðümlerin koþullarý kontrol edilir.
ikiliagac *aralýk(ikiliagac *kok,int sayý){
	if(kok!=NULL){
		if(sayý<kok->sayý)
		kok->sol= aralýk(kok->sol,sayý);
		else 
		kok->sag=aralýk(kok->sag,sayý);
	}
	else
	kok=yeni_dugum(sayý);
	return kok;
}




// Bir kök deðeri verilir.
int main() {
	
	printf(" 2.SORU :VERÝLEN 3 DÜÐÜMLÜ ÝKÝLÝ AÐAÇTA KÖK DEÐERÝNÝN ALT DÜÐÜMLERÝN 
TOPLAMINA EÞÝT OLUP OLMADIÐINI BULUNUZ.\n");

    struct dugum *kok=yeni_dugum(20);
    int a,b;
    
 // Kullanýcýdan sol ve sað düðümlerin deðerleri istenir.
    printf("agacýn soluna ve sagýna girmek icin sayý gýrýn:");
    scanf("%d %d",&a,&b);
 
  
      kok->sol=yeni_dugum(a);
    kok->sag=yeni_dugum(b);
     
     
     
     
     if(a> 20 &&b< 20)
  printf("girilen deger yanlýs");
  
  
    

	/*  Son olarak kök ve alt düðümler aðaç sisteminde girilir 
	ve kök deðeri alt düðümlerin toplamýmý kontrol edilir.*/
  printf("     %d\n", kok->sayý);
    printf("   /   \\\n");
    printf("  %d     %d\n", kok->sol->sayý, kok->sag->sayý);
if(a+b==20)
printf("agactaký kok degerý alt dugumlerýn toplamýdýr");
else 
printf("agactaký kok degerý alt dugumlerýn toplamý degýldýr");

	
	
	
	return 0;
}
