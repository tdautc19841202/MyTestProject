//
//  GDBaseNavigationController.h
//
//
//
//  add by hlf for 连续push或pop 动画冲突问题 at 2014.07.19
//

#import <UIKit/UIKit.h>

@interface UINavigationController (GDSafeTransition)

@property(nonatomic, assign, getter = isTransitionInProgress) BOOL transitionInProgress;

@end

@interface GDBaseNavigationController : UINavigationController

@end
