//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString;

@protocol DAMessageFetchAttachmentConsumer
- (void)consumeData:(NSData *)arg1 ofContentType:(NSString *)arg2 forAttachmentNamed:(NSString *)arg3 ofMessageWithServerID:(NSString *)arg4;

@optional
- (void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(NSString *)arg2 ofMessageWithServerID:(NSString *)arg3 dataWasBase64:(_Bool)arg4 sentBytesCount:(unsigned long long)arg5 receivedBytesCount:(unsigned long long)arg6;
- (void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(NSString *)arg2 ofMessageWithServerID:(NSString *)arg3 dataWasBase64:(_Bool)arg4;
@end

