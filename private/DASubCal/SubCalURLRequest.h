//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DASubCal/NSURLConnectionDelegate-Protocol.h>

@class DAStatusReport, NSDate, NSFileHandle, NSMutableData, NSString, NSTimer, NSURL, NSURLConnection;
@protocol SubCalURLRequestDelegate;

@interface SubCalURLRequest : NSObject <NSURLConnectionDelegate>
{
    _Bool _useFileCache;
    _Bool _sendDataUpdateCallback;
    NSURL *_url;
    id <SubCalURLRequestDelegate> _delegate;
    NSString *_username;
    NSString *_password;
    double _timestamp;
    NSString *_filePath;
    DAStatusReport *_statusReport;
    NSURLConnection *_connection;
    NSMutableData *_connectionData;
    NSFileHandle *_fileHandle;
    NSDate *_startTime;
    NSTimer *_idleTimer;
    NSString *_startRunloopDescriptionString;
}

+ (void)_initializeFileCache;
+ (id)_cachedICSFilesDirectory;
@property(retain, nonatomic) NSString *startRunloopDescriptionString; // @synthesize startRunloopDescriptionString=_startRunloopDescriptionString;
@property(retain, nonatomic) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool sendDataUpdateCallback; // @synthesize sendDataUpdateCallback=_sendDataUpdateCallback;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSMutableData *connectionData; // @synthesize connectionData=_connectionData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) DAStatusReport *statusReport; // @synthesize statusReport=_statusReport;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) _Bool useFileCache; // @synthesize useFileCache=_useFileCache;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <SubCalURLRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)_receivedDataForFile:(id)arg1;
- (void)_openFileHandle;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)_respondToChallenge:(id)arg1 withCredential:(id)arg2 noCredentialBehavior:(int)arg3;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)_finishWithError:(id)arg1;
- (void)cancel;
- (void)startConnection;
- (void)_cancelIdleTimer;
- (void)_extendIdleTimer;
- (void)_createIdleTimer;
- (void)_idleTimerFired;
- (void)_markEndTime;
- (void)_markStartTime;
- (void)_setHeadersOnRequest:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

