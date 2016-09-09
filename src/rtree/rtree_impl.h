#ifndef GEOMETRY_RTREEIMPL_H_
#define GEOMETRY_RTREEIMPL_H_

#include "rtree.h"

namespace geometry {



template <unsigned int D>
class RTreeInternalNode : public RTreeNode<D>
{
  public:
    
  private:
    class ChildList
    {
      public:
        
      private:
        std::vector<RTreeNode<D>&> childs_;
    };

    ChildList child_list_;

};


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

template <unsigned int D>
RTreeImpl<D>::RTreeImpl()
{
    
}

template <unsigned int D>
RTreeImpl<D>::~RTreeImpl()
{
    
}

template <unsigned int D>
void RTreeImpl<D>::insert(const RTreeNode<D>& node)
{

}

template <unsigned int D>
std::vector<RTreeNode<D>> RTreeImpl<D>::search(const Rect<D>& queryRect)
{
    
}


}

#endif
