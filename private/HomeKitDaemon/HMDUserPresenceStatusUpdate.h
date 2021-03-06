//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDUserPresenceRegion, HMUserPresenceAuthorization;

@interface HMDUserPresenceStatusUpdate : HMFObject
{
    HMDDevice *_device;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    HMDUserPresenceRegion *_presenceRegionStatus;
}

@property(readonly, nonatomic) HMDUserPresenceRegion *presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
@property(readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithDevice:(id)arg1 presenceAuthStatus:(id)arg2 presenceRegionStatus:(id)arg3;

@end

