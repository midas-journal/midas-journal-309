/*=========================================================================

  Program:   Image Guided Surgery Software Toolkit
  Module:    $RCSfile: igstkSceneGraphNode.cxx,v $
  Language:  C++
  Date:      $Date: 2008-12-08 23:16:19 $
  Version:   $Revision: 1.2 $

  Copyright (c) ISC  Insight Software Consortium.  All rights reserved.
  See IGSTKCopyright.txt or http://www.igstk.org/copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#include "igstkSceneGraphNode.h"
namespace igstk
{

SceneGraphNode::SceneGraphNode(void)
{  
  parentTransform = igstk::Transform::Transform();
  xC1 = 0;
  yC1 = 0;
  isCurrentTransform = false;
  isSelected = false;
  isCurrentInverseTransform = false;
}

SceneGraphNode::~SceneGraphNode(void)
{
}
}
