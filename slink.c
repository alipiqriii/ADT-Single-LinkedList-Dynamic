#include "slink.h"
#include "boolean.h"
boolean isEmpty(address p){
	if(p == Nil){
		return true;
	}
	else return false;
}

void Create_Node (address *p){
	*p = (address) malloc(sizeof(ElmtList));
	if(isEmpty(*p)) printf("Alokasi Gagal");	
}

void Isi_Node(address *p,infotype nilai){
	if(!isEmpty(*p)){
		info(*p) = nilai;    
   		next(*p) = Nil;	
	}
	else printf("Isi Nilai Gagal");    
} 

void Tampil_List (address p){
   	while(!isEmpty(p)){
   	printf("%d ",info(p));
	p = next(p);
   }
   printf("\n");
}

void Ins_Awal (address *p, address PNew){
	if(isEmpty(*p)){
		next(PNew) = Nil;        
   		*p = PNew;
	}
	else {
			next(PNew) = Nil; 
		   	next(PNew) = *p;    
		   	*p = PNew;
	}	
}

void Ins_Akhir (address *p, address PNew){
	address temp;
	if(isEmpty(*p)){
		printf("Pertama\n");
		next(PNew) = Nil;        
   		*p = PNew;
	}
	else {
		temp = *p;
		while(!isEmpty(next(temp))){
			temp=next(temp);
		}
		next(temp) = PNew;	
	}	
}

int NbElmt (address p){
	if(p == Nil) return 0;
	return 1 + NbElmt(next(p));
	
}

address Search (address p, infotype nilai){
		if(isEmpty(p)){
			return 0;
		}
		else {
		address temp;
		boolean found=false;
		temp = p;
		while(!isEmpty(p) && !found){
			if (info(temp) == nilai)found = true;
			else temp = next(temp);
		}
		return temp;
		}
}
	
void InsertAfter (address *pBef, address PNew){
	if(!isEmpty(*pBef)){
	next(PNew) = next(*pBef);
	next(*pBef) = PNew;
	}
}
	
void Del_Awal (address * p, infotype * X){
		if(!isEmpty(*p)){
			address temp;
			temp = *p;
			*p = next(temp);
			*X = info(temp);
			next(temp) = Nil;
			DeAlokasi(&temp);	
		}
	}
	
void DeAlokasi (address *p){
	if(isEmpty(*p)) free(*p);
}

void Del_Akhir (address * p, infotype * X){
		address temp;
		address temp2;
		if(!isEmpty(*p)){
			temp = temp2 = *p;
			while(!isEmpty(next(temp))){
				temp2=temp;
				temp=next(temp);
				printf("LOOP");	
			}
			
				next(temp2) = Nil;
				*X = info(temp);
				DeAlokasi(&temp); 	
				
		}
	}

infotype Rerata (address p){
		if (!isEmpty(p)){
			int Tot, Sum = 1, Avg;
			Tot = info(p);
			while(next(p)!=Nil){
				p = next(p);
				Tot = Tot + info(p);
				Sum++;
			}
			Avg = Tot/Sum;
			return Avg;	
		}
		else return 0;
	}
	
	
address BalikList (address p)
	{
		if(!isEmpty(p)){
			address current, prev, next1;	
			current = p;
			prev = Nil;
			while (current != Nil){
				next1 = next(current);
				next(current) = prev;
				prev = current;
				current = next1;
			}
			p = prev;
			return p;
		}
		else return 0;
	}
void Del_After(address *pBef,infotype *X){
	if(!isEmpty(*pBef)){
		address temp;
		temp = next(*pBef);
		next(*pBef) = Nil;
		next(*pBef) = next(temp);
		next(temp) = Nil;
		DeAlokasi(&temp);	
	}
	
}

infotype Min (address p)
	{
		if(!isEmpty(p)){
			int min;
			address Q;
			Q = p;
			min = info(Q);
			while(next(Q) != Nil){
				Q = next(Q);
				if(info(Q) < min){
					min = info(Q);
				}
			}
			return min;
		}
		else return 0;
	}
