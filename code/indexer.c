#include <stdio.h>
#include <stdlib.h>
#include <json.h>
#include <dirent.h>
//vittu mitä paskaa
//tässäkin, compile with "gcc -I./json_lib code/[code].c -o [program]" koska vittu

int reader(char str[]) //häpeilemättä kopioitu laskareista
{
    int endpoint = 0;
    // Tätä funktiota käytetään syötteen lukemiseen
    int i = 0; // indeksi, monenteenko taulukon alkioon luetaan
    while (1 == 1)
    {
        // luetaan rivinvaihtoon asti
        str[i] = getchar(); // merkataan merkki merkkijonoon oikealle paikalle
        if (str[i] == '\n')
        {
            endpoint = i;
            return(endpoint);
        }
        i++; // siirrytään seuraavaan kohtaan kirjoittamaan
    }
}

int individual_file_indexer(char address[]){//ottaa yksittäisien tiedostojen nimet, sijainnit, ja id:t

}

int reader_main(void){//the index machine
    printf("Give export folder location:");
    char str[255] = {0};

    int end = 0;
    end = reader(str); // Tämä funktio lukee käyttäjän syötteen

    char real_address[end + 1];
    for(int i = 0; i <= end; i++)
    {
        real_address[i] = str[i];
    }
    real_address [end] = 0;//otetaan oikeaan pituinen funktio
    // TÄRKEÄ: dirent osoitteet vaatii että tiedostosijainti loppuu nulliin

    printf(str);
    printf("\n");

    DIR *address = opendir(real_address);
    perror("opendir");

    if(address == NULL){ //tarkistetaan onko oikea sijainti
        printf("Bad directory");
        return(0);
    }
    else{
        printf(real_address);
    }

    
}