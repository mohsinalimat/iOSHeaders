//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAVChat, IMAVChatProxy, NSDictionary, NSString;

@interface IMAVChatParticipantProxy : NSObject
{
    NSDictionary *_info;
    IMAVChatProxy *_chat;
}

- (void)forwardInvocation:(id)arg1;
- (_Bool)isLocalParticipant;
@property(readonly, nonatomic) _Bool _inviteDelivered;
@property(readonly, retain, nonatomic) NSString *name;
@property(readonly, retain, nonatomic) IMAVChat *avChat;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 chat:(id)arg2;

@end

