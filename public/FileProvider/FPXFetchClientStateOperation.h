//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPOperation.h>

@class CSSearchableIndex, NSString;

__attribute__((visibility("hidden")))
@interface FPXFetchClientStateOperation : FPOperation
{
    CSSearchableIndex *_index;
    NSString *_indexName;
}

+ (id)_currentIndexerVersion;
- (void).cxx_destruct;
- (void)main;
- (void)_fetchClientState;
- (void)_handleFetchedClientState:(id)arg1 error:(id)arg2;
- (void)_markClientStateResetDone;
- (_Bool)_clientStateResetNeeded;
- (id)initWithIndex:(id)arg1 indexName:(id)arg2;

@end

