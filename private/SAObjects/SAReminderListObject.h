//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SAReminderRecurrence, SAReminderTrigger;

@interface SAReminderListObject : SADomainObject
{
}

+ (id)listObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)listObject;
@property(copy, nonatomic) NSNumber *totalNumOfReminders;
@property(copy, nonatomic) NSArray *remindersToCreate;
@property(copy, nonatomic) NSArray *reminders;
@property(retain, nonatomic) SAReminderTrigger *reminderTrigger;
@property(retain, nonatomic) SAReminderRecurrence *recurrence;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *accountName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

