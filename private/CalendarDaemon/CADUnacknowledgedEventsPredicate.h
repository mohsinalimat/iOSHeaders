//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADPredicate.h>

#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@interface CADUnacknowledgedEventsPredicate : CADPredicate <NSSecureCoding>
{
}

+ (id)predicate;
+ (_Bool)supportsSecureCoding;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end

