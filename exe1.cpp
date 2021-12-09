#include<iostream>
using namespace std;
class MyClass{                 //définir la classe MyClass
	
        string nom;            //initialiser un variable
        public:
		 
		MyClass();            //declarer un constructeur par défaut
	
	    
	    ~MyClass();          //declarer un destrecteur définit 
	  	 
};
MyClass::MyClass(){          //on définit le constructeur en dehors de la classe
	cout<<"entrer un nom"<<endl;
	cin>>nom;
	cout<<"bonjour\t"<<nom<<endl; 
}
MyClass::~MyClass(){          //on définit le destructeur en dehors de la classe
	
	cout<<"au revoir "<<nom<<endl;
	 
}
int main(){

	MyClass c;            //la création d'un objet de la classe
	
	
	return 0;
}
