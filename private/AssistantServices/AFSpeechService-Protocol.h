//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SiriCoreLocalSpeechDESRecord, SiriCoreLocalSpeechUserData;

@protocol AFSpeechService <NSObject>
- (oneway void)runAdaptationRecipeEvaluation:(NSDictionary *)arg1 localSpeechDESRecord:(SiriCoreLocalSpeechDESRecord *)arg2 attachments:(NSArray *)arg3 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg4;
- (oneway void)fetchUserDataForLanguage:(NSString *)arg1 completion:(void (^)(SiriCoreLocalSpeechUserData *))arg2;
- (oneway void)fetchAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getOfflineDictationStatusWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)updateSpeechProfileWithLanguage:(NSString *)arg1 existingProfile:(NSData *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (oneway void)createSpeechProfileWithLanguage:(NSString *)arg1 existingProfile:(NSData *)arg2 userData:(SiriCoreLocalSpeechUserData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (oneway void)createSpeechProfileWithLanguage:(NSString *)arg1 JSONData:(NSData *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (oneway void)finishAudio;
- (oneway void)addAudioPacket:(NSData *)arg1;
- (oneway void)startSpeechRecognitionWithLanguage:(NSString *)arg1 task:(NSString *)arg2 context:(NSArray *)arg3 profile:(NSData *)arg4 userData:(NSDictionary *)arg5 narrowband:(_Bool)arg6 detectUtterances:(_Bool)arg7 censorSpeech:(_Bool)arg8 maximumRecognitionDuration:(double)arg9 farField:(_Bool)arg10 overrides:(NSDictionary *)arg11 modelOverrideURL:(NSURL *)arg12 didStartHandler:(void (^)(NSString *, NSError *))arg13;
- (oneway void)startRequestActivityWithCompletion:(void (^)(void))arg1;
@end

