//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPArtworkDataSourceVisualIdenticality-Protocol.h>

@class NSString;

@interface MPNowPlayingContentItemArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality>
{
    _Bool _hasArtwork;
    NSString *_identifier;
    NSString *_artworkIdentifier;
}

@property(nonatomic) _Bool hasArtwork; // @synthesize hasArtwork=_hasArtwork;
@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 artworkIdentifier:(id)arg2 artwork:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

