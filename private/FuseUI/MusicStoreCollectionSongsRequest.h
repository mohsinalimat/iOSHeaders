//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequest.h>

@class MPIdentifierSet;

@interface MusicStoreCollectionSongsRequest : MPStoreModelRequest
{
    MPIdentifierSet *_collectionIdentifiers;
}

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
@property(retain, nonatomic) MPIdentifierSet *collectionIdentifiers; // @synthesize collectionIdentifiers=_collectionIdentifiers;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

