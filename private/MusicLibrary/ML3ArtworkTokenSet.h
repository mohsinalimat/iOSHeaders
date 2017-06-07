//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3Entity, NSDictionary, NSString;

@interface ML3ArtworkTokenSet : NSObject
{
    ML3Entity *_entity;
    long long _artworkType;
    NSString *_availableArtworkToken;
    NSString *_fetchableArtworkToken;
    long long _fetchableArtworkSourceType;
    NSDictionary *_artworkSourceToTokenMap;
    _Bool _faultedInBestTokens;
    _Bool _faultedInTokens;
    double _retrievalTime;
}

@property(nonatomic) double retrievalTime; // @synthesize retrievalTime=_retrievalTime;
- (void).cxx_destruct;
- (void)_faultInTokens;
- (void)_faultInBestTokens;
- (id)artworkTokenForSource:(long long)arg1;
@property(readonly, nonatomic) long long fetchableArtworkSourceType;
@property(readonly, nonatomic) NSString *fetchableArtworkToken;
@property(readonly, nonatomic) NSString *availableArtworkToken;
- (id)initWithEntity:(id)arg1 artworkType:(long long)arg2;

@end

