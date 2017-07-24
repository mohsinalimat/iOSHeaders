//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputDevice, NSDictionary, NSLock, NSString;

__attribute__((visibility("hidden")))
@interface MRAVOutputDevice : NSObject
{
    NSLock *_lock;
    NSString *_name;
    NSString *_uid;
    NSString *_modelID;
    NSString *_groupID;
    NSDictionary *_modelSpecificInfo;
    _Bool _forceRemoteControllability;
    AVOutputDevice *_avOutputDevice;
}

@property(nonatomic) _Bool forceRemoteControllability; // @synthesize forceRemoteControllability=_forceRemoteControllability;
@property(readonly, nonatomic) AVOutputDevice *avOutputDevice; // @synthesize avOutputDevice=_avOutputDevice;
@property(readonly, nonatomic, getter=isLocalDevice) _Bool localDevice;
@property(readonly, nonatomic) float batteryLevel;
@property(readonly, nonatomic) NSDictionary *modelSpecificInfo;
@property(readonly, nonatomic) unsigned int deviceSubtype;
@property(readonly, nonatomic) unsigned int deviceType;
@property(readonly, nonatomic, getter=isGroupable) _Bool groupable;
@property(readonly, nonatomic, getter=isGroupLeader) _Bool groupLeader;
@property(readonly, nonatomic, getter=isRemoteControllable) _Bool remoteControllable;
@property(readonly, nonatomic) NSString *groupID;
@property(readonly, nonatomic) NSString *modelID;
@property(readonly, nonatomic) NSString *uid;
@property(readonly, nonatomic) NSString *name;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithAVOutputDevice:(id)arg1;

@end

