#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

int main(int argc, char **argv) {
	setlocale(LC_ALL, "");
	wchar_t *str[11] = {
		L"おはよー",
		L"起きてー",
		L"朝だよ",
		L"外",
		L"明るい",
		L"ねえねえ",
		L"見て見て",
		L"すごい",
		L"外明るい",
		L"外見て",
		L"カン",
	};
	srand(time(NULL));
	int c = 20;
	if(argc >= 2) {
		c = atoi(argv[1]);
		if(c <= 0) {
			c = 20;
		}
	}
	for(int i = 0; i < c; i++) {
		int j = rand()%15;
		if(j >= 10) {
			j = 10;
			int r = rand()%5+2;
			for(int k = 0; k < r; k++){
				wprintf(L"%ls", str[j]);
			}
		} else {
			wprintf(L"%ls", str[j]);
		}
		int r = rand()%5 + 1;
		for(int k = 0; k < r; k++) {
			wprintf(L"！");
		}
	}
	return 0;
}
