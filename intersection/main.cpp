#include <QtCore/QCoreApplication>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>


typedef CGAL::Exact_predicates_inexact_constructions_kernel Kernel;
typedef Kernel::Point_2 Point2;
typedef Kernel::Triangle_2 Triangle2;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Point2 p1(-5.2, 1.7);
    Point2 p2(-7.1, -6.3);
    Point2 p3(-0.9, -2.3);

    Point2 p4(-2.8, -4.5);
    Point2 p5(4.5, -1.1);
    Point2 p6(2.4, -7.6);

  

    Triangle2 t1(p1, p2, p3);
    Triangle2 t2(p4, p5, p6);


    if (!CGAL::do_intersect(t1, t2)) {

        std::cout << "The triangles do not intersect";
    }
    else {

        std::cout << "The triangles do intersect!" ;
    }

    return a.exec();
}
