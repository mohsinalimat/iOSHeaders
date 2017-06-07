//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class NSString, VMVoicemailGreeting;

@protocol VMServerXPCProtocol <NSObject>
- (void)changePassword:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)reportTranscriptionRatedAccurate:(_Bool)arg1 forIdentifier:(long long)arg2;
- (void)reportTranscriptionProblemForIdentifier:(long long)arg1;
- (void)removeAllVoicemails;
- (void)setReadForIdentifier:(long long)arg1;
- (void)setDeletedForIdentifier:(long long)arg1;
- (void)removeVoicemailFromTrashWithIdentifier:(long long)arg1;
- (void)setTrashedForIdentifier:(long long)arg1;
- (void)setVoicemailGreeting:(VMVoicemailGreeting *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)retrieveVoicemailGreeting:(void (^)(VMVoicemailGreeting *, NSError *))arg1;
- (void)allVoicemails:(void (^)(NSArray *))arg1;
- (void)synchronize;
- (void)requestInitialState:(void (^)(VMVoicemailCapabilities *, NSArray *, _Bool, _Bool, _Bool))arg1;
@end

