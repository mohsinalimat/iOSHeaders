//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding>
{
    int _pid;
    unsigned int _contextID;
    NSString *_clientID;
    NSString *_displayUUID;
}

+ (id)propertiesWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned int)arg3;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 contextID:(unsigned int)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
@property(readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(readonly, copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)propertiesOneLevelMoreGeneric;
- (_Bool)isEqualNotIncludingClientIDAndPid:(id)arg1;
- (id)conciseDescription;
- (id)description;
- (void)setPid:(int)arg1;
- (void)dealloc;
- (id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;

@end

