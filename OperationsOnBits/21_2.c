/*An animal could be a canine (dog, wolf, fox, etc.), a feline (cat, lynx, 
jaguar, etc.), a cetacean (whale, narwhal, etc.) or a marsupial (koala, 
wombat, etc.). The information whether a particular animal is 
canine, feline, cetacean, or marsupial is stored in bit number 0, 1, 2 
and 3, respectively of an integer variable type. Bit number 4 of the 
variable type stores the information about whether the animal is 
Carnivore or Herbivore. 
For the following animal, complete the program to determine 
whether the animal is an herbivore or a carnivore. Also determine 
whether the animal is a canine, feline, cetacean or a marsupial. 
struct animal 
{ 
    char  name[ 30 ] ;  int  type ; 
} 
struct animal  a = { "OCELOT", 18 } ;

*/


# include <stdio.h> 
int main( ) 
{ 
    struct animal 
    { 
        char name[ 30 ] ;  
        int type ; 
    } ; 
    static struct animal a = { "OCELOT", 18 } ;  
    int ani ; 
    printf ( "\nAnimal is:" ) ;  
    ani = a.type ; 
    if ( ( ani & 1 ) == 1 ) /* bit 0 */  
        printf ( "Canine\n" ) ; 
    if ( ( ani & 2 ) == 2 ) /* bit 1 */  
        printf ( "Feline\n" ) ; 
    if ( ( ani & 4 ) == 4 ) /* bit 2 */  
        printf ( "Catacean\n" ) ; 
    if ( ( ani & 8 ) == 8 ) /* bit 3 */  
        printf ( "Marsupial\n" ) ; 
    printf ( "Animal is also a " ) ; 
    if ( ( ani & 16 ) == 16 ) /* bit 4 */  
        printf ( "Carnivore\n" ) ; 
    else 
        printf ( "Herbivore\n" ) ;  
    return 0 ; 
} 