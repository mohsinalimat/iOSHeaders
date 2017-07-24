//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDAuthListener-Protocol.h>
#import <CoreCDPInternal/CDPDCircleListener-Protocol.h>

@class NSString;
@protocol CDPDAuthProviderInternal, CDPDCircleProxy;

@interface CDPDManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener>
{
    id <CDPDCircleProxy> _circleProxy;
    id <CDPDAuthProviderInternal> _authProvider;
}

- (void).cxx_destruct;
- (void)_sendNotification:(const char *)arg1 withValue:(unsigned long long)arg2;
- (void)reportManateeUnavailable;
- (void)reportManateeAvailable;
- (void)circleViewStatusChanged;
- (void)circleStatusChanged;
- (void)securityLevelChanged:(_Bool)arg1;
- (_Bool)isPrimaryAccountHSA2;
- (_Bool)_checkSecurityEligibility:(id *)arg1;
- (void)fetchManateeAvailabilityWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCircleProxy:(id)arg1 authProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

