//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, SFClient, SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupServiceiOS : NSObject
{
    _Bool _activateCalled;
    _Bool _advertiseFast;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSUUID *_peer;
    _Bool _pinShowing;
    SFClient *_preventExitForLocaleClient;
    SFService *_sfService;
    _Bool _sfServiceActivated;
    SFSession *_sfSession;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _showPINHandlerEx;
    CDUnknownBlockType _showPINHandler;
    CDUnknownBlockType _hidePINHandler;
    CDUnknownBlockType _progressHandlerEx;
    CDUnknownBlockType _receivedObjectHandler;
}

@property(copy, nonatomic) CDUnknownBlockType receivedObjectHandler; // @synthesize receivedObjectHandler=_receivedObjectHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandlerEx; // @synthesize progressHandlerEx=_progressHandlerEx;
@property(copy, nonatomic) CDUnknownBlockType hidePINHandler; // @synthesize hidePINHandler=_hidePINHandler;
@property(copy, nonatomic) CDUnknownBlockType showPINHandler; // @synthesize showPINHandler=_showPINHandler;
@property(copy, nonatomic) CDUnknownBlockType showPINHandlerEx; // @synthesize showPINHandlerEx=_showPINHandlerEx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_handleSessionSecured:(id)arg1;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)sendSetupAction:(unsigned int)arg1 info:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)sendObject:(id)arg1;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_sfServiceStart;
- (void)_run;
- (void)_completed:(int)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

