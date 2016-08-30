#ifndef GEOMETRY_RTREEIMPL_H_
#define GEOMETRY_RTREEIMPL_H_

#include "rtree.h"

namespace geometry {

template <unsigned int D>
class RTreeImpl : public RTree<D> {
public:
  RTreeImpl();
  virtual ~RTreeImpl();

 public:
  virtual void insert(const RTreeNode<D>& node) override;
  virtual std::vector<RTreeNode<D>> search(const Rect<D>& queryRect) override;

 private:
  std::vector<RTreeNode<D>> m_nodeVector;
};

}

#endif
