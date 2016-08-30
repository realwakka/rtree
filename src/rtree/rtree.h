#ifndef REALWAKKA_RTREE_H_
#define REALWAKKA_RTREE_H_

#include "geometry.h"
#include <vector>

namespace geometry
{

template <unsigned int D>
class RTreeNode
{
public:
   RTreeNode();
   ~RTreeNode();

};

template <unsigned int D>
class RTree
{
public:
   virtual void insert(const RTreeNode<D>& node) = 0;
   virtual std::vector<RTreeNode<D>> search(const Rect<D>& queryRect) = 0;
};

}

#endif
