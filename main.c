#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    printf("\tRastgele Sayi Jeneratorumuz Tamamen Rastgele 1 ve 100 Arasinda Bir Sayi Uretececektir.\n\t100 Deneme Hakkiniz Olacaktir.\n \tSizden Istegimiz En Az Denemede Bu Sayiyi Bulmaniz.\n");
    srand(time(NULL));                                    //Sayinin daha rastgele olmasi icin bu komutu yazdik.
    int guess,numberOfGuess=0, randomNumber = rand()%100+1;          //Rastgele bir sayi uretip sayiyi bir degiskene bagliyoruz.

    for (int i = 0; i <100 ; ++i) {                  //for fonksiyonuyla kullanıcıyı dögüye bağlıyoruz.
        numberOfGuess++;                            //Her i döngüsünde tahmin sayısını 1 artırıyoruz.

        scanf("%d",&guess);                     //Her i döngüsü için bir sayı istiyoruz.
        if(numberOfGuess==100&&guess!=randomNumber){             //Tahmin sınırına ulaşınca programı 2 döndürerek sonlandırıyoruz.
            printf("Verilen Haklarinizin Tamamini Kullandiniz Ancak Sayiyi Yine De Bulamadiniz");
            return 2;}
        if(guess==randomNumber){                 //Sayıyı doğru tahmin ederse 1 döndürerek programı sonlandırıyoruz.
            printf("Dogru Tahmin Yaptiniz : %d\n \t Tahmin Sayiniz : %d",guess,numberOfGuess);
            return 1;
        } else if (guess<randomNumber){
            printf("Girdiginiz Sayi Olusturulan Sayidan Kucuktur : %d\nLutfen Tekrar Deneyiniz.\n\t Tahmin Sayiniz : %d\n",guess,numberOfGuess);
        } else if(guess>randomNumber){
            printf("Girdiginiz Sayi Olusturulan Sayidan Buyuktur : %d\nLutfen Tekrar Deneyiniz.\n\t Tahmin Sayiniz : %d\n",guess,numberOfGuess);
        }


    }

    return 0;
}
