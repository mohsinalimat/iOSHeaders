//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRGameControllerPropertiesMessage : MRProtocolMessage
{
    void *_properties;
}

- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long controllerID;
@property(readonly, nonatomic) void *properties;
- (void)dealloc;
- (id)initWithGameControllerProperties:(void *)arg1 controllerID:(unsigned long long)arg2;

@end

