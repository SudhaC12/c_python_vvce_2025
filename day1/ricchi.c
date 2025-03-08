#include <stdio.h>

int main() {
    int num_interior_walls, num_exterior_walls;
    float surface_area, total_cost = 0;
    float m = 18;
    float n = 12;
    printf("Enter the number of Interior walls: ");
    scanf("%d", &num_interior_walls);
    printf("Enter the number of Exterior walls: ");
    scanf("%d", &num_exterior_walls);
    if (num_interior_walls > 0) 
    {
        for (int i = 1; i <= num_interior_walls; i++) 
        {
            printf("Enter Surface Area of Interior Wall %d in square feet: ", i);
            scanf("%f", &surface_area);
            total_cost += surface_area *m;
        }
    }
    if (num_exterior_walls > 0)
     {
        for (int j = 1; j <= num_exterior_walls; j++)
         {
            printf("Enter Surface Area of Exterior Wall %d in square feet: ", j);
            scanf("%f", &surface_area);
            total_cost += surface_area *n;
        }
    }

    printf("Total Cost:%f", total_cost);

    return 0;
}