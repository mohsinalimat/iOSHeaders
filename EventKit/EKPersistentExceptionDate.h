//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentCalendarItem, NSDate;

@interface EKPersistentExceptionDate : EKPersistentObject
{
}

+ (id)relations;
+ (id)exceptionDateWithDate:(id)arg1;
- (id)description;
@property(retain, nonatomic) EKPersistentCalendarItem *owner;
- (int)entityType;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSDate *date; // @dynamic date;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExceptionDate:(id)arg1;

@end
