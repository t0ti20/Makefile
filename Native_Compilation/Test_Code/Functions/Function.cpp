/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./Function.cpp
 *  Date: December 30, 2023
 *  Description: This Is Default Function File For CPP Generator
 *  Class Name: Function
 *  (C) 2023 "@t0ti20". All rights reserved.
*******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "Function.hpp"
#include <iostream>
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Function
{
     void Function::Print()
     {
          for(size_t Iterator{static_cast<size_t>(Counter)};Iterator>0;--Iterator)
          {
               std::cout<<"Hello World !"<<std::endl;
          }
     }
     Function::Function():Counter{10}
     {

     }
     Function::~Function()
     {

     }
}
/********************************************************************
 *  END OF FILE:  Function.cpp
********************************************************************/
