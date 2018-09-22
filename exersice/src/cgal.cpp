/*
 * cgal.cpp
 *
 *  Created on: Sep 1, 2018
 *      Author: ujjval
 */
#include <iostream>
#include <CGAL/Simple_cartesian.h>
#include <CGAL/Timer.h>
#include <math.h>
#include <stdio.h>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/ch_graham_andrew.h>
#include <CGAL/Polygon_2.h>
#include <list>
#include "Polygon.h"

typedef CGAL::Simple_cartesian<double> Kernel;
typedef Kernel::Point_2 Point_2;
typedef Kernel::Segment_2 Segment_2;
typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
//typedef K::Point_2 Point_2;
typedef CGAL::Point_2<K> Point;
typedef CGAL::Polygon_2<K> Polygon_2;
typedef Polygon_2::Vertex_iterator VertexIterator;
typedef Polygon_2::Edge_const_iterator EdgeIterator;


void precision()
{
	std::cout<< "Minimum float value possible \n"<<std::numeric_limits<float>::min() << '\t';
	std::cout<< "\nMaximum float value possible \n"<< std::numeric_limits<float>::max() << '\t';
	float a= 5.6;
	std::cout<<"\nDefault \n"<<std::setprecision(30)<<a;
	float pi= std::acos(-1.F);
	std::cout<<"\nDefault of Pi "<< pi;

}
void intersectioncheck()
{
	Point_2 p(1,1), q(5.5,5.5), r(2,5.6);
		std::cout<<"\n P Q and R \n";

		if ((p.y()<r.y()) && (r.y()<q.y()))
		{
			std::cout<<"\n It will intersect \n";
		}
		else
		{
			std::cout<<"\nIt will not intersect \n";
		}
}
void fmas()
{
	double expr_result = 0.1 * 10 - 1;
	double fma_result = fma(0.1, 10, -1);

	std::cout<<"\n (0.1*10-1) expr_result \n"<<expr_result;
	std::cout<<"\n (Fused multiply add)fma_result \n"<<fma_result;
}

void absvalue()
{
	CGAL::Timer Time;
	double a[5]={15.10,32.15,-5.0,-78.69,91.07},result[5];
	Time.reset();
	Time.start();

	for (int n=0 ; n<5 ; ++n )
	{
		result[n]={std::abs(a[n])};
		std::cout<<"\n Result"<<result[n];
	}
	Time.stop();
	double t = Time.time();
	std::cout<<"\nTotal time taken"<<t;
}
void convexhull()
{
	  CGAL::set_ascii_mode(std::cin);
	  CGAL::set_ascii_mode(std::cout);
	  std::istream_iterator< Point_2 >  in_start( std::cin );
	  std::istream_iterator< Point_2 >  in_end;
	  std::ostream_iterator< Point_2 >  out( std::cout, "\n" );
	  CGAL::ch_graham_andrew( in_start, in_end, out );
}

int main()
{
	intersectioncheck();
	precision();
	fmas();
	absvalue();
	convexhull();
	Polygon P;
}



