#include <stdio.h>
#define size 100
int main (int argc, char* argv[]) {
	
	char metin[size], tmp;
	printf("Bir metin giriniz : "); gets(metin); //scanf("%s",metin); (scanf kullan�rken bo�luk b�rak�rsam, bo�luk ve bo�luktan sonras� diziye ge�irilmez.)
	int i, uzunluk=0;
	
	//metinin uzunlu�u
	for(i=0 ; metin[i] != '\0';++i) // '\0' yerine ' ' yazsayd�m, bo�luk karakteriyle kar��la��ld���nda for d�ng�s�nden ��k�l�rd�;
		uzunluk += 1;
	printf("metin uzunlugu : %d\n",uzunluk);
	
	//uzunluk = strlen(metin);
	
	//metini ters �evirme
	for(i=0;i< uzunluk/2 ;++i) {
		tmp = metin[i];
		metin[i] = metin[uzunluk-1-i];
		metin[uzunluk-1-i] = tmp;
   }  
   //diziyi(metini) yazd�rma
   printf("metinin ters cevrilmis hali : ");
	for (i=0;i<uzunluk;++i)
		printf("%c", metin[i]);	
	/*
	metini ters cevirme ve yazd�rma
	for (i=0;i<uzunluk;++i)
		printf("%c", metin[uzunluk-1-i]);
	*/
	return 0;
}

