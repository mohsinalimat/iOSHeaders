//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDMediaOutputDevice : NSObject
{
    _Bool _groupLeader;
    unsigned int _type;
    void *_outputDevice;
    NSString *_uniqueIdentifier;
    NSString *_groupIdentifier;
    NSString *_name;
    NSString *_modelID;
}

@property(readonly, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) void *outputDevice; // @synthesize outputDevice=_outputDevice;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldCreateWHAAccessory;
- (unsigned long long)hash;
@property(readonly, nonatomic, getter=isGroupLeader) _Bool groupLeader; // @synthesize groupLeader=_groupLeader;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)description;
- (void)dealloc;
- (id)initWithOutputDevice:(void *)arg1;

@end

