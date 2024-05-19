/*Write a program to receive values of latitude ( L 1,L2) and longitude ( G 1,G2) in degrees, 
of two places on the earth and output the distance (D) between them in nautical miles. The formula for distance in nautical miles is:

D=3963 cos^ -1 ( sinL1 sinL2 +cosL1 cosL2 * cos(G2-G1))

*/

#include <stdio.h>
#include <math.h>

#define EARTH_RADIUS 3963 // in miles


int main() {
    double lat1, lon1, lat2, lon2, d;

    printf("Enter latitude (L1) of first place in degrees: ");
    scanf("%lf", &lat1);
    printf("Enter longitude (G1) of first place in degrees: ");
    scanf("%lf", &lon1);

    printf("Enter latitude (L2) of second place in degrees: ");
    scanf("%lf", &lat2);
    printf("Enter longitude (G2) of second place in degrees: ");
    scanf("%lf", &lon2);
    lat1 = lat1 * (M_PI / 180);
    lon1 = lon1 * (M_PI / 180);
    lat2 = lat2 * (M_PI / 180);
    lon2 = lon2 * (M_PI / 180);

    d = EARTH_RADIUS * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1));

    printf("Distance between the two places: %.2f nautical miles", d);

    return 0;
}
