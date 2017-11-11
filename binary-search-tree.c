typedef struct tno{
	int chave;
	struct tno *esq, *dir;
} no;

int inserirArv(no **raiz, int numero);
int removerArv(no **raiz, int numero);

void main(void){
	no *raiz = NULL;
	inserirArv(&raiz, 5);
}

int inserirArv(no **raiz, int numero){
	if((*raiz) == NULL){
		no (*raiz) = (no *) malloc(sizeof(no));
		if(!(*raiz)) return (-1);
		(* raiz) -> chave;
		(* raiz) -> dir = (* raiz) -> esq = NULL;
		return (1);
	}else{
		if(numero < (*raiz)->chave){
			return(inserirArv(&(*raiz)->esq, numero));
		}
		if(numero > (*raiz)->chave){
			return(inserirArv(&(*raiz)->dir, numero));
		}
	}
	
}

int removerArv(no **raiz, int numero){
	
	if(numero < (*raiz)->chave)
		return(removerArv(&(*raiz)->esq, numero));
	
	
	if(numero > (*raiz)->chave)
		return(removerArv(&(*raiz)->dir, numero));
	
	
	if((*raiz)->esq == NULL && (*raiz)->dir == NULL){
		
		no *aux = (*raiz);
		if((*raiz)->esq == NULL)
			(*raiz) = (*raiz) -> dir;
		else
			*raiz = (*raiz) -> esq;
			
		free(aux);	
		
	}else{
	
		no *aux = NULL;
		aux
		(*raiz)->valor = aux->valor;
		removerArv(&(*raiz)->dir, (*raiz)->chave);
		
	}
}
