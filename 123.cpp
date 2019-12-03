
#include<stdio.h>
#include<math.h>
int main()
{
	printf("\tBIODATA PRIBADI\n\n");
    printf("NAMA 		: ALICIA YUNIKE RIONA\n");
    printf("NPM 		: 1914370113\n");
    printf("KELAS 		: REGULER 1D\n");
    printf("PRODI 		: SISTEM KOMPUTER\n");
    printf("FAKULTAS	: SAINS & TEKNOLOGI\n");
    
    float a,b,c,D;
    double x1,x2;

    printf("masukkan nilai a=  ");
    scanf("%f",&a);
    printf("masukkan nilai b=  ");
    scanf("%f",&b);
    printf("masukkan nilai c=  ");
    scanf("%f",&c);

    D=(b*b)-(4*a*c);

    if (D<0)
    {
        printf("\nAkar-akar persamaan kuadrat imajiner\n");
    }

    else if (D>=0)
    {
        x1=(-b+(sqrt(D))/(2*a));
        x2=(-b-(sqrt(D))/(2*a));

        printf("\nAkar-akar persamaan kuadrat berbeda\n");
        printf("\nNilai x1=%.2f\n",x1);
        printf("Nilai x2=%.2f\n",x2);
    }
    else if (D==0)
    {
        x1=(-b)/(2*a);
        x2=(-b)/(2*a);

        printf("\nNilai x1=%.2f\n",x1);
        printf("Nilai x2=%.2f\n",x2);

    }
    return 0;
}


