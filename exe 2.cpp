#include<iostream>
using namespace std;
class shape                     //d�finir la classe m�re shape
{
	protected:
	float larg;
	float haut;
	public:
		shape (float l,float h){      
			this->larg=l;
			this->haut=h;
		}
};
	class triangle : public shape {           //d�finir la classe d�riv� triangle de la classe shape
		public: 
		triangle(float l,float h) :shape( l, h){}
			float area(){
		
		return (larg*haut/2);                //retourner la surface du triangle
	}
	};
		class rectangle :public shape{          //d�finir la classe d�riv� rectangle de la classe shape
			public:
				rectangle(float l,float h):shape(l,  h){     
				}
				
					float area(){
					
				
				return (larg*haut);          //retourner la surface du triangle
			}
	   };
int main(){
	float x;                             //d�clarer la largeur
	float y;
	cout<<"entrer la largeur:";        //d�clarer l'hauteur
	cin>>x;
	cout<<"entrer l'hauteur':";
	cin>>y;
	triangle A(x,y);                              //cr�er l'objet pour la classe triangle
	rectangle B(x,y);                                  //cr�er l'objet pour la classe rectangle
	cout<<"la surface du triangle est  "<<A.area()<<endl;        //appeler la fonction area pour afficher la surface du triangle
	cout<<"la surface du rectangle est  "<<B.area()<<endl;       //appeler la fonction area pour afficher la surface du rectangle
	return  0;
	
}	   
