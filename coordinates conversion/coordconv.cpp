#include<iostream>
#include<cmath>
#include "coordconv.h"
int main()
{
    //    CartesianCoordinate cartesian_point(3.2, 4.6, 5.7);   //passing values in constructor
    //    CylindricalCoordinate abc = cartesian_to_cylindrical(cartesian_point);  //passing values of cartesian to cylindrical coordinate
    //    display(abc);

          CylindricalCoordinate cylindrical_point(3.2, 4.6, 5.7);   //passing values in constructor
          CartesianCoordinate abc = cylindrical_to_cartesian(cylindrical_point);  //passing values of cartesian to cylindrical coordinate
          display(abc);

	//    CartesianCoordinate cartesian_point(3.2, 4.6, 5.7);   //passing values in constructor
    //    SphericalCoordinate abc = cartesian_to_spherical(cartesian_point);  //passing values of cartesian to cylindrical coordinate
    //    display(abc);


	//    SphericalCoordinate spherical_point(3.2, 4.6, 5.7);  //is ka lia constructor ma values pass karana zarori ha 
	//    CartesianCoordinate abc=spherical_to_cartesian(spherical_point);
	//    display(abc);


    //    CylindricalCoordinate cylindrical_point(3.2, 4.6, 5.7);   //passing values in constructor
    //    SphericalCoordinate abc = cylindrical_to_spherical(cylindrical_point);  //passing values of cartesian to cylindrical coordinate
	//    display(abc);


        //   SphericalCoordinate spherical_point(3.2, 4.6, 5.7);
	    //   CylindricalCoordinate abc=spherical_to_cylindrical(spherical_point);
	    //   display(abc);
        // //   display(abc);
}