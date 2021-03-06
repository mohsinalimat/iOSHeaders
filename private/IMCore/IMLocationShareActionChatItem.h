//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMLocationShareActionChatItem : IMTranscriptChatItem
{
    IMHandle *_sender;
    IMHandle *_otherHandle;
}

@property(readonly, nonatomic) IMHandle *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
@property(readonly, nonatomic) long long direction;
@property(readonly, nonatomic) long long actionType;
@property(readonly, nonatomic) _Bool isFromMe;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

