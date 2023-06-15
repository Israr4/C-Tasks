#include<iostream>
#include<cmath>
#include<string>

struct CartesianCoordinate{
	    double xcoord, ycoord, zcoord;
	
	   CartesianCoordinate()
	   {
		    xcoord=0;
		    ycoord=0;
		    zcoord=0;
	   }
	
	   CartesianCoordinate(double x, double y, double z)
	   {
		    xcoord=x;
		    ycoord=y;
			
		    zcoord=z;
	   }
};

struct SphericalCoordinate
{
		double radius;                          
	    double phi;
	    double theta;
	    
	    SphericalCoordinate()
	    {
	    	radius=0;
	    	phi=0;
	    	theta=0;
		}
	    SphericalCoordinate(double r, double p, double t)

	    {
	    	radius=r;
	    	phi=p;
	    	theta=t;
		}
};

struct CylindricalCoordinate
{
		double radius;                          
	    double theta;
	    double zcoord;
	    
	    CylindricalCoordinate()
	    {
	    	radius=0;
	    	theta=0;
	    	zcoord=0;
		}
	    CylindricalCoordinate(double r, double t, double z)
	    {
	    	radius=r;
	    	theta=t;
	    	zcoord=z;
		}
};

        CylindricalCoordinate cartesian_to_cylindrical(CartesianCoordinate cartesian_point)  //because we cannot use structure here  without its name as a data type
        {
	        CylindricalCoordinate cylindrical_point;             //int idrees = 5;    as we not initilaize any thing to point si default constructor is installed
	        cylindrical_point.radius = sqrt(pow(cartesian_point.xcoord,2) + pow(cartesian_point.ycoord,2));
	        cylindrical_point.theta  = atan(cartesian_point.ycoord/cartesian_point.xcoord);
	        cylindrical_point.zcoord = cartesian_point.zcoord;
	        return cylindrical_point;                            //return idrees;
        }  
        void  display(CylindricalCoordinate cylindrical_point)
       {
        	std::cout<<cylindrical_point.radius<<" "<<cylindrical_point.theta<<" "<<cylindrical_point.zcoord<<'\n';
       }



       CartesianCoordinate cylindrical_to_cartesian(CylindricalCoordinate cylindrical_point)  //because we cannot use structure here  without its name as a data type
        {
	        CartesianCoordinate cartesian_point;             //int idrees = 5;    as we not initilaize any thing to point so default constructor is installed
	        cartesian_point.xcoord = cylindrical_point.radius*sin(cylindrical_point.theta);
	        cartesian_point.ycoord = cylindrical_point.radius*cos(cylindrical_point.theta);
	        cartesian_point.zcoord = cylindrical_point.zcoord;
	        return cartesian_point;                            //return idrees;
        }  

        void  display(CartesianCoordinate cartesian_point)
       {
        	std::cout<<cartesian_point.xcoord<<" "<<cartesian_point.ycoord<<" "<<cartesian_point.zcoord<<'\n';
       }  


	   SphericalCoordinate cartesian_to_spherical(CartesianCoordinate cartesian_point)
	   {
		  SphericalCoordinate spherical_point;
		  spherical_point.radius=sqrt(pow(cartesian_point.xcoord,2)+pow(cartesian_point.ycoord,2)+pow(cartesian_point.zcoord,2));
		  spherical_point.phi=atan(cartesian_point.ycoord/cartesian_point.xcoord);
		  spherical_point.theta=acos(cartesian_point.zcoord/spherical_point.radius);
		  return spherical_point;
	   }
	   void  display(SphericalCoordinate spherical_point)
       {
        	std::cout<<spherical_point.radius<<" "<<spherical_point.phi<<" "<<spherical_point.theta<<'\n';
       }


	   CartesianCoordinate spherical_to_cartesian(SphericalCoordinate spherical_point) 
	   {
		   CartesianCoordinate cartesian_point;
		   cartesian_point.xcoord=spherical_point.radius*sin(spherical_point.phi)*cos(spherical_point.theta);
		   cartesian_point.ycoord=spherical_point.radius*sin(spherical_point.phi)*sin(spherical_point.theta);
		   cartesian_point.zcoord=spherical_point.radius*cos(spherical_point.phi);
		   return cartesian_point;
	   } 
	   
    //     void  display(CartesianCoordinate cartesian_point)
    //    {
    //     	std::cout<<cartesian_point.xcoord<<" "<<cartesian_point.ycoord<<" "<<cartesian_point.zcoord<<'\n';
    //    } 




	   SphericalCoordinate cylindrical_to_spherical(CylindricalCoordinate cylindrical_point)
	   {
		  SphericalCoordinate spherical_point;
		  spherical_point.radius=sqrt(pow(cylindrical_point.radius,2)+pow(cylindrical_point.zcoord,2));
		  spherical_point.phi=acos(cylindrical_point.zcoord/spherical_point.radius);
		  spherical_point.theta=cylindrical_point.theta;
		  return spherical_point;
	   }
	//    void  display(SphericalCoordinate spherical_point)
    //    {
    //     	std::cout<<spherical_point.radius<<" "<<spherical_point.phi<<" "<<spherical_point.theta<<'\n';
    //    } 

      
	   CylindricalCoordinate spherical_to_cylindrical(SphericalCoordinate spherical_point)  //because we cannot use structure here  without its name as a data type
        {
	        CylindricalCoordinate cylindrical_point;             //int idrees = 5;    as we not initilaize any thing to point so default constructor is installed
	        cylindrical_point.radius = spherical_point.radius*sin(spherical_point.phi);
	        cylindrical_point.theta  = spherical_point.theta;
	        cylindrical_point.zcoord = spherical_point.radius*cos(spherical_point.phi);
	        return cylindrical_point;                            //return idrees;
        }  
    //     void  display(CylindricalCoordinate cylindrical_point)
    //    {
    //     	std::cout<<cylindrical_point.radius<<" "<<cylindrical_point.theta<<" "<<cylindrical_point.zcoord<<'\n';
    //    }



