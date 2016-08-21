#include "RTree.h"

RTreeImpl::RTreeImpl()
{

}

RTreeImpl::~RTreeImpl()
{

}

RTreeImpl::insert(const RTreeNode& node)
{
  m_nodeVector.push_back(node);
}

std::vector<RTreeNode> RTreeImpl::search(const Rect& rect)
{

  std::vector<RTreeNode> result;
  for( const auto& node : m_nodeVector )
  {
    if(node.intersects(rect))
      result.emplace_back(node);
  }

  return result;
}
