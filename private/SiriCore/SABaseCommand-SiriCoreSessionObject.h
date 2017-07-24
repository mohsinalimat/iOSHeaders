//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SiriCore/SiriCoreSessionObject-Protocol.h>

@class NSString;

@interface SABaseCommand (SiriCoreSessionObject) <SiriCoreSessionObject>
- (_Bool)siriCore_supportedByLocalSession;
- (void)siriCore_setSessionRequestId:(id)arg1;
- (id)siriCore_requestId;
- (void)siriCore_dispatchSendCompletionsWithResult:(long long)arg1 error:(id)arg2;
- (void)siriCore_addSendCompletion:(CDUnknownBlockType)arg1;
- (_Bool)siriCore_supportsSendCompletions;
- (void)siriCore_logDiagnostics;
- (_Bool)siriCore_isRestartable;
- (_Bool)siriCore_isRetryable;
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;
- (id)siriCore_serializedAceDataError:(id *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId;
@property(readonly) Class superclass;
@end

