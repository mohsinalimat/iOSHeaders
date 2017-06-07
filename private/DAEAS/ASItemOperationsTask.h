//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class ASMailMessage, NSArray;

@interface ASItemOperationsTask : ASTask
{
    NSArray *_commands;
    int _numReplacedItems;
    int _bodyTruncationBytes;
    int _mimeSupport;
    ASMailMessage *_streamingMailMessage;
}

- (void).cxx_destruct;
- (void)setStreamingMailMessage:(id)arg1;
- (id)streamingMailMessage;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (void)finishWithError:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)replacementObjectForEmailItem:(id)arg1;
- (_Bool)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6;
- (id)requestBody;
- (int)_mimeSupportCode;
- (void)setCommands:(id)arg1;
- (id)commands;
- (void)setBodyTruncationBytes:(int)arg1;
- (int)bodyType;
- (void)setMIMESupport:(int)arg1;
- (int)mimeSupport;
- (id)init;
- (int)commandCode;

@end

