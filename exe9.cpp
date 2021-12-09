#include<iostream>
using namespace std;
class Test{                   //définir la classe Test
	public:
		static int count;     //déclarer un variable static

		void call(){
			cout<<"appeler"<<endl;
			count++;          //pour compter le nombre de fois le appeler
		}
};
int Test::count =0;            //initialiser le variable count
int main(){
	Test t;                   //déclarer l'objet de la classe Test>
	t.call();
	t.call();
	t.call();
	t.call();
	t.call();
	cout<<"le nombre de la fonction call dans le programme est:"<<t.count<<endl;
	return 0;
}
