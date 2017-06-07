//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient : FBSSystemServiceFacilityClient
{
    id <FBSOrientationObserverClientDelegate> _delegate;
    unsigned int _interest;
}

- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)configureConnectMessage:(id)arg1;
- (void)registerOrientationInterest:(unsigned int)arg1;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2;

@end

