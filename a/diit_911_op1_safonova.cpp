#define _USE_MATH_DEFINES// allow math constants
#include <math.h>// M_PI
#include <iostream>

int main() {
    // 1. Ask cylinder's radius
    std::cout << "input cylinder's radius: ";

    double cylinder_radius;
    std::cin >> cylinder_radius;

    // 2. Ask cylinder's height
    std::cout << "input cylinder's height: ";

    double cylinder_height;
    std::cin >> cylinder_height;
    
    // 3. Ask cone's radius
    std::cout << "input cone's radius: "; 

    double cone_radius;
    std::cin >> cone_radius;
    
    // 4. Ask cone's height
    std::cout << "input cone's height: ";

    double cone_height;
    std::cin >> cone_height;

    // 5. Calculate cylinder's area
    double cylinder_side_area = 2 * M_PI * cylinder_height * cylinder_radius;
    double cylinder_base_area = M_PI * cylinder_radius * cylinder_radius;
    double cylinder_area = cylinder_side_area + 2 * cylinder_base_area;

    // 6. Calculate cone's area
    double cone_slant_height = std::sqrt(cone_height * cone_height + cone_radius * cone_radius);
    double cone_side_area = M_PI * cone_radius * cone_slant_height;
    double cone_base_area = M_PI * cone_radius * cone_radius;
    double cone_area = cone_base_area + cone_side_area;

    // 7. Calculate whole area
    double whole_area = cylinder_area + cone_area;
    if (cone_radius > cylinder_radius) {
        whole_area -= 2 * cylinder_base_area;
    } else {
        whole_area -= 2 * cone_base_area;
    }

    // 8. Calculate cylinder's volume
    double cylinder_volume = cylinder_base_area * cylinder_height;

    // 9. Calculate cone's volume
    double cone_volume = cone_base_area * cone_height;

    // 10. Calculate whole volume
    double whole_volume = cone_volume + cylinder_volume;

    // 11. Output the result
    std::cout << "whole_area = " << whole_area << std::endl;
    std::cout << "whole volume = " << whole_volume << std::endl;
}