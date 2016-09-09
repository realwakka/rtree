#ifndef RTREE_GEOMETRY_H_
#define RTREE_GEOMETRY_H_

namespace geometry
{

template <unsigned int D>
class Point
{
public:
  int data_[D];
};

template <unsigned int D>
class Rect
{
public:
  bool intersects(const Rect<D>& other);

  Point<D> p1;
  Point<D> p2;
};

template <unsigned int D>
bool Rect<D>::intersects(const Rect<D>& other)
{
    for(unsigned int i=0 ; i<D ; ++i)
    {
        
    }
    return false;
}

}


#endif

