#include <stdio.h>
#include <stdlib.h>

/* 2.SORU :VER�LEN 3 D���ML� �K�L� A�A�TA K�K DE�ER�N�N ALT D���MLER�N 
TOPLAMINA E��T OLUP OLMADI�INI BULUNUZ.*/

// �lk olarak d���mler belirtilir.
struct dugum{
  int say�;
	struct dugum *sol;
	struct  dugum *sag;
	 
};


// Daha sonra k�k ve alt iki d���m� i�in yer ay�r�l�r.
typedef struct dugum ikiliagac;
	ikiliagac*yeni_dugum(int say�){
	
	ikiliagac*p=(ikiliagac*)malloc(sizeof(ikiliagac));
	   p->say�=say�;
		p->sol=NULL;
		p->sag=NULL;
		return p;
		
	
}

// K�k ve d���mlerin ko�ullar� kontrol edilir.
ikiliagac *aral�k(ikiliagac *kok,int say�){
	if(kok!=NULL){
		if(say�<kok->say�)
		kok->sol= aral�k(kok->sol,say�);
		else 
		kok->sag=aral�k(kok->sag,say�);
	}
	else
	kok=yeni_dugum(say�);
	return kok;
}




// Bir k�k de�eri verilir.
int main() {
	
	printf(" 2.SORU :VER�LEN 3 D���ML� �K�L� A�A�TA K�K DE�ER�N�N ALT D���MLER�N 
TOPLAMINA E��T OLUP OLMADI�INI BULUNUZ.\n");

    struct dugum *kok=yeni_dugum(20);
    int a,b;
    
 // Kullan�c�dan sol ve sa� d���mlerin de�erleri istenir.
    printf("agac�n soluna ve sag�na girmek icin say� g�r�n:");
    scanf("%d %d",&a,&b);
 
  
      kok->sol=yeni_dugum(a);
    kok->sag=yeni_dugum(b);
     
     
     
     
     if(a> 20 &&b< 20)
  printf("girilen deger yanl�s");
  
  
    

	/*  Son olarak k�k ve alt d���mler a�a� sisteminde girilir 
	ve k�k de�eri alt d���mlerin toplam�m� kontrol edilir.*/
  printf("     %d\n", kok->say�);
    printf("   /   \\\n");
    printf("  %d     %d\n", kok->sol->say�, kok->sag->say�);
if(a+b==20)
printf("agactak� kok deger� alt dugumler�n toplam�d�r");
else 
printf("agactak� kok deger� alt dugumler�n toplam� deg�ld�r");

	
	
	
	return 0;
}
