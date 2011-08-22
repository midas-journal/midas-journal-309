/*=========================================================================

  Program:   Image Guided Surgery Software Toolkit
  Module:    $RCSfile: igstkSceneGraphNode.h,v $
  Language:  C++
  Date:      $Date: 2008-12-08 23:17:09 $
  Version:   $Revision: 1.2 $

  Copyright (c) ISC  Insight Software Consortium.  All rights reserved.
  See IGSTKCopyright.txt or http://www.igstk.org/copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#ifndef __igstkSceneGraphNode_h
#define __igstkSceneGraphNode_h

#include <iostream>
#include "igstkTransform.h"
#include "igstkCoordinateSystem.h"

namespace igstk 
{

/** \class SceneGraphNode
 * 
 * \brief Class to represent each of the nodes of the 
 * scene graph.
 *
 */

class SceneGraphNode
{
public:
   
  /**  Constructor.
  */
   SceneGraphNode(void);

   /**  Destrutor.
  */
  ~SceneGraphNode(void);

  /**  x coordinate of the node in FLTK window.
  */
  int xC1;

  /**  y coordinate of the node in FLTK window.
  */
  int yC1;

  /**  Flag to set if this node is in the current transform
  * being computed.
  */
  bool isCurrentTransform;

  /**  Flag to indicate if this is selected by the user.
  */
  bool isSelected;

  /**  Flag to set if this node is in the current inverse transform
  * being computed.
  */
  bool isCurrentInverseTransform;

  /**  Reference to the parent node.
  */
  SceneGraphNode* parent;

  /**  Name of the node.
  */
  char* name;

  /**  Type of the node (Spatial Object/View/
  * TrackerTool/Tracker).
  */
  char* type;

  /**  Reference to the coordinate system object 
  * represented by this node.
  */
  CoordinateSystem* coordinateSystem;

  /**  List of children.
  */
  std::list<SceneGraphNode*> children;

  /**  Reference to the transform with parent coordiante system.
  */
  Transform parentTransform;

};
}
#endif
