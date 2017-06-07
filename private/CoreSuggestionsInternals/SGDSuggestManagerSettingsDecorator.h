//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGDSuggestManagerAllProtocol-Protocol.h>

@class SGDSuggestManager;

@interface SGDSuggestManagerSettingsDecorator : NSObject <SGDSuggestManagerAllProtocol>
{
    SGDSuggestManager *_manager;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)harvestedSuggestionsFromMessages:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)keepDirty:(_Bool)arg1;
- (void)drainQueueCompletelyWithCompletion:(CDUnknownBlockType)arg1;
- (void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSearchableItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetConfirmationAndRejectionHistory:(CDUnknownBlockType)arg1;
- (void)prepareForRealtimeExtraction:(CDUnknownBlockType)arg1;
- (void)isEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)guardAllArgumentsInBlockMethodSignatureAreObjectsOrThrow:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithManager:(id)arg1;

@end

