#include <stdio.h>

/* Bad implementation for the function, there is needed pointers 
void go_south_east(int lat, int lon)
  {
    lat = lat - 1;
    lon = lon - 1;

  }
*/

void go_south_east(int* lat, int* lon)
  {
    *lat = *lat - 1; // * variable read and update the value inside the address
    *lon = *lon + 1;
  }


int main()
  {
    int latitude = 32;
    int longitude = -64;
    // go_south_east(latitude, longitude); No pointers implemented
    go_south_east(&latitude, &longitude); // gives to the function the address of latitude and longitude variables
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
    return 0;
  }
