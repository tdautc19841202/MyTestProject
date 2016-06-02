//
//  MWRouteDemo.h
//  AutoNavi
//
//  Created by gaozhimin on 14-5-7.
//
//

#import <Foundation/Foundation.h>

/*!
  @brief 模拟导航模块
  */

@interface MWRouteDemo : NSObject

/**
 **********************************************************************
 \brief 启动模拟导航
 \details 启动模拟导航。
 **********************************************************************/
+(GSTATUS)StartDemo;

/**
 **********************************************************************
 \brief 暂停模拟导航
 \details 暂停模拟导航。
 **********************************************************************/
+(GSTATUS)PauseDemo;

/**
 **********************************************************************
 \brief 继续模拟导航
 \details 继续模拟导航。
 **********************************************************************/
+(GSTATUS)ContinueDemo;

/**
 **********************************************************************
 \brief 停止模拟导航
 \details 停止模拟导航。
 **********************************************************************/
+(GSTATUS)StopDemo;
@end