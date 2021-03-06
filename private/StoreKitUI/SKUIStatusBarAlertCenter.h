//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/_SKUIStatusBarAlertViewControllerDelegate-Protocol.h>

@class NSString, _SKUIClickThroughWindow, _SKUIStatusBarAlertViewController;

@interface SKUIStatusBarAlertCenter : NSObject <_SKUIStatusBarAlertViewControllerDelegate>
{
    double _duration;
    CDUnknownBlockType _actionBlock;
    _SKUIClickThroughWindow *_window;
    _SKUIStatusBarAlertViewController *_rootViewController;
}

+ (id)sharedCenter;
@property(readonly, nonatomic) _SKUIStatusBarAlertViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) _SKUIClickThroughWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)statusBarAlertViewControllerWasTapped:(id)arg1;
- (void)dismiss;
- (void)scheduleDismiss;
- (void)unscheduleDismiss;
- (void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3 actionBlock:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *message;
@property(nonatomic, getter=isVisible) _Bool visible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

