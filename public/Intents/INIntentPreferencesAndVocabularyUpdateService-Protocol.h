//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INVocabularyUpdateService-Protocol.h>

@class NSString;

@protocol INIntentPreferencesAndVocabularyUpdateService <INVocabularyUpdateService>
- (void)verifyProcessCanDonateIntentWithName:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)fetchCurrentSiriLanguageCode:(void (^)(NSString *))arg1;
- (void)requestSiriAuthorization:(void (^)(long long))arg1;
- (void)fetchSiriAuthorization:(void (^)(long long))arg1;
@end

