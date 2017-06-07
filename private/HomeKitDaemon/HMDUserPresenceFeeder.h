//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDHomePresenceBase.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class FMFSession, HMDUserPresenceStatusUpdate, HMFTimer, NSString;

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMFLogging>
{
    unsigned long long _presenceRegionStatus;
    HMDUserPresenceStatusUpdate *_lastStatusUpdate;
    HMFTimer *_statusUpdateRetryTimer;
    FMFSession *_fmfSession;
}

+ (id)logCategory;
@property(readonly, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
@property(retain, nonatomic) HMFTimer *statusUpdateRetryTimer; // @synthesize statusUpdateRetryTimer=_statusUpdateRetryTimer;
@property(retain, nonatomic) HMDUserPresenceStatusUpdate *lastStatusUpdate; // @synthesize lastStatusUpdate=_lastStatusUpdate;
@property(nonatomic) unsigned long long presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
- (void).cxx_destruct;
- (void)notifyDidLeaveHomeRegion;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHome;
- (void)notifyDidArriveHome;
- (void)sendPresenceReport;
- (void)presenceAuthStatusChangedForUser:(id)arg1 presenceAuthStatus:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
