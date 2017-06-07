//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSSerialQueue;
@protocol FBUIApplicationServiceDelegate;

@interface FBUIApplicationService : NSObject
{
    FBSSerialQueue *_queue;
    id <FBUIApplicationServiceDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) id <FBUIApplicationServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_queue;
- (void)handleSuspendApplicationProcess:(id)arg1;
- (_Bool)handleApplicationProcess:(id)arg1 setNextWakeInterval:(double)arg2;
- (void)handleApplicationProcess:(id)arg1 requestBrightness:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleDeleteAllSnapshotsForApplication:(id)arg1;
- (void)handleApplication:(id)arg1 getBadgeValueWithCompletion:(CDUnknownBlockType)arg2;
- (void)handleApplication:(id)arg1 setBadgeValue:(id)arg2;
- (void)handleGetActiveInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

