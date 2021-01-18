#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//comienza el programa
int main(int argc, char** argv)
{
	char cadena[100];
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i2=0,j=0,k=0,l=0,m=0,n=0,n2=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;

	printf("introduzca la frase: \n");
	gets(cadena);
	
	int i=0;
	while(cadena[i] != '\0')
	{
		if(cadena[i]=='a'){
			a++;
                }
		if(cadena[i]=='b'){
			b++;
                }
		if(cadena[i]=='c'){
			c++;
                }
		if(cadena[i]=='d'){
			d++;
                }
		if(cadena[i]=='e'){
			e++;
                }
		if(cadena[i]=='f'){
			f++;
                }
		if(cadena[i]=='g'){
			g++;
                }
		if(cadena[i]=='h'){
			h++;
                }
		if(cadena[i]=='i'){
			i2++;
                }
		if(cadena[i]=='j'){
			j++;
                }
		if(cadena[i]=='k'){
			k++;
                }
		if(cadena[i]=='l'){
			l++;
                }
		if(cadena[i]=='m'){
			m++;
                }
		if(cadena[i]=='n'){
			n++;
                }
		if(cadena[i]=='ñ'){
			n2++;
                }
		if(cadena[i]=='o'){
			o++;
                }
		if(cadena[i]=='p'){
			p++;
                }
		if(cadena[i]=='q'){
			q++;
                }
		if(cadena[i]=='r'){
			r++;
                }
		if(cadena[i]=='s'){
			s++;
                }
		if(cadena[i]=='t'){
			t++;
                }
		if(cadena[i]=='u'){
			u++;
                }
		if(cadena[i]=='v'){
			v++;
                }
		if(cadena[i]=='w'){
			w++;
                }
		if(cadena[i]=='x'){
			x++;
                }
		if(cadena[i]=='y'){
			y++;
                }
		if(cadena[i]=='z'){
            z++;
                }
		i++;
	}
        
        printf("\n");

	if(a!=0)
		printf("Se utilizo %d veces la letra A\n",a);
	if(b!=0)
		printf("Se utilizo %d veces la letra B\n",b);
	if(c!=0)
		printf("Se utilizo %d veces la letra C\n",c);
	if(d!=0)
		printf("Se utilizo %d veces la letra D\n",d);
	if(e!=0)
		printf("Se utilizo %d veces la letra E\n",e);
	if(f!=0)
		printf("Se utilizo %d veces la letra F\n",f);
	if(g!=0)
		printf("Se utilizo %d veces la letra G\n",g);
	if(h!=0)
		printf("Se utilizo %d veces la letra H\n",h);
	if(i2 !=0)
		printf("Se utilizo %d veces la letra I\n",i2);
	if(j!=0)
		printf("Se utilizo %d veces la letra J\n",j);
	if(k!=0)
		printf("Se utilizo %d veces la letra K\n",k);
	if(l!=0)
		printf("Se utilizo %d veces la letra L\n",l);
	if(m!=0)
		printf("Se utilizo %d veces la letra M\n",m);
	if(n!=0)
		printf("Se utilizo %d veces la letra N\n",n);
	if(n2!=0)
		printf("Se utilizo %d veces la letra Ñ\n",n2);
	if(o!=0)
		printf("Se utilizo %d veces la letra O\n",o);
	if(p!=0)
		printf("Se utilizo %d veces la letra P\n",p);
	if(q!=0)
		printf("Se utilizo %d veces la letra Q\n",q);
	if(r!=0)
		printf("Se utilizo %d veces la letra R\n",r);
	if(s!=0)
		printf("Se utilizo %d veces la letra S\n",s);								
	if(t!=0)
		printf("Se utilizo %d veces la letra T\n",t);
	if(u!=0)
		printf("Se utilizo %d veces la letra U\n",u);
	if(v!=0)
		printf("Se utilizo %d veces la letra V\n",v);
	if(w!=0)
		printf("Se utilizo %d veces la letra W\n",w);
	if(x!=0)
		printf("Se utilizo %d veces la letra X\n",x);
	if(y!=0)
		printf("Se utilizo %d veces la letra Y\n",y);
	if(z!=0)
		printf("Se utilizo %d veces la letra Z\n",z);				

	return 0;	
}

