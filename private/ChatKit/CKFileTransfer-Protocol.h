//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class IMMessage, NSDictionary, NSError, NSString, NSURL;

@protocol CKFileTransfer <NSObject>
@property(readonly, nonatomic, getter=isRestoring) _Bool restoring;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
@property(readonly, nonatomic, getter=isFileDataReady) _Bool fileDataReady;
@property(readonly, nonatomic, getter=isFileURLFinalized) _Bool fileURLFinalized;
@property(readonly, nonatomic) _Bool hideAttachment;
@property(readonly, nonatomic) _Bool isSticker;
@property(readonly, nonatomic) unsigned long long totalBytes;
@property(readonly, nonatomic) unsigned long long currentBytes;
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, copy, nonatomic) NSDictionary *attributionInfo;
@property(readonly, copy, nonatomic) NSDictionary *stickerUserInfo;
@property(readonly, copy, nonatomic) NSDictionary *transcoderUserInfo;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSURL *fileURL;
@property(readonly, copy, nonatomic) NSString *guid;
@property(retain, nonatomic) IMMessage *IMMessage;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
- (id)initWithFileURL:(NSURL *)arg1 transcoderUserInfo:(NSDictionary *)arg2 attributionInfo:(NSDictionary *)arg3 hideAttachment:(_Bool)arg4;
- (id)initWithTransferGUID:(NSString *)arg1 imMessage:(IMMessage *)arg2;

@optional
- (id)initWithStickerFileURL:(NSURL *)arg1 transferUserInfo:(NSDictionary *)arg2 attributionInfo:(NSDictionary *)arg3;
@end

