#include <stdio.h>

int main(int argc, char const *argv[])
{
   
    float decimalAggregate,percentAggregate,aggregate, math, science, english, IT, SS;

    
    printf("Please enter marks in Math, Science, English, IT, Social Studies respectively out of 100 marks:");

    scanf("%f%f%f%f%f", &math,&science,&english,&IT,&SS);

    aggregate= math + science + IT + SS + english;
    decimalAggregate= aggregate/500;
    percentAggregate= decimalAggregate*100;
    printf("Aggregate Marks:%f out of 500\n", aggregate);
    printf("Percent Aggregate Marks:%f", decimalAggregate);
    



    return 0;
}
