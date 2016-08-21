#ifndef REALWAKKA_RTREE_H_
#define REALWAKKA_RTREE_H_

#include <vector>

namespace geometry
{

class Point
{
  public:
   Point(int dim) : data_(new int[dim]){}
   virtual ~Point(){}
   int* data_;
}

class Rect
{
  public:
   Rect(int dim) : p1(dim), p2(dim) {}
   virtual Rect(){}

   Point p1;
   Point p2;
};

class RTreeNode
{
  public:
   RTreeNode();
   ~RTreeNode();

};

class RTree
{
  public:
   virtual void insert(const RTreeNode& node) = 0;
   virtual std::vector<RTreeNode> search(const Rect& queryRect) = 0;
};

class RTreeImpl : public RTree
{
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
