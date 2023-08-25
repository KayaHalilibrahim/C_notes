#include <stdio.h>
#include <stdlib.h>


struct competitorType{

char name[10],surnmae[10];
float point[10],performance;

};


float calculatePoint(struct competitorType pat)
{
    int i;
    float result=0;
    float max=0.0;
    float min=6.0;
    for(i=0;i<10;i++)
    {
        if(pat.point[i]>max)
        {
            max=pat.point[i];
        }
        if(pat.point[i]<min)
        {
            min=pat.point[i];
        }

        result+=pat.point[i];
    }

    result=(result-max-min)/8;
    return(result);
}



int main()
{

    int i;
    struct competitorType skater;

    printf("Name of competitor:\n");
    scanf("%s",&skater.name);

    printf("Soyadi\n");
    scanf("%s",&skater.surname);

    printf("Referee score\n");

    for(i=0;i<10;i++)
    {
        scanf("%f",&skater.point[i]);
    }

    skater.performance=calculatePoint(skater);

    printf("Performance of skater= %f",skater.performance);
    return 0;
}


