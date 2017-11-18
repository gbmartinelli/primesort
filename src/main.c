#include <stdio.h>

int main() {

int num, flag = 0, tam_vetnum=0, j=0, k=0, tam_vetnprimos=0, div=0, aux, troca=1;
int vet_num[1000000], vet_nprimos[1000000];

while (flag != 1) {

  	scanf("%d", &num);
	
	if (num != -1) {
		vet_num[tam_vetnum] = num;
		tam_vetnum++;
	}
	else {
		flag = 1;
	}
}

for(j=0;j<tam_vetnum;j++){
	for (k=1;k<=vet_num[j]/2;k++){
		if(vet_num[j]%k == 0){
			div++;
		}
	}
	if(div != 1) {
		vet_nprimos[tam_vetnprimos] = vet_num[j];
		tam_vetnprimos++;
	}
	div = 0;
}

for(j=tam_vetnprimos-1;(j>=1)&&(troca==1);j--){
troca=0;
	for(k=0;k<j;k++){
		if(vet_nprimos[k]<vet_nprimos[k+1]){
			aux = vet_nprimos[k];
			vet_nprimos[k] = vet_nprimos[k+1];
			vet_nprimos[k+1] = aux;
			troca=1;
		}
	}
}

for(j=0;j<tam_vetnprimos;j++){
	printf("%d\n", vet_nprimos[j]);
}
return 0;
}
