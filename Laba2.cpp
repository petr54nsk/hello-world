#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
int main(){
int d,p,s;
int k=true;
	printf ("������� ���� ������: ");
	std::cin>>d;
		system("cls");
		if (d>365 or d<0){
			while (k==true){
				system("cls");
			printf ("������� ���� ������ �� ����� 365 ����: ");
			 	std::cin>>d;
					if (d<=365 && d>0){
						break;
					}
				}
			}
	printf ("������� ����� ������: ");
	std::cin>>s;
		system("cls");
		if (s<10000){
			while (k==true){
				system("cls");
			printf ("������� ����� �� ����� 10000�.: ");
			 	std::cin>>s;
					if (s>=10000){
						break;
					}
				}
			}
			system("cls");
		if (s<100000){
			if(d>=0 && d<=30){
				p=s-s*0.1;
				printf ("����� �������� ������: %d �. \n",p);
			}
			
			if(d>=31 && d<=120){
				p=s+s*0.02;
				printf ("����� �������� ������: %d �. \n",p);
			}
			
			if(d>=121 && d<=240){
				p=s+s*0.06;
				printf ("����� �������� ������: %d �. \n",p);
			}
			
			if(d>=241 && d<=365){
				p=s+s*0.12;
				printf ("����� �������� ������: %d �. \n",p);
			}
		}
				else {
					if(d>=0 && d<=30){
					p=s-s*0.1;
					printf ("����� �������� ������: %d �. \n",p);
				}
				
				if(d>=31 && d<=120){
					p=s+s*0.03;
					printf ("����� �������� ������: %d �. \n",p);
				}
				
				if(d>=121 && d<=240){
					p=s+s*0.08;
					printf ("����� �������� ������: %d �. \n",p);
				}
				
				if(d>=241 && d<=365){
					p=s+s*0.15;
					printf ("����� �������� ������: %d �. \n",p);
				}
					}
system("pause");
return 0;
}
