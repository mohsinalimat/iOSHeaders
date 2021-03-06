//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContextResponse, NSLocale, NSString;

@interface CKContextCompleter : NSObject
{
    CKContextResponse *_response;
    NSString *_ignorePrefix;
    NSLocale *_searchLocale;
    // Error parsing type: AB, name: _discarded
    unsigned long long _couldHaveShown;
    // Error parsing type: AB, name: _shown
    // Error parsing type: AB, name: _engaged
    // Error parsing type: AB, name: _transactionSuccessful
    NSString *_input;
    // Error parsing type: AI, name: _loggingShownMax
    // Error parsing type: AB, name: _loggingServerOverride
    // Error parsing type: AI, name: _loggingCouldHaveShownMax
    // Error parsing type: AI, name: _loggingInputLengthMax
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)discard;
- (void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2;
- (void)logTransactionSuccessfulForInput:(id)arg1;
- (void)logResultsSuppressed;
- (void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3;
- (void)logEngagement:(id)arg1 forInput:(id)arg2;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(_Bool)arg2 forInput:(id)arg3;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(_Bool)arg2;
- (id)queriesMatching:(id)arg1;
- (id)_resultsMatching:(id)arg1;
- (id)resultsMatching:(id)arg1;
- (id)initWithResponse:(id)arg1;

@end

