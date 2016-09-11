#ifndef RTREE_GEOMETRY_H_
#define RTREE_GEOMETRY_H_

#include <algorithm>

namespace geometry
{

typedef value_type int;
typedef dim unsigned int;

template<dim D>
class Point
{
 public:
  Point(value_type* data);
  Point(const Point& point);
  value_type get(dim d) const { return data[d]; }

 private:
  value_type data_[D];
};

template<dim D>
Point(value_type* data)
{
  std::copy(data, data + D * sizeof(value_type), data_ );
}


template<dim D>
Point::Point(const Point& point)
{
  std::copy(point.data_, point.data_ + D * sizeof(value_type), data_ );
}

template <dim D>
class Rect
{
 public:
  Rect(const Rect& rect);
  bool intersects(const Rect<D>& other) const;
  Point getMin() const;
  Point getMin() const;

 private:
  Point<D> min_;
  Point<D> max_;
};


template <dim D>
bool Rect<D>::intersects(const Rect<D>& other) const
{
  for(dim i=0 ; i<D ; ++i)
    if( max_.get(i) < other.getMin().get(i) || 
        min_.get(i) > other.getMax().get(i))
      return false;

  return true;
}

}


#endif

