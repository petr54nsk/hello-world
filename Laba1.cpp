#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
int main(){
int d,s=0;
int k=true;
	printf ("¬ведите срок вклада: ");
	std::cin>>d;
		system("cls");
		if (d>365 or d<0){
			while (k==true){
				system("cls");
			printf ("¬ведите срок вклада не более 365 дней: ");
			 	std::cin>>d;
					if (d<=365 && d>0){
						break;
					}
				}
			}
	printf ("¬ведите сумму вклада: ");
	std::cin>>s;
		system("cls");
		if (s<1000){
			while (k==true){
				system("cls");
			printf ("¬ведите сумму не менее 1000р.: ");
			 	std::cin>>s;
					if (s>=1000){
						break;
					}
				}
			}
			if(d)
system("pause");
return 0;
}
