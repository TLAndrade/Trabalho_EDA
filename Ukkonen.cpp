#include <iostream>
#include <string>

using namespace std;

struct Node{
	
	//cada n� aponta para outros 128 n�s ( Ascii)
	Node *pchildreen[128];
	
	// valor do n� (128 para verifica��o e inser��o de letras)
	string suffix_edge[128];
	
	//uma vez que os edges_node s�o vazios, acrescentamos o s�mbolo 'string vazia' 
	// e para o pnext, colocamos o nullptr (null para ponteiros)
	// usando 'member function', que vai modificar o pr�prio n�:
	Node (){
		for (t=1; t<128; t++){
			*pchildreen[t] = nullptr 
			suffix_edge[t] = "" //por ser mais de uma letra � necess�rio aspas duplas.
		}
	}
}; 

class Suffix_tree{
	private:
		
	void insert(palavra,id){
		if ()	
		
	}
};
