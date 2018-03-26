#include "slink.h"
#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
// Ali Piqri Sopandi 	: 171511035													  //
// Mufida Nuha Salimah	: 171511050													  //
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	infotype X;
	infotype data,value;
	int Hasil,c;
	boolean valid;
	address Head;
	address P, Q;
	Head = Nil;
 	
 	while(1){
		system("cls");
		printf("1. Insert Awal\n");
		printf("2. Insert Akhir\n");
		printf("3. Insert After\n");
		printf("4. Delete Awal\n");
		printf("5. Delete Akhir\n");
		printf("6. Delete After\n");
		printf("7. Rerata\n");
		printf("8. Min\n");
		printf("9. Jumlah Elemen\n");
		printf("10. Balik List\n");
		//printf("11. Sort\n");
		printf("11. Tampil\n");
		printf("Pilihan :");scanf("%d",&c);
		
		switch(c){
			case 1 :
				printf("Value : ");scanf("%d",&value);
				Create_Node(&P);
				Isi_Node(&P,value);
				Ins_Awal(&Head,P);
			break;
			case 2 : 
				printf("Value : ");scanf("%d",&value);
				Create_Node(&P);
				Isi_Node(&P,value);
				Ins_Akhir(&Head,P);
			break;
			case 3 :
				printf("Data Yang Dicari : ");scanf("%d",&data);
				printf("Value : ");scanf("%d",&value);
				Create_Node(&P);
				Isi_Node(&P,value);
				Q=Search(Head,data);	
				InsertAfter(&Q,P);
			break;
			case 4 :
				Del_Awal(&Head,&X);
				printf("Node Info %d Terhapus\n",X);
			break;
			case 5 :
				Del_Akhir(&Head,&X);
				printf("Node Info %d Terhapus\n",X);
			break;
			case 6 :
				printf("Data Yang Dicari : ");scanf("%d",&data);
				Q=Search(Head,data);
				Del_After(&Q,&X);
				printf("Node Info %d Terhapus\n",X);
			break;
			case 7 :
				Hasil = Rerata(Head);
				printf("Rata2 : %d\n",Hasil);
			break;
			case 8 :
				Hasil = Min(Head);
				printf("Minimal : %d\n",Hasil);
			break;
			case 9 :	
				Hasil = NbElmt(Head);
				printf("Elemen %d\n",Hasil);
			break;
			case 10 :
				Head = BalikList(Head);
			break;
			case 11 :
				Tampil_List(Head);
			break;
			default : printf("Salah"); break;
		}
		system("pause");
	}
}
