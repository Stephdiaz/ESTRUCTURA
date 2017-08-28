#pragma once
#include <iostream>
#include <string>

using namespace std;

const int N=20;
template <class tipo>

class POLINOMIO
{
	tipo polinomio[N];

public:
	POLINOMIO(void);
	friend POLINOMIO<tipo> operator +(POLINOMIO<tipo> A, POLINOMIO<tipo> B);
	friend POLINOMIO<tipo> operator -(POLINOMIO<tipo> A, POLINOMIO<tipo> B);
	friend POLINOMIO<tipo> operator *(POLINOMIO<tipo> A, POLINOMIO<tipo> B);
	friend POLINOMIO<tipo> operator /(POLINOMIO<tipo> A, POLINOMIO<tipo> B);
	friend POLINOMIO<tipo> Derivar(POLINOMIO<tipo> A);
	friend POLINOMIO<tipo> Integrar(POLINOMIO<tipo> A);
	POLINOMIO<tipo> Ordenar(POLINOMIO<tipo> A);
	POLINOMIO<tipo> This();
	void This(POLINOMIO<tipo> A);
};

template <class tipo>
POLINOMIO<tipo>::POLINOMIO()
{

}

template <class tipo>
POLINOMIO<tipo> operator +(POLINOMIO<tipo> A, POLINOMIO<tipo> B)
{
	int i,j,k;
	i = 1;
	k = 1;
	j = 1;
	while(i<2*A.polinomio[0]&&(j<2*B.polinomio[0]))
		{
			if( A.polinomio[i+1] == B.polinomio[j+1])
			{
				this->polinomio[k]=A.polinomio[i]+B.polinomio[j];
				this-> polinomio[k+1]=A.polinomio[i+1];
				i = i+2; j = j+2; k = k+2;
			}

			else 
				{	
					if( A.polinomio[i+1] < B.polinomio[j+1])
					{
						this->polinomio[k]=A.polinomio[i];
						this-> polinomio[k+1]=A.polinomio[i+1];
						i = i+2; 
						k = k+2;
					}

				if( this->polinomio[i+1] > B.polinomio[j+1])
				{
					this->polinomio[k]=B.polinomio[j];
					this-> polinomio[k+1]=B.polinomio[i+1];
					j = j+2; 
					k = k+2;
				}

			}
	}


	while(i<A.polinomio[0])
		{	
			this->polinomio[k]+B.polinomio[i];
			this->polinomio[k+1]=B.polinomio[j+1];
			i = i+2;
			k = k+2;
		}
	while(i<B.polinomio[0])
		{	
			this->polinomio[K]+B.polinomio[j];
			this->polinomio[k+1]=B.polinomio[j+1];
			j = j+2;
			k = k+2;
		}
	this->polinomio[0] = k;
	return *this;

	
}

template <class tipo>
POLINOMIO<tipo> operator-(POLINOMIO<tipo> A, POLINOMIO<tipo> B)
{
	int i,j,k;
	i = 1;
	k = 1;
	j = 1;
	while(i<2*A.polinomio[0]&&(j<2*B.polinomio[0]))
		{
			if( A.polinomio[i+1] == B.polinomio[j+1])
			{
				this->polinomio[k]=A.polinomio[i]-B.polinomio[j];
				this-> polinomio[k+1]=A.polinomio[i+1];
				i = i+2; j = j+2; k = k+2;
			}

			else 
				{	
					if( A.polinomio[i+1] < B.polinomio[j+1])
					{
						this->polinomio[k]=A.polinomio[i];
						this-> polinomio[k+1]=A.polinomio[i+1];
						i = i+2; 
						k = k+2;
					}

				if( this->polinomio[i+1] > B.polinomio[j+1])
				{
					this->polinomio[k]=B.polinomio[j];
					this-> polinomio[k+1]=B.polinomio[i+1];
					j = j+2; 
					k = k+2;
				}

			}
	}


	while(i<A.polinomio[0])
		{	
			this->polinomio[k]+B.polinomio[i];
			this->polinomio[k+1]=B.polinomio[j+1];
			i = i+2;
			k = k+2;
		}
	while(i<B.polinomio[0])
		{	
			this->polinomio[K]+B.polinomio[j];
			this->polinomio[k+1]=B.polinomio[j+1];
			j = j+2;
			k = k+2;
		}
	this->polinomio[0] = k/2;
	return *this;
}

template <class tipo>
POLINOMIO<tipo> operator*(POLINOMIO<tipo> A, POLINOMIO<tipo> B)
{
	int i,j,k;
	i = 1;
	POLINOMIO<tipo> C;
		while(i<2*A.polinomio[0])
		{
			j = 1;
			while (j<2*B.polinomio[0])
			{
				C.polinomio[k]=A.polinomio[i]*B.polinomio[j];
				k = k+2;
				j = j+2;
			}
			C.polinomio
			*this = C+*this;
			i = i+2;
		}

}

template <class tipo>
POLINOMIO<tipo> operator/(POLINOMIO<tipo> A, POLINOMIO<tipo> B)
{

}

template <class tipo>
POLINOMIO<tipo> Derivar(POLINOMIO<tipo> A)
{

}

template <class tipo>
POLINOMIO<tipo> Integrar(POLINOMIO<tipo> A)
{

}