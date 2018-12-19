#include <bits/stdc++.h>

using namespace std;

int main(){
	int primeiro = 0, segundo = 1;
	int numerosSairam = 0;
	bool saiu[100];
	memset(saiu, false, sizeof saiu);
	while(true){
		int aux = (primeiro%100 + segundo%100)%100;
		if(!saiu[aux]){
			saiu[aux] = true;
			printf("O numero %d sera: %d\n",numerosSairam+1,aux);
			numerosSairam++;
		}
		primeiro = segundo;
		segundo = aux;
		if(numerosSairam == 50)break;
	}
	return 0;
}