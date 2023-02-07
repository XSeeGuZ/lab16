#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b,int *c,int *d){
	int p[4]={50,100,500,1000};
	for (int i=3; i>=0; --i)
	{
		
		int j = rand()%4;
		int temp = p[i];
		p[i] = p[j];
		p[j] = temp;
	}
	*a=p[0];
	*b=p[1];
	*c=p[2];
	*d=p[3];

}
