#include <stdio.h>
#define size 100
int main (int argc, char* argv[]) {
	
	char metin[size], tmp;
	printf("Bir metin giriniz : "); gets(metin); //scanf("%s",metin); (scanf kullanýrken boþluk býrakýrsam, boþluk ve boþluktan sonrasý diziye geçirilmez.)
	int i, uzunluk=0;
	
	//metinin uzunluðu
	for(i=0 ; metin[i] != '\0';++i) // '\0' yerine ' ' yazsaydým, boþluk karakteriyle karþýlaþýldýðýnda for döngüsünden çýkýlýrdý;
		uzunluk += 1;
	printf("metin uzunlugu : %d\n",uzunluk);
	
	//uzunluk = strlen(metin);
	
	//metini ters çevirme
	for(i=0;i< uzunluk/2 ;++i) {
		tmp = metin[i];
		metin[i] = metin[uzunluk-1-i];
		metin[uzunluk-1-i] = tmp;
   }  
   //diziyi(metini) yazdýrma
   printf("metinin ters cevrilmis hali : ");
	for (i=0;i<uzunluk;++i)
		printf("%c", metin[i]);	
	/*
	metini ters cevirme ve yazdýrma
	for (i=0;i<uzunluk;++i)
		printf("%c", metin[uzunluk-1-i]);
	*/
	return 0;
}

