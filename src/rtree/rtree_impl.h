#ifndef GEOMETRY_RTREEIMPL_H_
#define GEOMETRY_RTREEIMPL_H_

#include "rtree.h"

namespace geometry {

class RTreeImpl : public RTree {
 public:
  RTreeImpl();
  virtual ~RTreeImpl();

 public:
  virtual void insert(const RTreeNode& node) override;
  virtual std::vector<RTreeNode> search(const Rect& queryRect) override;

 private:
  std::vector<RTreeNode> m_nodeVector;
};

}

#endif
