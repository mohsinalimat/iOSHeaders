//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNotificationSettingsPayload : MCPayload
{
    NSArray *_notificationSettings;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSArray *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)validatedNotificationSettings:(id)arg1 outError:(id *)arg2;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

