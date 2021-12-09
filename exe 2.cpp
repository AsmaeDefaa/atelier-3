#include<iostream>
using namespace std;
class shape                     //définir la classe mère shape
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
	class triangle : public shape {           //définir la classe dérivé triangle de la classe shape
		public: 
		triangle(float l,float h) :shape( l, h){}
			float area(){
		
		return (larg*haut/2);                //retourner la surface du triangle
	}
	};
		class rectangle :public shape{          //définir la classe dérivé rectangle de la classe shape
			public:
				rectangle(float l,float h):shape(l,  h){     
				}
				
					float area(){
					
				
				return (larg*haut);          //retourner la surface du triangle
			}
	   };
int main(){
	float x;                             //déclarer la largeur
	float y;
	cout<<"entrer la largeur:";        //déclarer l'hauteur
	cin>>x;
	cout<<"entrer l'hauteur':";
	cin>>y;
	triangle A(x,y);                              //créer l'objet pour la classe triangle
	rectangle B(x,y);                                  //créer l'objet pour la classe rectangle
	cout<<"la surface du triangle est  "<<A.area()<<endl;        //appeler la fonction area pour afficher la surface du triangle
	cout<<"la surface du rectangle est  "<<B.area()<<endl;       //appeler la fonction area pour afficher la surface du rectangle
	return  0;
	
}	   
