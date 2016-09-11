#ifndef REALWAKKA_RTREE_NODE_H_
#define REALWAKKA_RTREE_NODE_H_

#include "geometry.h"

namespace geometry
{

template <unsigned int D>
class RTreeNode
{
 public:
  RTreeNode(const Rect<D> rect);
  
 private:
  Rect<D> rect_;
};

template<unsigned int D>
RTreeNode::RTreeNode(const Rect<D> rect)
    : rect_(rect)
{
  
}


}
