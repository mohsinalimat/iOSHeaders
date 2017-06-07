//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISReview, NSURL;

@interface ISFetchReviewOperation : ISOperation
{
    long long _assetType;
    _Bool _backgroundReview;
    unsigned long long _itemIdentifier;
    unsigned long long _softwareVersionIdentifier;
    ISReview *_review;
    NSURL *_url;
}

@property(retain) NSURL *url; // @synthesize url=_url;
@property unsigned long long softwareVersionIdentifier; // @synthesize softwareVersionIdentifier=_softwareVersionIdentifier;
@property(retain) ISReview *review; // @synthesize review=_review;
@property unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(getter=isBackgroundReview) _Bool backgroundReview; // @synthesize backgroundReview=_backgroundReview;
@property long long assetType; // @synthesize assetType=_assetType;
- (void)_fetchReviewInformation;
- (void)run;
- (void)dealloc;

@end

