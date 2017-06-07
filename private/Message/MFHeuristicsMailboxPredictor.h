//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFMailboxPredictor-Protocol.h>

@class NSCache, NSDictionary, NSMutableString, NSString;
@protocol MFQueryableLibraryAdapter, MFUserProfileProvider;

@interface MFHeuristicsMailboxPredictor : NSObject <MFMailboxPredictor>
{
    id <MFUserProfileProvider> _userProfileProvider;
    id <MFQueryableLibraryAdapter> _library;
    NSDictionary *_parameters;
    NSCache *_mailboxIDCache;
    NSMutableString *_debugLog;
}

@property(retain, nonatomic) NSMutableString *debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) NSCache *mailboxIDCache; // @synthesize mailboxIDCache=_mailboxIDCache;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) id <MFQueryableLibraryAdapter> library; // @synthesize library=_library;
@property(retain, nonatomic) id <MFUserProfileProvider> userProfileProvider; // @synthesize userProfileProvider=_userProfileProvider;
- (id)_allowedRecipientsForMessage:(id)arg1;
- (_Bool)_isAllowedAddress:(id)arg1;
- (id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg1 withThreshold:(double)arg2;
- (id)_objectWithMeasure:(double)arg1 timesHigherThanFollowUpInMeasures:(id)arg2;
- (id)_topHitFromMailboxDictionary:(id)arg1 message:(id)arg2;
- (id)_topHitFromMailboxDictionary:(id)arg1;
- (id)_removeSpecialMailboxesInCounts:(id)arg1 message:(id)arg2;
- (id)_userCreatedMailboxIDs;
- (id)_recipientCountsForMessage:(id)arg1;
- (id)_listIDCountsForMessage:(id)arg1;
- (id)_senderCountsForMessage:(id)arg1;
- (id)_conversationIDCountsForMessage:(id)arg1;
- (_Bool)_limitToRecents;
- (id)_countsForField:(id)arg1 message:(id)arg2;
- (id)_weightedModePredictionsForMessage:(id)arg1;
- (id)_summedWeightedPredictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (id)_orderedModePredictionForMessage:(id)arg1;
- (id)_predictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (_Bool)_modeParameterIs:(id)arg1;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id *)arg3;
- (void)dealloc;
- (id)_mergeDefaultParameters:(id)arg1 withParameters:(id)arg2;
- (id)initWithUserProfileProvider:(id)arg1 libraryAdapter:(id)arg2 parameters:(id)arg3;
- (id)initWithUserProfileProvider:(id)arg1 libraryAdapter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

