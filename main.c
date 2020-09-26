#include <stdio.h>
#include <stdlib.h>

void shift(char *kelime, int key){
	char c = kelime[0];
	int i =0;
	while(c != '\0'){
		if(c >= 65 && c<=90){
			kelime[i] = (kelime[i]+key);
			if(kelime[i] > 90){
				kelime[i] = (kelime[i]%90) + 65;
			}
		}
		if(c >= 97 && c < 122){
			kelime[i] = (kelime[i] + key);
			if(kelime[i] > 122){
				kelime[i] = (kelime[i]%122) + 97;
			}
		}
		
		i++;
		c = kelime[i];
	}
}

int main(int argc, char *argv[]) {
	
	char kelime[15] = "memoli tasli";
	shift(kelime,2);
	
	printf("Sifrelenmis Metin  : %s", kelime);
	shift(kelime,-2);
	printf("\n");
	printf("Sifresi cozulmus metin : %s",kelime);
	return 0;
}
