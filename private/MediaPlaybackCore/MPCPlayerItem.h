//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerEntity.h>

@class MPModelGenericObject, NSArray, NSString;

@interface MPCPlayerItem : MPCPlayerEntity
{
    NSString *_albumName;
    NSString *_artistName;
    NSString *_composerName;
    MPModelGenericObject *_modelGenericObjectRepresentation;
    CDStruct_45e4ec31 _durationSnapshot;
}

@property(readonly, nonatomic) MPModelGenericObject *modelGenericObjectRepresentation; // @synthesize modelGenericObjectRepresentation=_modelGenericObjectRepresentation;
@property(copy, nonatomic) NSString *composerName; // @synthesize composerName=_composerName;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, nonatomic) CDStruct_45e4ec31 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
- (void).cxx_destruct;
- (long long)comparePlaybackOrder:(id)arg1;
@property(copy, nonatomic) NSArray *representations;
- (id)initWithAVItem:(id)arg1;

@end

