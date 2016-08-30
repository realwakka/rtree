#ifndef RTREE_GEOMETRY_H_
#define RTREE_GEOMETRY_H_

namespace geometry
{

template <unsigned int D>
class Point
{
public:
  Point();
  virtual ~Point(){}
  int data_[D];
};

template <unsigned int D>
class Rect
{
public:
   Rect() {}
   virtual ~Rect(){}

   Point<D> p1;
   Point<D> p2;
};

}


#endif

