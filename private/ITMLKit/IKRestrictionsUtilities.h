//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCacheDelegate-Protocol.h>

@class NSString;

@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>
{
}

+ (id)_ratingDictionaryForDomain:(id)arg1 countryCode:(id)arg2;
+ (id)rankingForRestrictionRating:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;
+ (id)orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2;
+ (id)ratingForRestrictionRanking:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;
+ (id)_purgableRatingsDictionary;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

