#ifndef REALWAKKA_RTREE_NODE_H_
#define REALWAKKA_RTREE_NODE_H_

#include "geometry/geometry.h"

namespace geometry
{

template <unsigned int D>
class RTreeNode
{
 public:
  RTreeNode(const Rect<D>& rect);
  virtual bool intersects(const Rect<D>& query) = 0;
  
 private:
  Rect<D> rect_;
};

template<unsigned int D>
RTreeNode::RTreeNode(const Rect<D> rect)
    : rect_(rect)
{
  
}

template<unsigned int D>
class RTreeInternalNode : public RTreeNode<D>
{
 public:
  
};

template<unsigned int D, typename DataType>
class RTreeDataNode : public RTreeNode<D>
{
 public:
  RTreeDataNode(const Rect<D>& rect, DataType data);
 private:
  DataType data_;
};

RTreeDataNode::RTreeDataNode(const Rect<D>& rect, DataType data)
    : RTreeNode(rect),
      data_(data)
{}

}
