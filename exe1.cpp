#include<iostream>
using namespace std;
class MyClass{                 //d�finir la classe MyClass
	
        string nom;            //initialiser un variable
        public:
		 
		MyClass();            //declarer un constructeur par d�faut
	
	    
	    ~MyClass();          //declarer un destrecteur d�finit 
	  	 
};
MyClass::MyClass(){          //on d�finit le constructeur en dehors de la classe
	cout<<"entrer un nom"<<endl;
	cin>>nom;
	cout<<"bonjour\t"<<nom<<endl; 
}
MyClass::~MyClass(){          //on d�finit le destructeur en dehors de la classe
	
	cout<<"au revoir "<<nom<<endl;
	 
}
int main(){

	MyClass c;            //la cr�ation d'un objet de la classe
	
	
	return 0;
}
