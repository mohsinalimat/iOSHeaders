//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUQuickControlController, NSString;

@protocol HUQuickControlControllerDelegate <NSObject>
- (void)quickControlControllerDidEndPossibleWrites:(HUQuickControlController *)arg1;
- (void)quickControlControllerWillBeginPossibleWrites:(HUQuickControlController *)arg1;
- (void)quickControlController:(HUQuickControlController *)arg1 didUpdateOverrideStatusWithPrimaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
- (void)quickControlController:(HUQuickControlController *)arg1 valueDidChange:(id)arg2;
@end

