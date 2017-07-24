//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUBonjourDevice, CUReadRequest, CUWriteRequest, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUTCPConnection : NSObject
{
    struct AsyncConnection *_connector;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    struct NSMutableArray *_readRequests;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    struct NSMutableArray *_writeRequests;
    CDUnknownBlockType _activateCompletion;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    unsigned long long _ifExtendedFlags;
    unsigned int _ifFlags;
    unsigned int _ifIndex;
    unsigned char _ifMACAddress[6];
    unsigned int _ifMedia;
    char _ifName[17];
    unsigned int _ifTransportType;
    CDUnion_fab80606 _peerAddr;
    CDUnion_fab80606 _selfAddr;
    int _defaultPort;
    unsigned int _flags;
    int _socketFD;
    double _connectTimeoutSecs;
    double _dataTimeoutSecs;
    CUBonjourDevice *_destinationBonjour;
    NSString *_destinationString;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _serverInvalidationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType serverInvalidationHandler; // @synthesize serverInvalidationHandler=_serverInvalidationHandler;
@property(nonatomic) int socketFD; // @synthesize socketFD=_socketFD;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) int defaultPort; // @synthesize defaultPort=_defaultPort;
@property(copy, nonatomic) NSString *destinationString; // @synthesize destinationString=_destinationString;
@property(retain, nonatomic) CUBonjourDevice *destinationBonjour; // @synthesize destinationBonjour=_destinationBonjour;
@property(nonatomic) double dataTimeoutSecs; // @synthesize dataTimeoutSecs=_dataTimeoutSecs;
@property(nonatomic) double connectTimeoutSecs; // @synthesize connectTimeoutSecs=_connectTimeoutSecs;
- (void).cxx_destruct;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (_Bool)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (void)_processWrites;
- (void)writeEndOfDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)writeWithRequest:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (_Bool)_processReadStatus;
- (void)_abortReadsWithError:(id)arg1;
- (void)_prepareReadRequest:(id)arg1;
- (void)_processReads:(_Bool)arg1;
- (void)readWithRequest:(id)arg1;
- (_Bool)_setupIOAndReturnError:(id *)arg1;
- (_Bool)_startConnectingToDestination:(id)arg1 error:(id *)arg2;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (_Bool)activateDirectAndReturnError:(id *)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

