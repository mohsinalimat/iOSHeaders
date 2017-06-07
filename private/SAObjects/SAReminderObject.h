//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSString, SAReminderListObject, SAReminderRecurrence, SAReminderTrigger;
@protocol SAReminderPayload;

@interface SAReminderObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(retain, nonatomic) SAReminderTrigger *trigger;
@property(retain, nonatomic) SAReminderListObject *toList;
@property(copy, nonatomic) NSString *subject;
@property(retain, nonatomic) SAReminderRecurrence *recurrence;
@property(retain, nonatomic) id <SAReminderPayload> payload;
@property(copy, nonatomic) NSArray *lists;
@property(nonatomic) _Bool important;
@property(copy, nonatomic) NSString *dueDateTimeZoneId;
@property(copy, nonatomic) NSDate *dueDate;
@property(nonatomic) _Bool completed;
@property(copy, nonatomic) NSString *alternateSubject;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

