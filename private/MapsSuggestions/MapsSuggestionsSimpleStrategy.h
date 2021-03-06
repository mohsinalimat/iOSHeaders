//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsStrategy-Protocol.h>

@class MapsSuggestionsManager, NSMutableArray, NSString;

@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy>
{
    NSMutableArray *_filters;
    NSMutableArray *_improvers;
    NSMutableArray *_dedupers;
    struct NSMutableArray *_previousResults;
    MapsSuggestionsManager *_manager;
}

@property(nonatomic) __weak MapsSuggestionsManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)removeAllDedupers;
- (void)addDeduper:(id)arg1;
- (void)removeAllImprovers;
- (void)addImprover:(id)arg1;
- (void)removeAllFilters;
- (void)removeFilter:(id)arg1;
- (void)addFilter:(id)arg1;
- (struct NSArray *)topSuggestionsWithSourceEntries:(struct NSDictionary *)arg1 error:(id *)arg2;
- (struct NSMutableArray *)_filteredPreviousResultsCrosscheckingStorage:(struct NSDictionary *)arg1;
- (_Bool)_entry:(id)arg1 existsInStorage:(struct NSDictionary *)arg2;
- (_Bool)_dedupeByEnrichingEntries:(struct NSArray *)arg1 withEntry:(id)arg2;
- (_Bool)_improveEntry:(id)arg1;
- (_Bool)shouldKeepEntry:(id)arg1;
- (void)clearData;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

