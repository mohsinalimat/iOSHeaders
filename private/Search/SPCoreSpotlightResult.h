//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SFSearchResult_Compatibility.h>

@class NSArray, NSDate, NSString;

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility
{
    _Bool _completed;
    NSString *_relatedUniqueIdentifier;
    NSString *_itemIdentifier;
    NSDate *_interestingDate;
    NSString *_domainIdentifier;
    long long _incomingCount;
    long long _outgoingCount;
    NSString *_relatedBundleID;
    struct ranking_index_score_t _buddyScore;
}

@property(retain) NSString *relatedBundleID; // @synthesize relatedBundleID=_relatedBundleID;
@property long long outgoingCount; // @synthesize outgoingCount=_outgoingCount;
@property long long incomingCount; // @synthesize incomingCount=_incomingCount;
@property(retain) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property _Bool completed; // @synthesize completed=_completed;
@property(retain) NSDate *interestingDate; // @synthesize interestingDate=_interestingDate;
@property(retain) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property struct ranking_index_score_t buddyScore; // @synthesize buddyScore=_buddyScore;
@property(retain) NSString *relatedUniqueIdentifier; // @synthesize relatedUniqueIdentifier=_relatedUniqueIdentifier;
- (void).cxx_destruct;
- (id)description;
- (Class)classForCoder;
- (_Bool)hasDetail;
@property(retain) NSArray *compatibilityDescriptions;
- (id)init;

@end

