//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSDisplayMonitor.h>

@class FBSDisplayConfiguration;

@interface FBDisplayManager : FBSDisplayMonitor
{
    _Bool _mainConnected;
}

+ (id)mainDisplay;
+ (id)mainConfiguration;
+ (id)mainIdentity;
+ (id)sharedInstance;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;
- (void)postMainDisplayConnection;
- (void)dealloc;
- (id)_init;
- (void)invalidate;
- (id)init;

@end

