//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUIKit/NSObject-Protocol.h>

@class CCUIContentModuleContext, UIViewController;
@protocol CCUIContentModuleContentViewController;

@protocol CCUIContentModule <NSObject>
@property(readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;

@optional
@property(readonly, nonatomic) UIViewController *backgroundViewController;
- (void)setContentModuleContext:(CCUIContentModuleContext *)arg1;
@end
