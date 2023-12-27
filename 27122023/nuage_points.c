#include <stdio.h>

typedef struct
{
    double x;
    double y;
} Point;

typedef struct
{
    double min_x;
    double min_y;
    double max_x;
    double max_y;
} Square;

Point mid_point_square(Square square)
{
    Point mid_point;
    mid_point.x = (square.min_x + square.max_x) / 2.0;
    mid_point.y = (square.min_y + square.max_y) / 2.0;
    return mid_point;
}

void accumulation_points(Point cloud[], int num_points, Square square, double elem_size, int min_points)
{
    int points_in_square = 0;
    for (int i = 0; i < num_points; i++)
    {
        if (cloud[i].x >= square.min_x && cloud[i].x <= square.max_x && cloud[i].y >= square.min_y && cloud[i].y <= square.max_y)
        {
            points_in_square++;
        }
    }

    if (square.max_x - square.min_x < elem_size || points_in_square >= min_points)
    {
        Point mid_point = mid_point_square(square);
        printf("Accumulation Point: (%.2lf, %.2lf)\n", mid_point.x, mid_point.y);
    }
    else
    {
        double mid_x = (square.min_x + square.max_x) / 2.0;
        double mid_y = (square.min_y + square.max_y) / 2.0;

        Square square1 = {square.min_x, square.min_y, mid_x, mid_y};
        Square square2 = {mid_x, square.min_y, square.max_x, mid_y};
        Square square3 = {square.min_x, mid_y, mid_x, square.max_y};
        Square square4 = {mid_x, mid_y, square.max_x, square.max_y};

        accumulation_points(cloud, num_points, square1, elem_size, min_points);
        accumulation_points(cloud, num_points, square2, elem_size, min_points);
        accumulation_points(cloud, num_points, square3, elem_size, min_points);
        accumulation_points(cloud, num_points, square4, elem_size, min_points);
    }
}

int main()
{
    int num_points;

    printf("Enter the number of points: ");
    scanf("%d", &num_points);

    Point cloud[num_points];
    for (int i = 0; i < num_points; i++)
    {
        printf("Enter x coordinate for point %d: ", i + 1);
        scanf("%lf", &cloud[i].x);
        printf("Enter y coordinate for point %d: ", i + 1);
        scanf("%lf", &cloud[i].y);
    }

    Square search_space;
    double elem_size;
    int min_points;

    printf("Enter min_x for search space: ");
    scanf("%lf", &search_space.min_x);
    printf("Enter min_y for search space: ");
    scanf("%lf", &search_space.min_y);
    printf("Enter max_x for search space: ");
    scanf("%lf", &search_space.max_x);
    printf("Enter max_y for search space: ");
    scanf("%lf", &search_space.max_y);
    printf("Enter element size: ");
    scanf("%lf", &elem_size);
    printf("Enter minimum points: ");
    scanf("%d", &min_points);

    accumulation_points(cloud, num_points, search_space, elem_size, min_points);

    return 0;
}
