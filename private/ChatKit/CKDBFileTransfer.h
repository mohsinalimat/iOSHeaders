//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CKFileTransfer-Protocol.h>

@class IMMessage, NSDictionary, NSError, NSString, NSURL;

@interface CKDBFileTransfer : NSObject <CKFileTransfer>
{
    _Bool _isSticker;
    _Bool _hideAttachment;
    NSString *_guid;
    NSURL *_fileURL;
    NSDictionary *_transcoderUserInfo;
    NSDictionary *_stickerUserInfo;
    NSString *_filename;
    long long _transferState;
    NSDictionary *_attributionInfo;
}

@property(copy, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property(nonatomic) long long transferState; // @synthesize transferState=_transferState;
@property(readonly, nonatomic) _Bool hideAttachment; // @synthesize hideAttachment=_hideAttachment;
@property(readonly, nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) NSDictionary *stickerUserInfo; // @synthesize stickerUserInfo=_stickerUserInfo;
@property(readonly, copy, nonatomic) NSDictionary *transcoderUserInfo; // @synthesize transcoderUserInfo=_transcoderUserInfo;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
@property(readonly, nonatomic, getter=isRestoring) _Bool restoring;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
@property(readonly, nonatomic, getter=isFileDataReady) _Bool fileDataReady;
@property(readonly, nonatomic, getter=isFileURLFinalized) _Bool fileURLFinalized;
@property(readonly, nonatomic) unsigned long long totalBytes;
@property(readonly, nonatomic) unsigned long long currentBytes;
@property(readonly, copy, nonatomic) NSError *error;
- (id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(_Bool)arg4;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(retain, nonatomic) IMMessage *IMMessage; // @dynamic IMMessage;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
