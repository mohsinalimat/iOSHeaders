//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSMutableCopying-Protocol.h>
#import <MediaRemote/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface MRApplicationActivity : NSObject <NSSecureCoding, NSMutableCopying>
{
    NSUUID *_uniqueIdentifier;
    NSString *_primaryApplicationDisplayID;
    NSString *_secondaryApplicationDisplayID;
    _Bool _shouldPrepareAppPlaybackQueue;
    int _status;
    int _creatorProcessID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int creatorProcessID; // @synthesize creatorProcessID=_creatorProcessID;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool shouldPrepareAppPlaybackQueue; // @synthesize shouldPrepareAppPlaybackQueue=_shouldPrepareAppPlaybackQueue;
@property(readonly, nonatomic) NSString *secondaryApplicationDisplayID; // @synthesize secondaryApplicationDisplayID=_secondaryApplicationDisplayID;
@property(readonly, nonatomic) NSString *primaryApplicationDisplayID; // @synthesize primaryApplicationDisplayID=_primaryApplicationDisplayID;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPrimaryAppDisplayID:(id)arg1 secondaryAppDisplayID:(id)arg2;

@end

