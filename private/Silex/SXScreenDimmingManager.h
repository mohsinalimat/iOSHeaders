//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoPlaybackObserver-Protocol.h>

@class NSString;

@interface SXScreenDimmingManager : NSObject <SXVideoPlaybackObserver>
{
    unsigned long long _interest;
}

@property(nonatomic) unsigned long long interest; // @synthesize interest=_interest;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinatorPausedPlayback:(id)arg1;
- (void)playbackCoordinatorResumedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)disableScreenDimming;
- (void)enableScreenDimming;
- (void)decreaseInterest;
- (void)increaseInterest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
