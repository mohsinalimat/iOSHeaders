//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssertionServices/BKSTerminationAssertionUpdateEvent.h>

@class BKSTerminationContext, NSString;

@interface BKSTerminationAssertionCreateEvent : BKSTerminationAssertionUpdateEvent
{
    unsigned long long _efficacy;
    NSString *_targetBundleIdentifier;
    BKSTerminationContext *_context;
}

@property(retain, nonatomic) BKSTerminationContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_targetBundleIdentifier;
@property(nonatomic) unsigned long long efficacy; // @synthesize efficacy=_efficacy;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end

