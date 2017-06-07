//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameKitServices/GKOOBMessage.h>

@class NSData;

@interface GKVoiceChatSessionMessage : GKOOBMessage
{
    NSData *_data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}

- (unsigned int)conferenceID;
- (_Bool)_checkSize:(unsigned long long)arg1;
- (_Bool)_checkType:(unsigned short)arg1;
- (unsigned int)subtype;
- (id)payload;
- (id)data;
- (void)dealloc;
- (id)initWithPayload:(id)arg1 conferenceID:(unsigned int)arg2 subtype:(unsigned int)arg3;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end

