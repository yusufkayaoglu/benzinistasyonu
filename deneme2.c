#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int marka,r=0,m=0,h=0,f=0,en_buyuk=0;
	float tutar,r_tutar=0,m_tutar=0,h_tutar=0,f_tutar=0,en_buyuk_tutar;
	do{
	printf("Marka ve tutar giriniz: ");
	scanf("%d%f",&marka,&tutar);
	switch(marka){
	case 1:
	r++;
	r_tutar=r_tutar+tutar;
	if(r>m+h+f){		
	en_buyuk=r;	
	}
	if(r_tutar>m_tutar+h_tutar+f_tutar){
	en_buyuk_tutar=r_tutar;
	}
	break;	
	case 2:
	m++;
	m_tutar=m_tutar+tutar;
	if(m>r+h+f){
	en_buyuk=m;
	}
	if(m_tutar>r_tutar+h_tutar+f_tutar){
	en_buyuk_tutar=m_tutar;
    }
	break;	
	case 3:
	h++;
	h_tutar=h_tutar+tutar;
	if(h>r+m+f){
	en_buyuk=h;		
	}
	if(h_tutar>m_tutar+r_tutar+f_tutar){
	en_buyuk_tutar=h_tutar;
    }
	break;
	case 4:
	f++;
	f_tutar=f_tutar+tutar;
	if(f>h+m+f){
	en_buyuk=f;	
	}
	if(f_tutar>m_tutar+h_tutar+r_tutar){
	en_buyuk_tutar=f_tutar;
	printf("En cok satıs yapan ford (%f TL)",f_tutar);	
    }
	break;	
			
   	}
   	}
	while(marka!=111);
if(en_buyuk==r){
    printf("En cok gelen renault (%d kez)",r);
	}
	if(en_buyuk==m){
    printf("En cok gelen mazda (%d kez)",m);
	}
	if(en_buyuk==h){
    printf("En cok gelen honda (%d kez)  ",h);
	}
	if(en_buyuk==f){
    printf("En cok gelen ford (%d kez)",f);
	}
	if(en_buyuk_tutar==r_tutar){
	printf("En cok satis yapan renault (%f TL)",r_tutar);
	}
    if(en_buyuk_tutar==m_tutar){
	printf("En cok satis yapan mazda (%f TL)",m_tutar);
	}
	if(en_buyuk_tutar==h_tutar){
	printf("En cok satis yapan honda (%f TL)",h_tutar);
	}
	if(en_buyuk_tutar==f_tutar){
	printf("En cok satis yapan ford (%f TL)",f_tutar);
	}
		
	
	return 0;
	
}
