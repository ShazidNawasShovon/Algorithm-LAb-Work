#include <stdio.h>
int main()
{
    int n1, n2, min;
    scanf("%d %d", &n1, &n2);

    min = (n1 > n2) ? n1 : n2;

    while (1) {
        if (min % n1 == 0 && min % n2 == 0)
        {
            printf("The LCM of %d and %d is %d.", n1, n2, min);
            break;
        }
        ++min;
    }
    return 0;
}

/*

Analysis:

Time complexity : O(log(min(a,b))) + O(1)
                = O(log(min(a,b)))
As an explanation we can say that ,
a relation​ ​between the gcd & lcm of two numbers is that the product of the
two numbers is equal to the product of their gcd & lcm.
As an example, consider 15 and 20:
the gcd is 5, the lcm is 60, 15 × 20 = 300 and gcd × lcm = 300
or lcm(a,b) = a* b / gcd(a,b),
So here the time complexity is O(log(min(a,b)))

*/


