//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface IDSSocketPairResourceTransferReceiver : NSObject
{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    int _fileDescriptor;
    unsigned long long _totalBytesExpected;
    unsigned long long _totalBytesReceived;
    _Bool _done;
    _Bool _isResuming;
    _Bool _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

+ (id)incomingFilePath;
+ (id)incomingFilePathForMessageUUID:(id)arg1;
@property(readonly, retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(readonly, nonatomic) unsigned long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
- (id)finalizedMessageDictionaryIfDone;
- (_Bool)appendMessage:(id)arg1 receiverError:(unsigned char *)arg2;
- (_Bool)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2;
- (_Bool)writeResourceData:(id)arg1;
- (void)dealloc;
- (void)abortTransfer;
- (id)initWithMessage:(id)arg1 resumeResourceTransfers:(_Bool)arg2 receiverError:(unsigned char *)arg3;

@end

