//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSObject-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@protocol BBBehaviorOverrideEffectivePeriod <NSCopying, NSSecureCoding, NSObject>
- (NSUUID *)identifier;
- (NSDate *)nextTransitionDateAfterDate:(NSDate *)arg1;
- (_Bool)containsDate:(NSDate *)arg1;
@end

