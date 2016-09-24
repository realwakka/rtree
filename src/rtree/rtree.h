#ifndef REALWAKKA_RTREE_H_
#define REALWAKKA_RTREE_H_

#include "geometry/geometry.h"
#include <vector>

namespace geometry
{

template <unsigned int D, typename DataType>
class RTree
{
 public:
  virtual void insert(const Rect<D>& rect, const DataType& data) = 0;
  virtual std::vector<RTreeLeafNode<D>> search(const Rect<D>& queryRect) = 0;
};

}

#endif
