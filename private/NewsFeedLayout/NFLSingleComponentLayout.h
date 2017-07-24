//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedComponentLayout-Protocol.h>

@class NFLFeedCollectionViewLayoutAttributes, NFLRankedLayout, NSArray, NSString;
@protocol NFLFeedTileInfo;

@interface NFLSingleComponentLayout : NSObject <NFLFeedComponentLayout>
{
    NSObject<NFLFeedTileInfo> *_tileInfo;
    NFLRankedLayout *_rankedLayout;
}

+ (id)singleComponentLayoutWithRankedLayout:(id)arg1 tileInfo:(id)arg2;
@property(retain, nonatomic) NFLRankedLayout *rankedLayout; // @synthesize rankedLayout=_rankedLayout;
@property(copy, nonatomic) NSObject<NFLFeedTileInfo> *tileInfo; // @synthesize tileInfo=_tileInfo;
- (void).cxx_destruct;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)tileInfosUsedCount;
@property(readonly, copy, nonatomic) NSArray *tileInfosUsed;
@property(readonly, nonatomic) double rank;
@property(readonly, nonatomic) unsigned long long rowSpan;
@property(readonly, nonatomic) unsigned long long columnSpan;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

