//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDDevice, NSDate;

@interface HMDUserPushCache : NSObject
{
    HMDDevice *_device;
    NSDate *_expirationDate;
}

@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end
