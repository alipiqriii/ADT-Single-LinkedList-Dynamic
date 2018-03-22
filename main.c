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
	infotype X=0;
	int Jum_Elemen;
	boolean valid;
	address insert;
	address Head;
	address P, Q;
	Head = Nil;
 	
 	//Membuat 4 Node
	Create_Node(&P);
	Isi_Node(&P,100);
	Ins_Awal(&Head,P);
	Del_Akhir(&Head,&X);
	Tampil_List(Head);
	
	Create_Node(&Q);
	Isi_Node(&Q,200);
	Ins_Awal(&Head,Q);
	
	Create_Node(&P);
	Isi_Node(&P,300);
	Ins_Awal(&Head,P);
	
	Create_Node(&Q);
	Isi_Node(&Q,300);
	Ins_Awal(&Head,Q);
	
	printf("\nTampil Semua Node & Insert Node di Awal :\n");
	Tampil_List(Head);
	
	printf("\nInsert Node Diakhir:\n");
	//Membuat Node di akhir
	Create_Node(&Q);
	Isi_Node(&Q,800);   
	Ins_Akhir(&Head,Q);
	Tampil_List(Head);
	
	//Membuat Node Diantara 
	Create_Node(&P);
	Isi_Node(&P,1000);
	
	//Mencari info dari suatu node
	Q=Search(Head,100);
	//Menambahkan node diantara dua node	
	InsertAfter(&Q,P);
	printf("\nInsert Node Diantara :\n");
	Tampil_List(Head);
	
	//Mennghapus Node Diantara
	printf("\nHapus Node Diantara :\n");
	Q=Search(Head,100);
	Del_After(&Q,&X);
	Tampil_List(Head);
	
	printf("\nJumlah Elemen Node :\n");
	//Menghitung dan menampilkan jumlah node
	Jum_Elemen = NbElmt(Head);
	printf("Elemen %d",Jum_Elemen);
	
	printf("\n\nReverse Node :\n");
	//Membalikkan Linked List (Head jadi terakhir)
	Head = BalikList(Head);
	Tampil_List(Head);
	
	infotype Rata2;
	//Menghitung Rata-Rata Linked List
	Rata2 = Rerata(Head);
	
	printf("\nRata2 : %d",Rata2);
	
	printf("\n\nHapus Node Akhir :\n");
	//Menghapus node di akhir elemen
	Del_Akhir(&Head,&X);
	Tampil_List(Head);
	
	printf("\nHapus Node Awal :\n");
	//Menghapus node di akhir elemen
	Del_Awal(&Head,&X);
	Tampil_List(Head);
	
	int min=0;
	min = Min(Head);
	printf("\nMinimal : %d",min);	
}
