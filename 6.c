# include <stdio.h>
# include <math.h>
int distanceInNuticalMind();
int main(){
    
distanceInNuticalMind();
return 0;
}

int distanceInNuticalMind(){
    
    double l1 = 0;
    double l2 = 0;
    double g1 = 0;
    double g2 = 0;
    double d = 0;
    printf("Enter Latitude 1 : ");
    scanf("%d",&l1);
    printf("Enter Latitude 2 : ");
    scanf("%d",&l2);
    printf("Enter Longitude 1 : ");
    scanf("%d",&g1);
    printf("Enter Longitude 2 : ");
    scanf("%d",&g2);

    d = 3963 * acos(sin(l1)* sin(l2) + cos(l2)*cos(l2)*cos(g1-g2));
    printf("Distance in nautical miles : %.4lf",d);

    return 0;
}