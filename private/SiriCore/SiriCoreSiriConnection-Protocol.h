//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSError, NSString, NSURL;
@protocol SiriCoreSessionObject, SiriCoreSiriConnectionDelegate;

@protocol SiriCoreSiriConnection <NSObject>
@property(nonatomic) _Bool imposePolicyBan;
@property(copy, nonatomic) NSString *connectionId;
@property(retain, nonatomic) Class peerStreamProviderClass;
@property(nonatomic) _Bool siriConnectionUsesPeerManagedSync;
@property(nonatomic) _Bool deviceIsInWalkaboutExperimentGroup;
@property(nonatomic) _Bool usesProxyConnection;
@property(copy, nonatomic) NSString *productTypePrefix;
@property(copy, nonatomic) NSString *peerVersion;
@property(copy, nonatomic) NSString *peerType;
@property(copy, nonatomic) NSString *peerAssistantIdentifier;
@property(copy, nonatomic) NSString *assistantIdentifier;
@property(nonatomic) double timeout;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *aceHost;
@property(copy, nonatomic) NSError *skipPeerError;
@property(nonatomic) _Bool skipEdge;
@property(nonatomic) _Bool skipPeer;
@property(nonatomic) _Bool prefersWWAN;
@property(copy, nonatomic) NSURL *url;
@property(nonatomic) __weak id <SiriCoreSiriConnectionDelegate> delegate;
- (void)getConnectionMetrics:(void (^)(SiriCoreConnectionMetrics *))arg1;
- (void)getAnalysisInfo:(void (^)(SiriCoreAceConnectionAnalysisInfo *))arg1;
- (void)barrier:(void (^)(_Bool))arg1;
- (void)cancelSynchronously:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)setSendPings:(_Bool)arg1;
- (void)sendCommand:(id <SiriCoreSessionObject>)arg1 errorHandler:(void (^)(NSError *))arg2;
- (void)start;
@end

