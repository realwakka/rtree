#ifndef REALWAKKA_RTREE_H_
#define REALWAKKA_RTREE_H_

#include "geometry.h"
#include <vector>

namespace geometry
{

template <unsigned int D>
class RTreeNode
{
  private:
    Rect<D> rect_;
};

template <unsigned int D, typename DataType>
class RTreeLeafNode : public RTreeNode<D>
{
  private:
    Rect<D> rect_;
}
;


template <unsigned int D, typename DataType>
class RTree
{
  public:
    virtual void insert(const Rect<D>& rect, const DataType& data) = 0;
    virtual std::vector<RTreeLeafNode<D>> search(const Rect<D>& queryRect) = 0;
};

}

#endif
