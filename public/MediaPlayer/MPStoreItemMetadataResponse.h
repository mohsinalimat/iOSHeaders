//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary;

@interface MPStoreItemMetadataResponse : NSObject <NSCopying>
{
    NSMutableDictionary *_itemIdentifierToStoreItemMetadata;
    _Bool _finalResponse;
}

@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
- (void).cxx_destruct;
- (void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(_Bool *)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy, nonatomic) NSDate *earliestExpirationDate;
@property(readonly, copy, nonatomic) NSArray *itemIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

