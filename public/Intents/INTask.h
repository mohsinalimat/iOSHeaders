//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSpatialEventTrigger, INSpeakableString, INTemporalEventTrigger, NSDateComponents, NSString;

@interface INTask : NSObject <NSCopying, NSSecureCoding>
{
    INSpeakableString *_title;
    long long _status;
    long long _taskType;
    INSpatialEventTrigger *_spatialEventTrigger;
    INTemporalEventTrigger *_temporalEventTrigger;
    NSDateComponents *_createdDateComponents;
    NSDateComponents *_modifiedDateComponents;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSDateComponents *modifiedDateComponents; // @synthesize modifiedDateComponents=_modifiedDateComponents;
@property(readonly, copy) NSDateComponents *createdDateComponents; // @synthesize createdDateComponents=_createdDateComponents;
@property(readonly, copy) INTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(readonly, copy) INSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property(readonly) long long taskType; // @synthesize taskType=_taskType;
@property(readonly) long long status; // @synthesize status=_status;
@property(readonly, copy) INSpeakableString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8;

@end

