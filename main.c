#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    printf("\tRastgele Sayi Jeneratorumuz Tamamen Rastgele 1 ve 100 Arasinda Bir Sayi Uretececektir.\n \tSizden Istegimiz En Az Denemede Bu Sayiyi Bulmaniz.\n");
    srand(time(NULL));                                    //Sayinin daha rastgele olmasi icin bu komutu yazdik.
    int guess,numberOfGuess=0, randomNumber = rand() % 100 + 1;     //Rastgele bir sayi uretip sayiyi bir degiskene bagliyoruz.

    while(guess != randomNumber){                      //while fonksiyonuyla kullanıcıyı döngüye bağlıyoruz.
        numberOfGuess++;                            //Her döngüde tahmin sayısını 1 artırıyoruz.
        takeGuess:
        if(scanf("%d",&guess)!=1){      //Her döngü için bir sayı istiyoruz ve sayı olup olmadığını kontrol ediyoruz.
            fflush(stdin);
            printf("Lutfen Sadece Sayi Giriniz\n");
            goto takeGuess;
        }
        if(guess == randomNumber){                 //Sayıyı doğru tahmin ederse 1 döndürerek programı sonlandırıyoruz.
            printf("Dogru Tahmin Yaptiniz : %d\n \t Tahmin Sayiniz : %d",guess,numberOfGuess);
            return 1;
        } else if (guess < randomNumber){
            if(randomNumber - guess <= 10)              //Sayıya ne ne kadar yakın olduğunu belirtiyoruz.
                printf("\tCok Yakin\n");
            else if(randomNumber - guess <= 30)
                printf("\tYakin\n");
            printf("Girdiginiz Sayi Olusturulan Sayidan Kucuktur : %d\nLutfen Tekrar Deneyiniz.\n\t Tahmin Sayiniz : %d\n",guess,numberOfGuess);}
        else{
        	if(guess - randomNumber <= 10)              //Sayıya ne ne kadar yakın olduğunu belirtiyoruz.
            	printf("\tCok Yakin\n");
        	else if(guess - randomNumber <= 30)
            	printf("\tYakin\n");
            printf("Girdiginiz Sayi Olusturulan Sayidan Buyuktur : %d\nLutfen Tekrar Deneyiniz.\n\t Tahmin Sayiniz : %d\n",guess,numberOfGuess);}
    }

    return 0;
}
